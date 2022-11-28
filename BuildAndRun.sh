cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
cmake --build build
./siemens/bin/unittest
./siemens/bin/ex3
./siemens/bin/ex4
./siemens/bin/ex10
./siemens/bin/ex11