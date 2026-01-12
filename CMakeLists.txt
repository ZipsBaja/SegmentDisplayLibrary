set(LIBRARY_NAME pico-template-lib)

if (NOT TARGET ${LIBRARY_NAME})

    add_library(${LIBRARY_NAME} STATIC
        # Add your source files here
        
    )

    target_include_directories(${LIBRARY_NAME} PUBLIC
        include
    )

endif()