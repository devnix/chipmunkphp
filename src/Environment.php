<?php

declare(strict_types=1);

namespace Chipmunk;

class Environment
{
    private static ?\FFI $ffi = null;

    public static function getHeaderPath(): string
    {
        return realpath(__DIR__.'/../include/chipmunk.h');
    }

    public static function getLibraryPath(): string
    {
        return 'libchipmunk.so.7';
    }

    public static function getFfi(): \FFI
    {
        if (null === self::$ffi) {
            self::$ffi = \FFI::cdef(file_get_contents(self::getHeaderPath()), self::getLibraryPath());
        }

        return self::$ffi;
    }
}
