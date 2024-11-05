# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "C-Project_autogen"
  "CMakeFiles\\C-Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\C-Project_autogen.dir\\ParseCache.txt"
  )
endif()
