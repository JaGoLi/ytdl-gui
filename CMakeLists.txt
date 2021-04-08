cmake_minimum_required(VERSION 3.5)

project(youtubedl-gui LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE(GNUInstallDirs)

#Set default prefix to /usr
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()

# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(SRC
    #headers
    src/canceldownload.h
    src/downloadprogress.h
    src/downloadstatus.h
    src/mainactions.h
    src/maincommand.h
    src/ytdl.h

    #cpp
    src/canceldownload.cpp
    src/downloadprogress.cpp
    src/downloadstatus.cpp
    src/main.cpp
    src/mainactions.cpp
    src/maincommand.cpp
    src/ytdl.cpp

    #ui
    src/downloadstatus.ui
    src/ytdl.ui)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(youtubedl-gui
	    ${SRC}
    )
else()
    if(ANDROID)
        add_library(youtubedl-gui SHARED
		${SRC}
        )
    else()
        add_executable(youtubedl-gui
		${SRC}
        )
    endif()
endif()


target_link_libraries(youtubedl-gui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

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
