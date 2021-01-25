<?php

declare(strict_types=1);

namespace Chipmunk;

class VectorTest extends \PHPUnit\Framework\TestCase
{
    public function testConstructor()
    {
        $vector = new Vector();

        $this->assertSame(0.0, $vector->getX());
        $this->assertSame(0.0, $vector->getY());

        $vector = new Vector(1, -1);

        $this->assertSame(1.0, $vector->getX());
        $this->assertSame(-1.0, $vector->getY());

        // Named parameters. Woohoo!
        $vector = new Vector(y: 1);

        $this->assertSame(0.0, $vector->getX());
        $this->assertSame(1.0, $vector->getY());
    }

    public function testSetX()
    {
        $vector = new Vector();

        $vector->setX(1);

        $this->assertSame(1.0, $vector->getX());
        $this->assertSame(0.0, $vector->getY());
    }

    public function testSetY()
    {
        $vector = new Vector();

        $this->assertSame(0.0, $vector->getX());
        $this->assertSame(0.0, $vector->getY());

        $vector->setY(1);

        $this->assertSame(0.0, $vector->getX());
        $this->assertSame(1.0, $vector->getY());
    }
}
