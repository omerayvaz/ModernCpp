cmake_minimum_required(VERSION 3.15)
project(homework_3)
set(CMAKE_CXX_STANDARD 17)

include_directories(api/)

add_library(html_writer code/html_writer.cpp)       

add_library(image_browser code/image_browser.cpp)       

link_libraries(html_writer image_browser)

add_executable(main code/main.cpp) 

target_link_libraries (main html_writer image_browser) 
