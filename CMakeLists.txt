PROJECT(test_ProcessPool)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(src)
MESSAGE(STATUS "This is BINARY dir" ${test_ProcessPool_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir" ${test_ProcessPool_SOURCE_DIR})

