#/bin/bash -e
#rm -rf build_rv && mkdir -p build_rv && cd ./build_rv
cd ./build_rv
# export PATH=/root/work/3rdparty/opencv/opencv-3.4.18/build_rv/install/lib:$PATH
OpenCV_DIR=/root/work/3rdparty/opencv/opencv-3.4.18/build_rv/install/ \
cmake -DCMAKE_TOOLCHAIN_FILE=/root/work/3rdparty/opencv/opencv-3.4.18/aarch64-rv11-toolchain.cmake \
    -DCMAKE_PREFIX_PATH=/root/work/3rdparty/opencv/opencv-3.4.18/build_rv/install/lib \
    -DCMAKE_INSTALL_PREFIX=./install ..
make -j2
make install
