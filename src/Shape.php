<?php

declare(strict_types=1);

namespace Chipmunk;

/**
 * Allocate and initialize a segment shape.
 */
class Shape extends AbstractFfi
{
    public function __construct(Body $body, Vector $a, Vector $b, float $radius)
    {
        parent::__construct();

        $this->setCData(
            $this->getFfi()->cpSegmentShapeNew(
                $body->getCData(),
                $a->getCData(),
                $b->getCData(),
                $radius
            )
        );
    }

    public function getFriction(): float
    {
        return $this->getFfi()->cpShapeGetFriction($this->getCData());
    }

    public function setFriction(float $friction): self
    {
        $this->getFfi()->cpShapeSetFriction($this->getCData(), $friction);

        return $this;
    }
}
