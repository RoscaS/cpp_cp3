cmake_minimum_required(VERSION 3.13)
project(Qt_CP2)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core)
find_package(Qt5Widgets)
find_package(Qt5PrintSupport REQUIRED)

include_directories(${Qt5Widgets_INCLUDE_DIRS})

set(
        SOURCE_FILES main.cpp
        diagram.cpp diagram.h
        table.cpp table.h
        mainwindow.cpp mainwindow.h
        cmake-build-default/Qt_CP2_autogen/include/ui_mainwindow.h
        cmake-build-default/Qt_CP2_autogen/include/ui_table.h
)


add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::PrintSupport)



