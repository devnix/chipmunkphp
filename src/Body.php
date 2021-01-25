<?php

declare(strict_types=1);

namespace Chipmunk;

use Chipmunk\Exception\RuntimeException;

/**
 * A Body can be copied and pickled. Sleeping bodies that are copied will be
 * awake in the fresh copy. When a Body is copied any spaces, shapes or
 * constraints attached to the body will not be copied.
 *
 *  A rigid body
 *
 *  - Use forces to modify the rigid bodies if possible. This is likely to be
 *  the most stable.
 *  - Modifying a body’s velocity shouldn’t necessarily be avoided, but applying
 *   large changes can cause strange results in the simulation. Experiment
 *   freely, but be warned.
 *  - Don’t modify a body’s position every step unless you really know what you
 *  are doing. Otherwise you’re likely to get the position/velocity badly out
 *  of sync.
 */
class Body extends AbstractFfi
{
    /**
     * Alias of CP_BODY_TYPE_DYNAMIC
     *
     * A dynamic body is one that is affected by gravity, forces, and collisions.
     * This is the default body type.
     */
    public const TYPE_DYNAMIC = 0;

    /**
     * Alias of CP_BODY_TYPE_KINEMATIC
     *
     * A kinematic body is an infinite mass, user controlled body that is not
     * affected by gravity, forces or collisions.
     *
     * Instead the body only moves based on it's velocity.
     *
     * Dynamic bodies collide normally with kinematic bodies, though the
     * kinematic body will be unaffected.
     *
     * Collisions between two kinematic bodies, or a kinematic body and a static
     *  body produce collision callbacks, but no collision response.
     */
    public const TYPE_KINEMATIC = 1;

    /**
     * Alias of CP_BODY_TYPE_STATIC
     *
     * A static body is a body that never (or rarely) moves. If you move a
     * static body, you must call one of the cpSpaceReindex*() functions.
     *
     * Chipmunk uses this information to optimize the collision detection.
     *
     * Static bodies do not produce collision callbacks when colliding with
     * other static bodies.
     */
    public const TYPE_STATIC = 2;

    /**
     * Create a new Body
     *
     * Mass and moment are ignored when $type is Body::TYPE_KINEMATIC or Body::TYPE_STATIC.
     *
     * Guessing the mass for a body is usually fine, but guessing a moment of
     * inertia can lead to a very poor simulation so it’s recommended to use
     * Chipmunk’s moment calculations to estimate the moment for you.
     *
     * There are two ways to set up a dynamic body. The easiest option is to
     * create a body with a mass and moment of 0, and set the mass or density of
     * each collision shape added to the body. Chipmunk will automatically
     * calculate the mass, moment of inertia, and center of gravity for you.
     * This is probably preferred in most cases. Note that these will only be
     * correctly calculated after the body and shape are added to a space.
     *
     * The other option is to set the mass of the body when it’s created, and
     * leave the mass of the shapes added to it as 0.0. This approach is more
     * flexible, but is not as easy to use. Don’t set the mass of both the body
     * and the shapes. If you do so, it will recalculate and overwrite your
     * custom mass value when the shapes are added to the body.
     *
     * @throws RuntimeException if specified type does not exists
     *
     */
    public function __construct(float $mass = 0.0, float $moment = 0.0, int $type = self::TYPE_DYNAMIC)
    {
        parent::__construct();

        $this->setCData($this->getFfi()->cpBodyNew($mass, $moment));

        $this->setType($type);
    }

    /**
     * Get a Space's static body reference
     */
    public static function fromSpace(Space $space): self
    {
        $body = new self();

        $body->setCData($body->getFfi()->cpSpaceGetStaticBody($space->getCData()));

        return $body;
    }

    /**
     * @throws RuntimeException if specified type does not exists
     */
    private function assertType(int $type): void
    {
        if (!in_array($type, [self::TYPE_DYNAMIC, self::TYPE_KINEMATIC, self::TYPE_STATIC])) {
            throw new RuntimeException(sprintf('Unrecognized type "%s"', $type));
        }
    }

    /**
     * The type of a body (Body::TYPE_DYNAMIC, Body::TYPE_KINEMATIC or
     * Body::TYPE_STATIC).
     *
     * When changing an body to a dynamic body, the mass and moment of inertia
     * are recalculated from the shapes added tothe body. Custom calculated
     * moments of inertia are not preserved when changing types.
     *
     * This function cannot be called directly in a collision callback.
     */
    public function getType(): int
    {
        return $this->getFfi()->cpBodyGetType($this->getCData());
    }

    /**
     * The type of a body (Body::TYPE_DYNAMIC, Body::TYPE_KINEMATIC or
     * Body::TYPE_STATIC).
     *
     * When changing an body to a dynamic body, the mass and moment of inertia
     * are recalculated from the shapes added tothe body. Custom calculated
     * moments of inertia are not preserved when changing types.
     *
     * This function cannot be called directly in a collision callback.
     *
     * @throws RuntimeException if specified type does not exists
     */
    public function setType(int $type): self
    {
        $this->assertType($type);

        $this->getFfi()->cpBodySetType($this->getCData(), $type);

        return $this;
    }

    public function getMass(): float
    {
        return $this->getFfi()->cpBodyGetMass($this->getCData());
    }

    public function setMass(float $mass): self
    {
        return $this->getFfi()->cpBodySetMass($this->getCData(), $mass);
    }

    public function getMoment(): float
    {
        return $this->getFfi()->cpBodyGetMoment($this->getCData());
    }

    public function setMoment(float $moment): self
    {
        return $this->getFfi()->cpBodySetMoment($this->getCData(), $moment);
    }
}
