cmake_minimum_required(VERSION 3.5)
project(TutorialQT)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BasisWindow.h BasisWindow.cxx)

# configuration for Qt
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC OFF)


# dependency
find_package(Qt5Core)
get_target_property(QtCore_location Qt5::Core LOCATION)
find_package(Qt5Gui)
get_target_property(QtCore_location Qt5::Gui LOCATION)
find_package(Qt5Multimedia)
get_target_property(QtCore_location Qt5::Multimedia LOCATION)
find_package(Qt5Widgets)
get_target_property(QtCore_location Qt5::Widgets LOCATION)



# sources
add_executable(Tutorial ${SOURCE_FILES})

target_link_libraries(Tutorial LINK_PUBLIC Qt5::Core Qt5::Gui Qt5::Multimedia Qt5::Widgets)