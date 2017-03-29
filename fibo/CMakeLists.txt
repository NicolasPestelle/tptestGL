cmake_minimum_required( VERSION 2.6 )
project( fibo )
set( CMAKE_CXX_FLAGS "-std=c++14 -DNDEBUG -Wall -Wextra" )

add_executable( print_fibo.out 
    src/Fibo.cpp
    src/print_fibo.cpp )

# tests unitaires
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp src/Fibo_test.cpp
    src/Fibo.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )
