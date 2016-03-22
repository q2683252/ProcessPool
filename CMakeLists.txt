PROJECT(test_ProcessPool)
INCLUDE_DIRECTORIES(include)
SET(SRC_LIST 
	main.cpp
	processpool/ProcessPool.cpp
	)
ADD_EXECUTABLE(haha ${SRC_LIST})

