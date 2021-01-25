<?php

declare(strict_types=1);

namespace Chipmunk;

use Chipmunk\Exception\LogicException;

class Space extends AbstractFfi
{
    private Vector $gravity;

    /**
     * Will get the reference on the first Space::getStaticBody() call, then
     * will always return the same instance
     */
    private ?Body $staticBody = null;

    public function __construct()
    {
        parent::__construct();

        $this->setCData($this->getFfi()->cpSpaceNew());
    }

    public function setGravity(Vector $gravity)
    {
        $this->gravity = $gravity;

        $this->getFfi()->cpSpaceSetGravity($this->getCData(), $this->gravity->getCData());
    }

    /**
     * The Space provided static body for a given cpSpace.
     * This is merely provided for convenience and you are not required to use it.
     */
    public function getStaticBody(): Body
    {
        if (null === $this->staticBody) {
            $this->setStaticBody(Body::fromSpace($this));
        }

        return $this->staticBody;
    }

    /**
     * Should be called only in the constructor
     *
     * @todo Check Chipmunk's way to handle setting a new static body
     * @throws LogicException
     */
    public function setStaticBody(Body $staticBody): self
    {
        // TODO
        // if (null !== $this->staticBody) {
        //     throw new LogicException("Attempted to replace an already initialized Space's body");
        // }

        $this->staticBody = $staticBody;

        return $this;
    }

    public function addShape(Shape $shape): self
    {
        $this->getFfi()->cpSpaceAddShape($this->getCData(), $shape->getCData());

        return $this;
    }
}
