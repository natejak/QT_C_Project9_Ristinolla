cmake_minimum_required(VERSION 3.16)

project(QT_C_Project9_Ristinolla LANGUAGES C)

add_executable(QT_C_Project9_Ristinolla main.c)

include(GNUInstallDirs)
install(TARGETS QT_C_Project9_Ristinolla
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
