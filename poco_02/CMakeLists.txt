cmake_minimum_required(VERSION 3.12)
add_executable(poco_02 poco_02.cpp)
target_include_directories(
    poco_02
    PRIVATE ${POCO_ROOT}/Foundation/include
    PRIVATE ${POCO_ROOT}/Util/include
    PRIVATE ${POCO_ROOT}/Net/include
    PRIVATE ${POCO_ROOT}/NetSSL_Win/include
)
target_link_libraries(
    poco_02
    PRIVATE ${POCO_ROOT}/lib64/PocoFoundation$<$<CONFIG:Debug>:d>.lib
    PRIVATE ${POCO_ROOT}/lib64/PocoUtil$<$<CONFIG:Debug>:d>.lib
    PRIVATE ${POCO_ROOT}/lib64/PocoNet$<$<CONFIG:Debug>:d>.lib
	PRIVATE ${POCO_ROOT}/lib64/PocoNetSSLWin$<$<CONFIG:Debug>:d>.lib
)

#TBD Install step, exe + dll in one location so the app can run.
