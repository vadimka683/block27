cmake_minimum_required (VERSION 3.8)

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("task1")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (task1 main1.cpp ClassCircle.cpp ClassFigure.cpp ClassRectangle.cpp ClassSquare.cpp ClassTriangle.cpp 
		${MY_INCLUDE_DIR}/ClassCircle.h ${MY_INCLUDE_DIR}/ClassFigure.h ${MY_INCLUDE_DIR}/ClassRectangle.h ${MY_INCLUDE_DIR}/ClassSquare.h ${MY_INCLUDE_DIR}/ClassTriangle.h)

target_include_directories(task1 PUBLIC ${MY_INCLUDE_DIR})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task1 PROPERTY CXX_STANDARD 20)
endif()

