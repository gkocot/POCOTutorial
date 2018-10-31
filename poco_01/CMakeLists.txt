cmake_minimum_required(VERSION 3.12)
add_executable(poco_01 poco_01.cpp)
target_include_directories(
    poco_01
    PRIVATE ${POCO_ROOT}/Util/include
    PRIVATE ${POCO_ROOT}/Foundation/include
)
target_link_libraries(
    poco_01
    PRIVATE ${POCO_ROOT}/cmake-build-${ARCH}/lib/$<CONFIG>/PocoFoundation$<$<CONFIG:Debug>:d>.lib
    PRIVATE ${POCO_ROOT}/cmake-build-${ARCH}/lib/$<CONFIG>/PocoUtil$<$<CONFIG:Debug>:d>.lib
)

#TBD Install step, exe + dll in one location so the app can run.
