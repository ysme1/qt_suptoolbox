@echo off
SetLocal EnableDelayedExpansion
(set QT_VERSION=5.12.5)
(set QT_VER=5.12)
(set QT_VERSION_TAG=5125)
(set QT_INSTALL_DOCS=D:/Qt/Qt5.12.2/Docs/Qt-5.12.2)
(set BUILDDIR=E:/code/qt-mqtt/build-qtmqtt-Desktop_Qt_5_12_2_MinGW_32_bit-Release/src/mqtt)
D:\Qt\Qt5.12.2\5.12.2\mingw73_32\bin\qdoc.exe %*
EndLocal
