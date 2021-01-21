cmake_minimum_required(VERSION 3.0)

project(youtubedl-gui)

add_definitions(-Wextra -Wall -pedantic)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Qt5 COMPONENTS Core Widgets  REQUIRED)

INCLUDE(GNUInstallDirs)

add_definitions(${Qt5Widgets_DEFINITIONS})
add_definitions(${Qt5Core_DEFINITIONS})
include_directories(${PROJECT_BINARY_DIR})

# uninstall target
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

add_custom_target(uninstall
COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

set(UI_FILES
    src/downloadstatus.ui
    src/ytdl.ui)

set(MOC_FILES
    src/canceldownload.h
    src/downloadprogress.h
    src/downloadstatus.h
    src/mainactions.h
    src/maincommand.h
    src/ytdl.h)

set(SRC
    src/canceldownload.cpp
    src/downloadprogress.cpp
    src/downloadstatus.cpp
    src/main.cpp
    src/mainactions.cpp
    src/maincommand.cpp
    src/ytdl.cpp)

QT5_WRAP_UI(UI ${UI_FILES})
QT5_WRAP_CPP(MOC ${MOC_FILES})

add_executable(youtubedl-gui ${MOC} ${UI} ${SRC})
target_link_libraries(youtubedl-gui ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES})

install(TARGETS youtubedl-gui RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(FILES icons/16x16.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/16x16/apps
    RENAME youtubedl-gui.png)
install(FILES icons/32x32.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/32x32/apps
    RENAME youtubedl-gui.png)
install(FILES icons/64x64.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/64x64/apps
    RENAME youtubedl-gui.png)
install(FILES icons/128x128.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/128x128/apps
    RENAME youtubedl-gui.png)
install(FILES icons/256x256.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/256x256/apps
    RENAME youtubedl-gui.png)
install(FILES icons/512x512.png
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/512x512/apps
    RENAME youtubedl-gui.png)

install(FILES resources/youtubedl-gui.desktop
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/applications)
