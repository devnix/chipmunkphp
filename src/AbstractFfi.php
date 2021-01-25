<?php

declare(strict_types=1);

namespace Chipmunk;

abstract class AbstractFfi
{
    private \FFI $ffi;

    /**
     * Represents each class CData. For example, in class Space it represents a cpSpace struct.
     */
    private \FFI\CData $cData;

    public function __construct()
    {
        $this->ffi = Environment::getFfi();
    }

    public function getFfi(): \FFI
    {
        return $this->ffi;
    }

    /**
     * Should be used internally by the wrapper. It allows for example, to receive
     * a Vector class from the Space class and get the Vector's CData to set the
     * Space's gravity.
     */
    public function getCData(): \FFI\CData
    {
        return $this->cData;
    }

    /**
     * Should be called at every class constructor to have the required CData to
     * work with the FFI.
     */
    protected function setCData(\FFI\CData $cData): void
    {
        $this->cData = $cData;
    }
}
