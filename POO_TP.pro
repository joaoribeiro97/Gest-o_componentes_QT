QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_component.cpp \
    add_family.cpp \
    add_requisicao.cpp \
    add_user.cpp \
    cod_cores.cpp \
    edit_component.cpp \
    edit_requisicao.cpp \
    main.cpp \
    mainwindow.cpp \
    resistorcalc.cpp \
    user_login.cpp

HEADERS += \
    add_component.h \
    add_family.h \
    add_requisicao.h \
    add_user.h \
    cod_cores.h \
    edit_component.h \
    edit_requisicao.h \
    mainwindow.h \
    resistorcalc.h \
    user_login.h

FORMS += \
    add_component.ui \
    add_family.ui \
    add_requisicao.ui \
    add_user.ui \
    cod_cores.ui \
    edit_component.ui \
    edit_requisicao.ui \
    mainwindow.ui \
    user_login.ui

RESOURCES += \
    resource.qrc \
    resource.qrc

#Dll para realese
#1º abrir cmd e ir pasta qt com qtenv2.bat e executar
#2º cd mais PATH do software
#3º windeployqt + path com o exe ex: windeployqt c:/teste.exe

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target







