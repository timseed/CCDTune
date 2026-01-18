cmake_minimum_required(VERSION 3.0)
# Set up the project
project(astro_sensor_project)
# INDI and OpenCV flags
# Find pkg-config system tool
# We need this tooling
find_package(PkgConfig REQUIRED)
#Now using PkgConfig find libindi
pkg_check_modules(INDI REQUIRED libindi)
if (INDI_FOUND)
  message(STATUS libindi found)
  # INDI_CFLAGS is now available as INDI_CFLAGS or INDI_CFLAGS_OTHER  
  message(STATUS ${INDI_CFLAGS} )
  # And link libindi itself
  message(STATUS ${INDI_LDFLAGS} )
else() 
  message(ERROR libindi missing or can not be found)
endif()

# --- Split source and header files ---
set(SRC
    main.cpp
)

set(HDR
)


add_executable(t_one   
               ${SRC}
                          )
# Add include directories to your target
target_include_directories(t_one PRIVATE ${INDI_CFLAGS})
target_link_libraries(t_one PRIVATE ${INDI_LDFLAGS})



# --- Include directories ---
#target_include_directories(sv205_driver PRIVATE
      # your headers live here
             # INDI includes
#)

# --- Optional: add compile flags from INDI pkg-config ---
#target_compile_options(t_one PRIVATE )
