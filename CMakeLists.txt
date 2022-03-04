cmake_minimum_required(VERSION 3.8)

project(cxlearn CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(HELLO1_SRCS hello.cc)
set(HELLO2_SRCS hello2.cc)

set(wxWidgets_USE_STATIC 1)
find_package(wxWidgets COMPONENTS core base)
include(${wxWidgets_USE_FILE})

if (APPLE) 
  add_executable(hello1 MACOSX_BUNDLE  ${HELLO1_SRCS})
  add_executable(hello2 MACOSX_BUNDLE  ${HELLO2_SRCS})

  # Set a custom plist file for the app bundle - needed for Mac OS Retina display
  set_target_properties(hello1 PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
  set_target_properties(hello2 PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else()
  add_executable(hello1 WIN32 ${HELLO1_SRCS})
  add_executable(hello2 WIN32 ${HELLO2_SRCS})
endif()

target_link_libraries(hello1 PRIVATE ${wxWidgets_LIBRARIES})
target_link_libraries(hello2 PRIVATE ${wxWidgets_LIBRARIES})
