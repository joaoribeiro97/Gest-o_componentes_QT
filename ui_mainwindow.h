/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRequisi_o;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Main;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *menu_vertical;
    QPushButton *bt_menu;
    QPushButton *bt_gestaocomponentes;
    QPushButton *bt_requesition;
    QPushButton *bt_utilizadores;
    QPushButton *bt_cod_cores;
    QLabel *lb_Extra;
    QGroupBox *Logout;
    QPushButton *bt_logout;
    QLabel *lb_user_main;
    QStackedWidget *Sub_Menu;
    QWidget *sub_main;
    QFrame *frame;
    QLabel *lb_requisicao;
    QLineEdit *line_requisicao;
    QLineEdit *line_comp;
    QLabel *lb_comp;
    QLabel *lb_requisicao_2;
    QLineEdit *line_requisicao_utilizador;
    QFrame *frame_2;
    QLabel *lb_componente;
    QLabel *lb_titulo;
    QLabel *lb_data;
    QLabel *lb_descricao;
    QComboBox *comboBox_componente;
    QComboBox *comboBox_descricao;
    QLineEdit *line_quantidade;
    QLabel *lb_quantidade;
    QPushButton *bt_disponibilidade;
    QLabel *lb_disponibilidade;
    QCalendarWidget *calendarWidget;
    QLabel *lb_dataprint;
    QPushButton *bt_disponibilidade_2;
    QLabel *lb_titulo_2;
    QLabel *lb_titulomain;
    QWidget *Componentes;
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bt_add;
    QPushButton *bt_edit;
    QPushButton *bt_delete;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_pdf;
    QPushButton *bt_config;
    QWidget *Requisicao;
    QTableWidget *tableWidget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bt_add_requisicao;
    QPushButton *bt_edit_requisicao;
    QPushButton *bt_delete_requisicao;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bt_pdf_requisicao;
    QPushButton *bt_config_requisicao;
    QWidget *Utilizadores;
    QTableWidget *tableWidget_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bt_add_user;
    QPushButton *bt_remove_user;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bt_pdf_requisicao_2;
    QPushButton *bt_config_requisicao_2;
    QWidget *DisponibilidadeRequisicao;
    QTableWidget *tableWidget_4;
    QLabel *lb_data_disp;
    QLabel *lb_dataprint_disp;
    QPushButton *pushButton_10;
    QLabel *lb_titulo_disp;
    QLabel *lb_date;
    QMenuBar *menubar;
    QMenu *menuAdicionar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1920, 1080);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/imgs/resources/logo.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{background: #037b49;\n"
"\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionRequisi_o = new QAction(MainWindow);
        actionRequisi_o->setObjectName(QString::fromUtf8("actionRequisi_o"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/resources/add_comp.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRequisi_o->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        centralwidget->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 1911, 1041));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}\n"
"\n"
"#centralwidget\n"
"{\n"
"background: #037b49;\n"
"\n"
"}\n"
"\n"
"#Logout\n"
"{\n"
"background:transparent;\n"
"border:1px solid white;\n"
"color: white;\n"
"border-bottom: 1px solid white;\n"
"}\n"
"\n"
"#bt_logout\n"
"{\n"
"\n"
"border:20px;\n"
"color: white;\n"
"\n"
"}"));
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        Main->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(Main);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 180, 181, 421));
        menu_vertical = new QVBoxLayout(verticalLayoutWidget_2);
        menu_vertical->setSpacing(0);
        menu_vertical->setObjectName(QString::fromUtf8("menu_vertical"));
        menu_vertical->setSizeConstraint(QLayout::SetDefaultConstraint);
        menu_vertical->setContentsMargins(0, 0, 0, 0);
        bt_menu = new QPushButton(verticalLayoutWidget_2);
        bt_menu->setObjectName(QString::fromUtf8("bt_menu"));
        bt_menu->setMaximumSize(QSize(16777215, 120));
        bt_menu->setStyleSheet(QString::fromUtf8("#bt_menu:hover{\n"
"        background: #005d00;\n"
"selection-color: yellow;\n"
"	\n"
"    }\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/resources/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_menu->setIcon(icon2);
        bt_menu->setIconSize(QSize(60, 60));

        menu_vertical->addWidget(bt_menu);

        bt_gestaocomponentes = new QPushButton(verticalLayoutWidget_2);
        bt_gestaocomponentes->setObjectName(QString::fromUtf8("bt_gestaocomponentes"));
        bt_gestaocomponentes->setMaximumSize(QSize(16777215, 120));
        bt_gestaocomponentes->setStyleSheet(QString::fromUtf8("#bt_gestaocomponentes:hover{\n"
"        background: #005d00;\n"
"		color: white;\n"
"	    \n"
"    }\n"
"\n"
"#bt_gestaocomponentes:pressed{\n"
"		background-color: #005d00;\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/resources/components.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_gestaocomponentes->setIcon(icon3);
        bt_gestaocomponentes->setIconSize(QSize(50, 50));

        menu_vertical->addWidget(bt_gestaocomponentes);

        bt_requesition = new QPushButton(verticalLayoutWidget_2);
        bt_requesition->setObjectName(QString::fromUtf8("bt_requesition"));
        bt_requesition->setMaximumSize(QSize(16777215, 120));
        bt_requesition->setStyleSheet(QString::fromUtf8("#bt_requesition:hover{\n"
"        background: #005d00;\n"
"		color:white;\n"
"	\n"
"    }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/resources/calendario.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_requesition->setIcon(icon4);
        bt_requesition->setIconSize(QSize(60, 60));

        menu_vertical->addWidget(bt_requesition);

        bt_utilizadores = new QPushButton(verticalLayoutWidget_2);
        bt_utilizadores->setObjectName(QString::fromUtf8("bt_utilizadores"));
        bt_utilizadores->setMaximumSize(QSize(16777215, 120));
        bt_utilizadores->setStyleSheet(QString::fromUtf8("#bt_utilizadores:hover{\n"
"        background: #005d00;\n"
"	color:white;\n"
"    }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_utilizadores->setIcon(icon5);
        bt_utilizadores->setIconSize(QSize(50, 50));

        menu_vertical->addWidget(bt_utilizadores);

        bt_cod_cores = new QPushButton(Main);
        bt_cod_cores->setObjectName(QString::fromUtf8("bt_cod_cores"));
        bt_cod_cores->setGeometry(QRect(0, 640, 181, 61));
        bt_cod_cores->setStyleSheet(QString::fromUtf8("#bt_cod_cores\n"
"{\n"
"background: white;\n"
"border-radius:10px;\n"
"color:#0f4f33;\n"
"}\n"
"\n"
"#bt_cod_cores:hover{\n"
"        background: #005d00;\n"
"		color:white;\n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/resources/resistor.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_cod_cores->setIcon(icon6);
        bt_cod_cores->setIconSize(QSize(45, 45));
        lb_Extra = new QLabel(Main);
        lb_Extra->setObjectName(QString::fromUtf8("lb_Extra"));
        lb_Extra->setGeometry(QRect(0, 610, 61, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lb_Extra->setFont(font);
        lb_Extra->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;\n"
""));
        lb_Extra->setAlignment(Qt::AlignCenter);
        Logout = new QGroupBox(Main);
        Logout->setObjectName(QString::fromUtf8("Logout"));
        Logout->setGeometry(QRect(10, 50, 181, 91));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        Logout->setFont(font1);
        bt_logout = new QPushButton(Logout);
        bt_logout->setObjectName(QString::fromUtf8("bt_logout"));
        bt_logout->setGeometry(QRect(50, 50, 81, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        bt_logout->setFont(font2);
        bt_logout->setStyleSheet(QString::fromUtf8("#bt_logout\n"
"{\n"
"background: green;\n"
"border-radius:15px;\n"
"color: white;\n"
"\n"
"}\n"
"#bt_logout:hover{\n"
"        background: #005d00;\n"
"	\n"
"    }\n"
""));
        lb_user_main = new QLabel(Logout);
        lb_user_main->setObjectName(QString::fromUtf8("lb_user_main"));
        lb_user_main->setGeometry(QRect(20, 10, 141, 41));
        QFont font3;
        font3.setPointSize(12);
        lb_user_main->setFont(font3);
        lb_user_main->setStyleSheet(QString::fromUtf8("color: white;"));
        lb_user_main->setAlignment(Qt::AlignCenter);
        Sub_Menu = new QStackedWidget(Main);
        Sub_Menu->setObjectName(QString::fromUtf8("Sub_Menu"));
        Sub_Menu->setGeometry(QRect(230, 30, 1721, 981));
        Sub_Menu->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        Sub_Menu->setInputMethodHints(Qt::ImhNone);
        sub_main = new QWidget();
        sub_main->setObjectName(QString::fromUtf8("sub_main"));
        sub_main->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        frame = new QFrame(sub_main);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(650, 720, 371, 221));
        frame->setStyleSheet(QString::fromUtf8("\n"
"#frame\n"
"{background: white;\n"
"border-radius:40px;\n"
"}\n"
"\n"
"#line_comp\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 1px solid black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"#line_requisicao\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 1px solid black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"\n"
"#line_requisicao_utilizador\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 1px solid black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_requisicao = new QLabel(frame);
        lb_requisicao->setObjectName(QString::fromUtf8("lb_requisicao"));
        lb_requisicao->setGeometry(QRect(60, 100, 131, 16));
        line_requisicao = new QLineEdit(frame);
        line_requisicao->setObjectName(QString::fromUtf8("line_requisicao"));
        line_requisicao->setEnabled(false);
        line_requisicao->setGeometry(QRect(200, 90, 121, 32));
        QFont font4;
        font4.setStyleStrategy(QFont::PreferAntialias);
        line_requisicao->setFont(font4);
        line_requisicao->setTabletTracking(false);
        line_requisicao->setFocusPolicy(Qt::StrongFocus);
        line_requisicao->setInputMethodHints(Qt::ImhNoAutoUppercase);
        line_comp = new QLineEdit(frame);
        line_comp->setObjectName(QString::fromUtf8("line_comp"));
        line_comp->setEnabled(false);
        line_comp->setGeometry(QRect(200, 50, 121, 32));
        line_comp->setFont(font4);
        line_comp->setTabletTracking(false);
        line_comp->setFocusPolicy(Qt::StrongFocus);
        line_comp->setInputMethodHints(Qt::ImhNoAutoUppercase);
        lb_comp = new QLabel(frame);
        lb_comp->setObjectName(QString::fromUtf8("lb_comp"));
        lb_comp->setGeometry(QRect(60, 60, 141, 16));
        lb_requisicao_2 = new QLabel(frame);
        lb_requisicao_2->setObjectName(QString::fromUtf8("lb_requisicao_2"));
        lb_requisicao_2->setGeometry(QRect(60, 150, 131, 16));
        line_requisicao_utilizador = new QLineEdit(frame);
        line_requisicao_utilizador->setObjectName(QString::fromUtf8("line_requisicao_utilizador"));
        line_requisicao_utilizador->setEnabled(false);
        line_requisicao_utilizador->setGeometry(QRect(200, 140, 121, 32));
        line_requisicao_utilizador->setFont(font4);
        line_requisicao_utilizador->setTabletTracking(false);
        line_requisicao_utilizador->setFocusPolicy(Qt::StrongFocus);
        line_requisicao_utilizador->setInputMethodHints(Qt::ImhNoAutoUppercase);
        line_requisicao_utilizador->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(sub_main);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(350, 140, 881, 521));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2\n"
"{background: white;\n"
"border-radius:40px;\n"
"}\n"
"\n"
"#line_quantidade\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 1px solid black;\n"
"}\n"
"\n"
"#line_quantidade\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 1px solid black;\n"
"}\n"
"\n"
"#line_disponibilidade\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 00px solid black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"#lb_dataprint\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color: black;\n"
"border-bottom: 00px solid black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lb_componente = new QLabel(frame_2);
        lb_componente->setObjectName(QString::fromUtf8("lb_componente"));
        lb_componente->setGeometry(QRect(30, 130, 91, 31));
        QFont font5;
        font5.setPointSize(10);
        lb_componente->setFont(font5);
        lb_titulo = new QLabel(frame_2);
        lb_titulo->setObjectName(QString::fromUtf8("lb_titulo"));
        lb_titulo->setGeometry(QRect(60, 50, 181, 16));
        QFont font6;
        font6.setPointSize(11);
        font6.setStyleStrategy(QFont::PreferDefault);
        lb_titulo->setFont(font6);
        lb_data = new QLabel(frame_2);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(30, 230, 61, 31));
        lb_data->setFont(font5);
        lb_descricao = new QLabel(frame_2);
        lb_descricao->setObjectName(QString::fromUtf8("lb_descricao"));
        lb_descricao->setGeometry(QRect(30, 180, 81, 31));
        lb_descricao->setFont(font5);
        comboBox_componente = new QComboBox(frame_2);
        comboBox_componente->setObjectName(QString::fromUtf8("comboBox_componente"));
        comboBox_componente->setGeometry(QRect(140, 130, 131, 31));
        comboBox_descricao = new QComboBox(frame_2);
        comboBox_descricao->setObjectName(QString::fromUtf8("comboBox_descricao"));
        comboBox_descricao->setGeometry(QRect(140, 180, 131, 31));
        line_quantidade = new QLineEdit(frame_2);
        line_quantidade->setObjectName(QString::fromUtf8("line_quantidade"));
        line_quantidade->setGeometry(QRect(140, 280, 131, 32));
        line_quantidade->setFont(font4);
        line_quantidade->setTabletTracking(false);
        line_quantidade->setFocusPolicy(Qt::StrongFocus);
        line_quantidade->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhNoAutoUppercase);
        lb_quantidade = new QLabel(frame_2);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(30, 280, 91, 31));
        lb_quantidade->setFont(font5);
        bt_disponibilidade = new QPushButton(frame_2);
        bt_disponibilidade->setObjectName(QString::fromUtf8("bt_disponibilidade"));
        bt_disponibilidade->setGeometry(QRect(70, 400, 191, 41));
        lb_disponibilidade = new QLabel(frame_2);
        lb_disponibilidade->setObjectName(QString::fromUtf8("lb_disponibilidade"));
        lb_disponibilidade->setGeometry(QRect(100, 350, 151, 31));
        lb_disponibilidade->setFont(font5);
        calendarWidget = new QCalendarWidget(frame_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(450, 90, 371, 291));
        lb_dataprint = new QLabel(frame_2);
        lb_dataprint->setObjectName(QString::fromUtf8("lb_dataprint"));
        lb_dataprint->setGeometry(QRect(140, 230, 131, 31));
        lb_dataprint->setFont(font5);
        bt_disponibilidade_2 = new QPushButton(frame_2);
        bt_disponibilidade_2->setObjectName(QString::fromUtf8("bt_disponibilidade_2"));
        bt_disponibilidade_2->setGeometry(QRect(480, 400, 321, 41));
        lb_titulo_2 = new QLabel(frame_2);
        lb_titulo_2->setObjectName(QString::fromUtf8("lb_titulo_2"));
        lb_titulo_2->setGeometry(QRect(550, 40, 211, 16));
        lb_titulo_2->setFont(font6);
        lb_titulomain = new QLabel(sub_main);
        lb_titulomain->setObjectName(QString::fromUtf8("lb_titulomain"));
        lb_titulomain->setGeometry(QRect(350, 0, 941, 111));
        QFont font7;
        font7.setPointSize(36);
        lb_titulomain->setFont(font7);
        lb_titulomain->setStyleSheet(QString::fromUtf8("#lb_titulomain\n"
"{\n"
"background:transparent;\n"
"\n"
"color: white;\n"
"border-bottom: 0px solid black;\n"
"}"));
        Sub_Menu->addWidget(sub_main);
        Componentes = new QWidget();
        Componentes->setObjectName(QString::fromUtf8("Componentes"));
        Componentes->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        tableWidget = new QTableWidget(Componentes);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(10, 150, 1301, 721));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tableWidget->setPalette(palette);
        QFont font8;
        font8.setStyleStrategy(QFont::PreferDefault);
        tableWidget->setFont(font8);
        tableWidget->setFocusPolicy(Qt::WheelFocus);
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setStyleSheet(QString::fromUtf8("background: white;"));
        tableWidget->setInputMethodHints(Qt::ImhNoTextHandles);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->setMidLineWidth(0);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget->verticalHeader()->setVisible(false);
        horizontalLayoutWidget = new QWidget(Componentes);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 1301, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bt_add = new QPushButton(horizontalLayoutWidget);
        bt_add->setObjectName(QString::fromUtf8("bt_add"));
        bt_add->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
"\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_add->setIcon(icon7);
        bt_add->setIconSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bt_add);

        bt_edit = new QPushButton(horizontalLayoutWidget);
        bt_edit->setObjectName(QString::fromUtf8("bt_edit"));
        bt_edit->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imgs/resources/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_edit->setIcon(icon8);
        bt_edit->setIconSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bt_edit);

        bt_delete = new QPushButton(horizontalLayoutWidget);
        bt_delete->setObjectName(QString::fromUtf8("bt_delete"));
        bt_delete->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius:10px;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imgs/resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_delete->setIcon(icon9);
        bt_delete->setIconSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bt_delete);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bt_pdf = new QPushButton(horizontalLayoutWidget);
        bt_pdf->setObjectName(QString::fromUtf8("bt_pdf"));
        bt_pdf->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius:10px;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/imgs/resources/plot.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_pdf->setIcon(icon10);
        bt_pdf->setIconSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bt_pdf);

        bt_config = new QPushButton(horizontalLayoutWidget);
        bt_config->setObjectName(QString::fromUtf8("bt_config"));
        bt_config->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius:10px;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/imgs/resources/configuration.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_config->setIcon(icon11);
        bt_config->setIconSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bt_config);

        Sub_Menu->addWidget(Componentes);
        Requisicao = new QWidget();
        Requisicao->setObjectName(QString::fromUtf8("Requisicao"));
        Requisicao->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        tableWidget_2 = new QTableWidget(Requisicao);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setEnabled(true);
        tableWidget_2->setGeometry(QRect(10, 150, 1301, 721));
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tableWidget_2->setPalette(palette1);
        tableWidget_2->setFont(font8);
        tableWidget_2->setFocusPolicy(Qt::WheelFocus);
        tableWidget_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget_2->setStyleSheet(QString::fromUtf8("background: white;"));
        tableWidget_2->setInputMethodHints(Qt::ImhNoTextHandles);
        tableWidget_2->setFrameShape(QFrame::StyledPanel);
        tableWidget_2->setFrameShadow(QFrame::Plain);
        tableWidget_2->setLineWidth(1);
        tableWidget_2->setMidLineWidth(0);
        tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_2->setTextElideMode(Qt::ElideNone);
        tableWidget_2->setGridStyle(Qt::SolidLine);
        tableWidget_2->setRowCount(0);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget_2->verticalHeader()->setVisible(false);
        layoutWidget = new QWidget(Requisicao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 1301, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bt_add_requisicao = new QPushButton(layoutWidget);
        bt_add_requisicao->setObjectName(QString::fromUtf8("bt_add_requisicao"));
        QFont font9;
        font9.setPointSize(8);
        bt_add_requisicao->setFont(font9);
        bt_add_requisicao->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_add_requisicao->setIcon(icon1);
        bt_add_requisicao->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_add_requisicao);

        bt_edit_requisicao = new QPushButton(layoutWidget);
        bt_edit_requisicao->setObjectName(QString::fromUtf8("bt_edit_requisicao"));
        bt_edit_requisicao->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_edit_requisicao->setIcon(icon8);
        bt_edit_requisicao->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_edit_requisicao);

        bt_delete_requisicao = new QPushButton(layoutWidget);
        bt_delete_requisicao->setObjectName(QString::fromUtf8("bt_delete_requisicao"));
        bt_delete_requisicao->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/imgs/resources/rem_comp.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_delete_requisicao->setIcon(icon12);
        bt_delete_requisicao->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_delete_requisicao);

        horizontalSpacer_2 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt_pdf_requisicao = new QPushButton(layoutWidget);
        bt_pdf_requisicao->setObjectName(QString::fromUtf8("bt_pdf_requisicao"));
        bt_pdf_requisicao->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_pdf_requisicao->setIcon(icon10);
        bt_pdf_requisicao->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_pdf_requisicao);

        bt_config_requisicao = new QPushButton(layoutWidget);
        bt_config_requisicao->setObjectName(QString::fromUtf8("bt_config_requisicao"));
        bt_config_requisicao->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_config_requisicao->setIcon(icon11);
        bt_config_requisicao->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_config_requisicao);

        Sub_Menu->addWidget(Requisicao);
        Utilizadores = new QWidget();
        Utilizadores->setObjectName(QString::fromUtf8("Utilizadores"));
        Utilizadores->setStyleSheet(QString::fromUtf8("*{\n"
"font family: century gothic;\n"
"}"));
        tableWidget_3 = new QTableWidget(Utilizadores);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setEnabled(true);
        tableWidget_3->setGeometry(QRect(10, 150, 1301, 721));
        sizePolicy.setHeightForWidth(tableWidget_3->sizePolicy().hasHeightForWidth());
        tableWidget_3->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tableWidget_3->setPalette(palette2);
        tableWidget_3->setFont(font8);
        tableWidget_3->setFocusPolicy(Qt::WheelFocus);
        tableWidget_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget_3->setStyleSheet(QString::fromUtf8("background: white;"));
        tableWidget_3->setInputMethodHints(Qt::ImhNoTextHandles);
        tableWidget_3->setFrameShape(QFrame::StyledPanel);
        tableWidget_3->setFrameShadow(QFrame::Plain);
        tableWidget_3->setLineWidth(1);
        tableWidget_3->setMidLineWidth(0);
        tableWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_3->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_3->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_3->setTextElideMode(Qt::ElideNone);
        tableWidget_3->setGridStyle(Qt::SolidLine);
        tableWidget_3->setRowCount(0);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget_3->verticalHeader()->setVisible(false);
        horizontalLayoutWidget_2 = new QWidget(Utilizadores);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 70, 1301, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        bt_add_user = new QPushButton(horizontalLayoutWidget_2);
        bt_add_user->setObjectName(QString::fromUtf8("bt_add_user"));
        bt_add_user->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/imgs/resources/add_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_add_user->setIcon(icon13);
        bt_add_user->setIconSize(QSize(60, 60));

        horizontalLayout_3->addWidget(bt_add_user);

        bt_remove_user = new QPushButton(horizontalLayoutWidget_2);
        bt_remove_user->setObjectName(QString::fromUtf8("bt_remove_user"));
        bt_remove_user->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/imgs/resources/delete_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_remove_user->setIcon(icon14);
        bt_remove_user->setIconSize(QSize(60, 60));

        horizontalLayout_3->addWidget(bt_remove_user);

        horizontalSpacer_3 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        bt_pdf_requisicao_2 = new QPushButton(horizontalLayoutWidget_2);
        bt_pdf_requisicao_2->setObjectName(QString::fromUtf8("bt_pdf_requisicao_2"));
        bt_pdf_requisicao_2->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_pdf_requisicao_2->setIcon(icon10);
        bt_pdf_requisicao_2->setIconSize(QSize(60, 60));

        horizontalLayout_3->addWidget(bt_pdf_requisicao_2);

        bt_config_requisicao_2 = new QPushButton(horizontalLayoutWidget_2);
        bt_config_requisicao_2->setObjectName(QString::fromUtf8("bt_config_requisicao_2"));
        bt_config_requisicao_2->setStyleSheet(QString::fromUtf8("\n"
"background: white;\n"
"border-radius:10px;\n"
""));
        bt_config_requisicao_2->setIcon(icon11);
        bt_config_requisicao_2->setIconSize(QSize(60, 60));

        horizontalLayout_3->addWidget(bt_config_requisicao_2);

        Sub_Menu->addWidget(Utilizadores);
        DisponibilidadeRequisicao = new QWidget();
        DisponibilidadeRequisicao->setObjectName(QString::fromUtf8("DisponibilidadeRequisicao"));
        tableWidget_4 = new QTableWidget(DisponibilidadeRequisicao);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setEnabled(true);
        tableWidget_4->setGeometry(QRect(0, 150, 1301, 721));
        sizePolicy.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tableWidget_4->setPalette(palette3);
        tableWidget_4->setFont(font8);
        tableWidget_4->setFocusPolicy(Qt::WheelFocus);
        tableWidget_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget_4->setStyleSheet(QString::fromUtf8("background: white;"));
        tableWidget_4->setInputMethodHints(Qt::ImhNoTextHandles);
        tableWidget_4->setFrameShape(QFrame::StyledPanel);
        tableWidget_4->setFrameShadow(QFrame::Plain);
        tableWidget_4->setLineWidth(1);
        tableWidget_4->setMidLineWidth(0);
        tableWidget_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_4->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_4->setTextElideMode(Qt::ElideNone);
        tableWidget_4->setGridStyle(Qt::SolidLine);
        tableWidget_4->setRowCount(0);
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget_4->verticalHeader()->setVisible(false);
        lb_data_disp = new QLabel(DisponibilidadeRequisicao);
        lb_data_disp->setObjectName(QString::fromUtf8("lb_data_disp"));
        lb_data_disp->setGeometry(QRect(499, 64, 61, 31));
        QFont font10;
        font10.setPointSize(18);
        font10.setBold(true);
        font10.setWeight(75);
        lb_data_disp->setFont(font10);
        lb_dataprint_disp = new QLabel(DisponibilidadeRequisicao);
        lb_dataprint_disp->setObjectName(QString::fromUtf8("lb_dataprint_disp"));
        lb_dataprint_disp->setGeometry(QRect(599, 64, 191, 31));
        lb_dataprint_disp->setFont(font10);
        pushButton_10 = new QPushButton(DisponibilidadeRequisicao);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(540, 890, 179, 51));
        pushButton_10->setMaximumSize(QSize(16777215, 120));
        lb_titulo_disp = new QLabel(DisponibilidadeRequisicao);
        lb_titulo_disp->setObjectName(QString::fromUtf8("lb_titulo_disp"));
        lb_titulo_disp->setGeometry(QRect(420, 10, 431, 31));
        lb_titulo_disp->setFont(font10);
        Sub_Menu->addWidget(DisponibilidadeRequisicao);
        lb_date = new QLabel(Main);
        lb_date->setObjectName(QString::fromUtf8("lb_date"));
        lb_date->setGeometry(QRect(0, 910, 201, 41));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Century Gothic"));
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setWeight(75);
        lb_date->setFont(font11);
        lb_date->setStyleSheet(QString::fromUtf8("color: white;\n"
"\n"
""));
        lb_date->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(Main);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menuAdicionar = new QMenu(menubar);
        menuAdicionar->setObjectName(QString::fromUtf8("menuAdicionar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAdicionar->menuAction());
        menuAdicionar->addAction(actionRequisi_o);
        menuAdicionar->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        Sub_Menu->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gest\303\243o de Componentes Eletr\303\263nicos", nullptr));
        actionRequisi_o->setText(QCoreApplication::translate("MainWindow", "Requisi\303\247\303\243o", nullptr));
#if QT_CONFIG(tooltip)
        centralwidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        stackedWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        bt_menu->setText(QString());
        bt_gestaocomponentes->setText(QCoreApplication::translate("MainWindow", "Gest\303\243o\n"
"Componentes", nullptr));
        bt_requesition->setText(QCoreApplication::translate("MainWindow", "Requisi\303\247\303\243o", nullptr));
        bt_utilizadores->setText(QCoreApplication::translate("MainWindow", "Utilizadores", nullptr));
        bt_cod_cores->setText(QCoreApplication::translate("MainWindow", "C\303\263digo Resistencias", nullptr));
        lb_Extra->setText(QCoreApplication::translate("MainWindow", "Extras:", nullptr));
        Logout->setTitle(QCoreApplication::translate("MainWindow", "Bem vindo(a): ", nullptr));
        bt_logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        lb_user_main->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lb_requisicao->setText(QCoreApplication::translate("MainWindow", "N\303\272mero requisi\303\247\303\265es:", nullptr));
        line_requisicao->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        line_requisicao->setPlaceholderText(QString());
        line_comp->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        line_comp->setPlaceholderText(QString());
        lb_comp->setText(QCoreApplication::translate("MainWindow", "N\303\272mero componentes:", nullptr));
        lb_requisicao_2->setText(QCoreApplication::translate("MainWindow", "Minhas requisi\303\247\303\265es:", nullptr));
        line_requisicao_utilizador->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        line_requisicao_utilizador->setPlaceholderText(QString());
        lb_componente->setText(QCoreApplication::translate("MainWindow", "Componente", nullptr));
        lb_titulo->setText(QCoreApplication::translate("MainWindow", "Disponibilidade requisi\303\247\303\243o", nullptr));
        lb_data->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        lb_descricao->setText(QCoreApplication::translate("MainWindow", "Descri\303\247\303\243o", nullptr));
        line_quantidade->setText(QString());
        line_quantidade->setPlaceholderText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        lb_quantidade->setText(QCoreApplication::translate("MainWindow", "Quantidade", nullptr));
        bt_disponibilidade->setText(QCoreApplication::translate("MainWindow", "Verificar disponibilidade", nullptr));
        lb_disponibilidade->setText(QString());
        lb_dataprint->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        bt_disponibilidade_2->setText(QCoreApplication::translate("MainWindow", "Visualizar componentes disponiveis na data escolhida", nullptr));
        lb_titulo_2->setText(QCoreApplication::translate("MainWindow", "Reservas de componentes", nullptr));
        lb_titulomain->setText(QCoreApplication::translate("MainWindow", "Gest\303\243o de Componentes Eletr\303\263nicos - IPCA", nullptr));
#if QT_CONFIG(tooltip)
        tableWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        bt_add->setText(QString());
        bt_edit->setText(QString());
        bt_delete->setText(QString());
        bt_pdf->setText(QString());
        bt_config->setText(QString());
#if QT_CONFIG(tooltip)
        tableWidget_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        tableWidget_2->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        bt_add_requisicao->setText(QString());
        bt_edit_requisicao->setText(QString());
        bt_delete_requisicao->setText(QString());
        bt_pdf_requisicao->setText(QString());
        bt_config_requisicao->setText(QString());
#if QT_CONFIG(tooltip)
        tableWidget_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        tableWidget_3->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        bt_add_user->setText(QString());
        bt_remove_user->setText(QString());
        bt_pdf_requisicao_2->setText(QString());
        bt_config_requisicao_2->setText(QString());
#if QT_CONFIG(tooltip)
        tableWidget_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        tableWidget_4->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        lb_data_disp->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        lb_dataprint_disp->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "VOLTAR", nullptr));
        lb_titulo_disp->setText(QCoreApplication::translate("MainWindow", "Componentes reservados", nullptr));
        lb_date->setText(QCoreApplication::translate("MainWindow", "02-12-2019", nullptr));
        menuAdicionar->setTitle(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
