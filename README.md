# Siemens selection process

## Requirements

- [CMake](https://cmake.org/) > 3.22;
- Internet connection;
- A C++ compiler with support for C++14;

## How to build

All functions used in the examples are defined in [helpers.hpp](src/helpers.cpp).

Example 3 is defined in [ex3.cpp](src/ex3.cpp).

Example 4 is defined in [ex4.cpp](src/ex4.cpp).

Example 5 can be found on [unittest.cpp](tests/unittest.cpp) and is running with the tests.

Example 6 can be found on [ex6.sql](src/ex6.sql) and there is no need to build.

Example 8 can be found on [ex8.sql](src/ex8.sql) and there is no need to build.

Example 9 is defined in [ex9.txt](src/ex9.txt) and there is no need to build.

Example 10 is defined in [ex10.cpp](src/ex10.cpp).

Example 11 is defined in [ex11.cpp](src/ex11.cpp).

### Building ex3.cpp, ex4.cpp, ex10.cpp, and ex11.cpp

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
