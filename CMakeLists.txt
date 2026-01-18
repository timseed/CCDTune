cmake_minimum_required(VERSION 3.2)
project(OverallWorkspace)
#Use the Root folder
file(MAKE_DIRECTORY /bin)
file(MAKE_DIRECTORY /lib)
#Make sure we have output folders
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY /bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY /lib)

# Add subdirectories. The order is important if one project needs another to be built first,

add_subdirectory(GetImg)
#add_subdirectory(AnalyzeImg)
