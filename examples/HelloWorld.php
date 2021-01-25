#!/bin/env php
<?php

// Port of the original "Hello World" http://chipmunk-physics.net/release/ChipmunkLatest-Docs/#Intro-HelloChipmunk

declare(strict_types=1);

require_once __DIR__.'/../vendor/autoload.php';

use Chipmunk\Space;
use Chipmunk\Vector;
use Chipmunk\Shape;

$space = new Space();
$space->setGravity(new Vector(0, -100));

$ground = new Shape($space->getStaticBody(), new Vector(-20, 5), new Vector(20, -5), 0);

$ground->setFriction(1);

$space->addShape($ground);
