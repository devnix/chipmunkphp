<?php

declare(strict_types=1);

namespace Chipmunk;

use Chipmunk\Exception\RuntimeException;

class BodyTest extends \PHPUnit\Framework\TestCase
{
    private Body $body;

    public function setUp(): void
    {
        $this->body = new Body();
    }

    public function testDefaultConstructor()
    {
        $this->assertSame(Body::TYPE_DYNAMIC, $this->body->getType());
        $this->assertSame(0.0, $this->body->getMass());
        $this->assertSame(0.0, $this->body->getMoment());
    }

    public function testSetGetType()
    {
        $this->body->setType(Body::TYPE_KINEMATIC);
        $this->assertSame(Body::TYPE_KINEMATIC, $this->body->getType());

        $this->body->setType(Body::TYPE_STATIC);
        $this->assertSame(Body::TYPE_STATIC, $this->body->getType());

        $this->body->setType(Body::TYPE_DYNAMIC);
        $this->assertSame(Body::TYPE_DYNAMIC, $this->body->getType());
    }

    public function testWrongTypeException()
    {
        $this->expectException(RuntimeException::class);
        $this->expectExceptionMessage('Unrecognized type "10"');

        $this->body->setType(10);
    }

    public function testFromSpace()
    {
        $space = new Space();

        $body = Body::fromSpace($space);

        $this->assertSame(INF, $body->getMass());
        $this->assertSame(INF, $body->getMoment());
        $this->assertSame(Body::TYPE_STATIC, $body->getType());
    }
}
