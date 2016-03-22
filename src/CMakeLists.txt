include_directories(include)
SET(SRC_LIST
	./processpool/ProcessPool.cpp
	main.cpp
	)
ADD_EXECUTABLE(ProcessPoolTest ${SRC_LIST})
