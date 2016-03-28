# BitKit
Small library for bitwise operations in C++

## Installation
```bash
$ cd to/path/that/you/wish
$ git clone https://github.com/errmsg/BitKit.git
```

## Dependencies
* C++ STL

**IMPORTANT NOTE:** Some functions use I/O functions but <iostream> is not included by default.

## Compilation
CMake is used to generate make files. It is strongly advised to run CMake in *build* directory.
When CMake is done generating make files, you can use make to compile the sources files. After that
you can run the executables (as shown below).

```bash
   $ cd build
   $ cmake -G "Unix Makefiles" ..
   $ make install
   $ cd ../bin
   $ ./BitKit
```

## Testing
(future task)

## Tasks
- [] Testing with [Catch](https://github.com/philsquared/Catch.git)
- [] Implement bitwise operations for double and float.

## License
MIT (see LICENSE)
