# Librato C Library

[![Build Status](https://travis-ci.org/benmcollins/libibrato.svg?branch=master)](https://travis-ci.org/benmcollins/libibrato) [![codecov.io](http://codecov.io/github/benmcollins/libibrato/coverage.svg?branch=master)](http://codecov.io/github/benmcollins/libibrato?branch=master)

## Build Requirements

- https://github.com/akheron/jansson
- cURL

## Documentation

[GitHub Pages](http://benmcollins.github.io/libibrato/)

## Pre-built Ubuntu Packages (PPA)

`sudo add-apt-repository ppa:ben-collins/libibrato`

## Build Instructions

**With GNU Make:** Use ``autoreconf -i`` to create project files and run ``./configure``.
- ``make all``: build library.
- ``make check``: build and run test suite.
- See INSTALL file for more details on GNU Auto tools and GNU Make.
