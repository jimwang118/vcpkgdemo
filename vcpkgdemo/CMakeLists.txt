# CMakeList.txt : CMake project for vcpkgdemo, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_library (vcpkgdemo STATIC "vcpkgdemo.cpp" "vcpkgdemo.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET vcpkgdemo PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
install(FILES "${CMAKE_CURRENT_LIST_DIR}/vcpkgdemo.h" DESTINATION "include")

install(TARGETS vcpkgdemo
        EXPORT vcpkgdemoConfig
		ARCHIVE DESTINATION lib
		LIBRARY DESTINATION lib
		RUNTIME DESTINATION bin
)

install(EXPOET vcpkgdemoConfig DESTINATION share/vcpkgdemo)