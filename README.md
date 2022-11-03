# Siemens selection process

## Requirements

- [CMake](https://cmake.org/) > 3.22;
- Internet connection;
- A C++ compiler with support for C++14;

## How to build

All functions used in the examples are defined in [helpers.hpp](src/helpers.cpp).

Example 3 is defined in [ex3.cpp](src/ex3.cpp).
Example 4 is defined in [ex4.cpp](src/ex3.cpp).
These two examples are built using CMake.

Example 10 is defined in [ex10.txt](src/ex10.txt) and there is no need to build.

### Building ex3.cpp and ex4.cpp

If you are using a Unix-based system with Shell Script, you can just run the [BuildAndRun.sh](BuildAndRun.sh).

The binaries will be available in `siemens/bin` after the build process.

##### 1. Create the build configuration
###### For the release type
```shell
cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
```

###### For the debug type
```shell
cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build
```

##### 2. Build the binaries

#### For Linux and macOS
```shell
cmake --build build
```
#### For Windows
```shell
cmake --build build --config Release
```

## Tests

Tests are created during the build process using the [unittest.cpp](tests/unittest.cpp) file and can be found in `siemens/bin/unittest`.

To add a new test, just edit the [unittest.cpp](tests/unittest.cpp) file.

The tests use [GoogleTest](https://github.com/google/googletest) a C++ test framework.


## License

All the files in this repository are licensed under GPLv3. See [LICENSE](LICENSE) for details.
