rm output/ -rf
mkdir build
cd build/
rm * -rf
cmake ..
make -j8
cd ..