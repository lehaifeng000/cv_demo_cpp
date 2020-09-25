rm -r bin
rm -r build
mkdir build
cd build
cmake ..
make
cd ..
./bin/hello
