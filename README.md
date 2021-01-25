# devnix/chipmunkphp

[![Latest Version on Packagist][ico-version]][link-packagist]
[![Software License][ico-license]](LICENSE.md)
[![Build Status][ico-travis]][link-travis]
[![Coverage Status][ico-scrutinizer]][link-scrutinizer]
[![Quality Score][ico-code-quality]][link-code-quality]
[![Total Downloads][ico-downloads]][link-downloads]

This project aims to provide a full FFI wrapper around Chipmunk 2D physics engine for PHP. What a time to be alive!

## Install

Via Composer

``` bash
$ composer require devnix/chipmunkphp
```

### Dependencies

#### Linux

You will need to compile and install Chipmunk 7

```sh
cd /tmp
git clone git@github.com:slembcke/Chipmunk2D.git
cd Chipmunk2D
```

Find the latest 7.x tag and checkout it
```sh
git tag
```

```
Chipmunk-6.0.0
Chipmunk-6.0.1
Chipmunk-6.0.2
Chipmunk-6.0.3
Chipmunk-6.1
Chipmunk-6.1.1
Chipmunk-6.1.2
Chipmunk-6.1.3
Chipmunk-6.1.4
Chipmunk-6.1.5
Chipmunk-6.2.0
Chipmunk-6.2.1
Chipmunk-6.2.2
Chipmunk-7.0.0
Chipmunk-7.0.1
Chipmunk-7.0.2
Chipmunk-7.0.3
Cocos2D-3.0
```

```sh
git checkout Chipmunk-7.0.3
```

Then compile, install and clear shared libraries cache.

```sh
cmake .
make
sudo make install
sudo ldconfig
```

And should be done. Please, give us feedback if you have problems opening an issue.

## Change log

Please see [CHANGELOG](CHANGELOG.md) for more information on what has changed recently.

## Hacking

The header file for the FFI API must be already processed. You can do it with GCC (I'm just messing with the parameters...):

```sh
cpp -P -E -D "__attribute__(ARGS)=" ~/tmp/Chipmunk2D/include/chipmunk/chipmunk.h -o include/chipmunk.h  -save-temps
```

Don't forget to hange the `/tmp/Chipmunk2D` path to your needs.

After that, manually remove code of inline functions and let there only the signature. You will also have to manually delete the stdio.h and math.h (I guess) signatures.

I've been messing with [ircmaxell/FFIMe](https://github.com/ircmaxell/FFIMe) but it seems like there is some kind of problem when parsing with [ircmaxell/php-c-parser](https://github.com/ircmaxell/php-c-parser).
I would love to find a way to automatically get the working header file automatically to ease the work.

## Testing

``` bash
$ composer test
```

## Contributing

Please see [CONTRIBUTING](CONTRIBUTING.md) and [CODE_OF_CONDUCT](CODE_OF_CONDUCT.md) for details.

## Security

If you discover any security related issues, please email devnix.code@gmail.com instead of using the issue tracker.

## Credits

- [Pablo Largo Mohedano][link-author], author of this package.
- Victor Blomqvist, I have stolen documentation and ideas from [Pymunk][pymunk-github].
- Scott Lembcke and Howling Moon Software, makers of [Chipmnunk][chipmunk-github], parts of C header files are in this project.
- [All Contributors][link-contributors]

## License

The MIT License (MIT). Please see [License File](LICENSE.md) for more information.

[ico-version]: https://img.shields.io/packagist/v/devnix/chipmunkphp.svg?style=flat-square
[ico-license]: https://img.shields.io/badge/license-MIT-brightgreen.svg?style=flat-square
[ico-travis]: https://img.shields.io/travis/devnix/chipmunkphp/master.svg?style=flat-square
[ico-scrutinizer]: https://img.shields.io/scrutinizer/coverage/g/devnix/chipmunkphp.svg?style=flat-square
[ico-code-quality]: https://img.shields.io/scrutinizer/g/devnix/chipmunkphp.svg?style=flat-square
[ico-downloads]: https://img.shields.io/packagist/dt/devnix/chipmunkphp.svg?style=flat-square

[link-packagist]: https://packagist.org/packages/devnix/chipmunkphp
[link-travis]: https://travis-ci.org/devnix/chipmunkphp
[link-scrutinizer]: https://scrutinizer-ci.com/g/devnix/chipmunkphp/code-structure
[link-code-quality]: https://scrutinizer-ci.com/g/devnix/chipmunkphp
[link-downloads]: https://packagist.org/packages/devnix/chipmunkphp
[link-author]: https://github.com/devnix
[link-contributors]: ../../contributors

[pymunk-github]: https://github.com/viblo/pymunk
[chipmunk-github]: https://github.com/slembcke/Chipmunk2D