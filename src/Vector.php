<?php

declare(strict_types=1);

namespace Chipmunk;

class Vector extends AbstractFfi
{
    public function __construct(float $x = 0.0, float $y = 0.0)
    {
        parent::__construct();

        $this->setCData($this->getFfi()->new('cpVect'));

        $this->getCData()->x = $x;
        $this->getCData()->y = $y;
    }

    public function getX(): float
    {
        return $this->getCData()->x;
    }

    public function setX(float $x): self
    {
        $this->getCData()->x = $x;

        return $this;
    }

    public function getY(): float
    {
        return $this->getCData()->y;
    }

    public function setY(float $y): self
    {
        $this->getCData()->y = $y;

        return $this;
    }
}
