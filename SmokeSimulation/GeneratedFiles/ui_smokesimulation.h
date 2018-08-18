/********************************************************************************
** Form generated from reading UI file 'smokesimulation.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOKESIMULATION_H
#define UI_SMOKESIMULATION_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmokeSimulationClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Vector;
    QGroupBox *groupBox_Ref;
    QSlider *horizontalSlider_Diff;
    QSlider *horizontalSlider_Visc;
    QLabel *label_Visc;
    QLabel *label_Diff;
    QLabel *label_ViscName;
    QLabel *label_DiffName;
    QGroupBox *groupBox_Res;
    QRadioButton *radioButton_64;
    QRadioButton *radioButton_128;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_Clear;
    QOpenGLWidget *openGLWidget;
    QGroupBox *groupBox_Color;
    QComboBox *comboBox_VelColor;
    QComboBox *comboBox_DenColor;
    QLabel *label_Den;
    QLabel *label_Vel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmokeSimulationClass)
    {
        if (SmokeSimulationClass->objectName().isEmpty())
            SmokeSimulationClass->setObjectName(QStringLiteral("SmokeSimulationClass"));
        SmokeSimulationClass->setWindowModality(Qt::ApplicationModal);
        SmokeSimulationClass->resize(801, 556);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmokeSimulationClass->sizePolicy().hasHeightForWidth());
        SmokeSimulationClass->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        SmokeSimulationClass->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/Fluid_48px_550601_easyicon.net.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SmokeSimulationClass->setWindowIcon(icon);
        SmokeSimulationClass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralWidget = new QWidget(SmokeSimulationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Vector = new QPushButton(centralWidget);
        pushButton_Vector->setObjectName(QStringLiteral("pushButton_Vector"));
        pushButton_Vector->setGeometry(QRect(720, 490, 71, 31));
        groupBox_Ref = new QGroupBox(centralWidget);
        groupBox_Ref->setObjectName(QStringLiteral("groupBox_Ref"));
        groupBox_Ref->setGeometry(QRect(550, 160, 231, 131));
        horizontalSlider_Diff = new QSlider(groupBox_Ref);
        horizontalSlider_Diff->setObjectName(QStringLiteral("horizontalSlider_Diff"));
        horizontalSlider_Diff->setGeometry(QRect(90, 90, 111, 20));
        horizontalSlider_Diff->setMaximum(10);
        horizontalSlider_Diff->setPageStep(1);
        horizontalSlider_Diff->setSliderPosition(0);
        horizontalSlider_Diff->setOrientation(Qt::Horizontal);
        horizontalSlider_Diff->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_Visc = new QSlider(groupBox_Ref);
        horizontalSlider_Visc->setObjectName(QStringLiteral("horizontalSlider_Visc"));
        horizontalSlider_Visc->setGeometry(QRect(90, 40, 111, 19));
        horizontalSlider_Visc->setMaximum(10);
        horizontalSlider_Visc->setPageStep(1);
        horizontalSlider_Visc->setValue(0);
        horizontalSlider_Visc->setOrientation(Qt::Horizontal);
        horizontalSlider_Visc->setTickPosition(QSlider::TicksAbove);
        label_Visc = new QLabel(groupBox_Ref);
        label_Visc->setObjectName(QStringLiteral("label_Visc"));
        label_Visc->setGeometry(QRect(210, 40, 54, 12));
        label_Diff = new QLabel(groupBox_Ref);
        label_Diff->setObjectName(QStringLiteral("label_Diff"));
        label_Diff->setGeometry(QRect(210, 90, 54, 12));
        label_ViscName = new QLabel(groupBox_Ref);
        label_ViscName->setObjectName(QStringLiteral("label_ViscName"));
        label_ViscName->setGeometry(QRect(10, 40, 71, 20));
        label_DiffName = new QLabel(groupBox_Ref);
        label_DiffName->setObjectName(QStringLiteral("label_DiffName"));
        label_DiffName->setGeometry(QRect(10, 90, 81, 16));
        groupBox_Res = new QGroupBox(centralWidget);
        groupBox_Res->setObjectName(QStringLiteral("groupBox_Res"));
        groupBox_Res->setGeometry(QRect(550, 30, 231, 91));
        radioButton_64 = new QRadioButton(groupBox_Res);
        radioButton_64->setObjectName(QStringLiteral("radioButton_64"));
        radioButton_64->setGeometry(QRect(20, 30, 89, 16));
        radioButton_64->setChecked(false);
        radioButton_128 = new QRadioButton(groupBox_Res);
        radioButton_128->setObjectName(QStringLiteral("radioButton_128"));
        radioButton_128->setGeometry(QRect(20, 60, 89, 16));
        radioButton_128->setChecked(true);
        pushButton_Pause = new QPushButton(centralWidget);
        pushButton_Pause->setObjectName(QStringLiteral("pushButton_Pause"));
        pushButton_Pause->setGeometry(QRect(540, 490, 71, 31));
        pushButton_Clear = new QPushButton(centralWidget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(630, 490, 71, 31));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(20, 20, 512, 512));
        groupBox_Color = new QGroupBox(centralWidget);
        groupBox_Color->setObjectName(QStringLiteral("groupBox_Color"));
        groupBox_Color->setGeometry(QRect(550, 330, 231, 141));
        comboBox_VelColor = new QComboBox(groupBox_Color);
        comboBox_VelColor->setObjectName(QStringLiteral("comboBox_VelColor"));
        comboBox_VelColor->setGeometry(QRect(100, 90, 111, 22));
        comboBox_DenColor = new QComboBox(groupBox_Color);
        comboBox_DenColor->setObjectName(QStringLiteral("comboBox_DenColor"));
        comboBox_DenColor->setGeometry(QRect(100, 40, 111, 22));
        label_Den = new QLabel(groupBox_Color);
        label_Den->setObjectName(QStringLiteral("label_Den"));
        label_Den->setGeometry(QRect(10, 40, 61, 20));
        label_Vel = new QLabel(groupBox_Color);
        label_Vel->setObjectName(QStringLiteral("label_Vel"));
        label_Vel->setGeometry(QRect(10, 90, 71, 20));
        SmokeSimulationClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SmokeSimulationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SmokeSimulationClass->setStatusBar(statusBar);

        retranslateUi(SmokeSimulationClass);

        comboBox_VelColor->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SmokeSimulationClass);
    } // setupUi

    void retranslateUi(QMainWindow *SmokeSimulationClass)
    {
        SmokeSimulationClass->setWindowTitle(QApplication::translate("SmokeSimulationClass", "SmokeSimulation", 0));
        pushButton_Vector->setText(QApplication::translate("SmokeSimulationClass", "Mode", 0));
        groupBox_Ref->setTitle(QApplication::translate("SmokeSimulationClass", "Reference", 0));
        label_Visc->setText(QApplication::translate("SmokeSimulationClass", "0", 0));
        label_Diff->setText(QApplication::translate("SmokeSimulationClass", "0", 0));
        label_ViscName->setText(QApplication::translate("SmokeSimulationClass", "Viscosity:", 0));
        label_DiffName->setText(QApplication::translate("SmokeSimulationClass", "Diffusivity:", 0));
        groupBox_Res->setTitle(QApplication::translate("SmokeSimulationClass", "Resolution", 0));
        radioButton_64->setText(QApplication::translate("SmokeSimulationClass", "64", 0));
        radioButton_128->setText(QApplication::translate("SmokeSimulationClass", "128", 0));
        pushButton_Pause->setText(QApplication::translate("SmokeSimulationClass", "Pause", 0));
        pushButton_Clear->setText(QApplication::translate("SmokeSimulationClass", "Clear", 0));
        groupBox_Color->setTitle(QApplication::translate("SmokeSimulationClass", "Color", 0));
        comboBox_VelColor->clear();
        comboBox_VelColor->insertItems(0, QStringList()
         << QApplication::translate("SmokeSimulationClass", "White", 0)
         << QApplication::translate("SmokeSimulationClass", "Green", 0)
        );
        comboBox_DenColor->clear();
        comboBox_DenColor->insertItems(0, QStringList()
         << QApplication::translate("SmokeSimulationClass", "White", 0)
         << QApplication::translate("SmokeSimulationClass", "Green", 0)
        );
        label_Den->setText(QApplication::translate("SmokeSimulationClass", "Density:", 0));
        label_Vel->setText(QApplication::translate("SmokeSimulationClass", "Velocity:", 0));
    } // retranslateUi

};

namespace Ui {
    class SmokeSimulationClass: public Ui_SmokeSimulationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOKESIMULATION_H
