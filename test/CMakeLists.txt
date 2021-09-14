add_executable( Test test.cpp )

include_directories(../src)

find_library(mylib
	     NAMES mylib.a
		 )

target_link_libraries(Test
		              mylib
					  )
