set(LIBRARY_NAME pico-segmentdisplay-lib)

if (NOT TARGET ${LIBRARY_NAME})

    add_library(${LIBRARY_NAME} STATIC
        # Add your source files here
        src/display/SegmentDisplay.cpp
    )

    target_include_directories(${LIBRARY_NAME} PUBLIC
        include
    )

    add_subdirectory(lib/zipslib)

    include(${CMAKE_CURRENT_LIST_DIR}/lib/pico-tm1637/PicoTM1637.cmake)

    target_link_libraries(${LIBRARY_NAME}
        ZipsPicoLib
        PicoTM1637
    )

endif()