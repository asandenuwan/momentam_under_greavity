/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_app
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *window_f;
    QVBoxLayout *verticalLayout;
    QFrame *playground;
    QLabel *ball;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *mass;
    QLineEdit *power;
    QLineEdit *angle;
    QLineEdit *pixelPerSec;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *enter;
    QPushButton *clear;
    QPushButton *reset;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *peak_L;
    QLabel *far_L;

    void setupUi(QWidget *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName("app");
        app->resize(969, 783);
        app->setMinimumSize(QSize(969, 783));
        horizontalLayout = new QHBoxLayout(app);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        window_f = new QFrame(app);
        window_f->setObjectName("window_f");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(window_f->sizePolicy().hasHeightForWidth());
        window_f->setSizePolicy(sizePolicy);
        window_f->setMaximumSize(QSize(1900, 1900));
        window_f->setFrameShape(QFrame::Shape::StyledPanel);
        window_f->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(window_f);
        verticalLayout->setObjectName("verticalLayout");
        playground = new QFrame(window_f);
        playground->setObjectName("playground");
        playground->setFrameShape(QFrame::Shape::StyledPanel);
        playground->setFrameShadow(QFrame::Shadow::Raised);
        ball = new QLabel(playground);
        ball->setObjectName("ball");
        ball->setGeometry(QRect(20, 520, 21, 21));
        ball->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 207, 72);"));

        verticalLayout->addWidget(playground);

        frame_2 = new QFrame(window_f);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        mass = new QLineEdit(frame_3);
        mass->setObjectName("mass");
        QFont font;
        font.setPointSize(16);
        mass->setFont(font);
        mass->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        mass->setAlignment(Qt::AlignmentFlag::AlignCenter);
        mass->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        mass->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(mass);

        power = new QLineEdit(frame_3);
        power->setObjectName("power");
        power->setFont(font);
        power->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        power->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(power);

        angle = new QLineEdit(frame_3);
        angle->setObjectName("angle");
        angle->setFont(font);
        angle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(angle);

        pixelPerSec = new QLineEdit(frame_3);
        pixelPerSec->setObjectName("pixelPerSec");
        pixelPerSec->setFont(font);
        pixelPerSec->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(pixelPerSec);


        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        enter = new QPushButton(frame_4);
        enter->setObjectName("enter");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enter->sizePolicy().hasHeightForWidth());
        enter->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        enter->setFont(font1);

        horizontalLayout_3->addWidget(enter);

        clear = new QPushButton(frame_4);
        clear->setObjectName("clear");
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setFont(font1);

        horizontalLayout_3->addWidget(clear);

        reset = new QPushButton(frame_4);
        reset->setObjectName("reset");
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setFont(font1);

        horizontalLayout_3->addWidget(reset);

        frame = new QFrame(frame_4);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        peak_L = new QLabel(frame);
        peak_L->setObjectName("peak_L");
        peak_L->setFont(font1);

        verticalLayout_3->addWidget(peak_L);

        far_L = new QLabel(frame);
        far_L->setObjectName("far_L");
        far_L->setFont(font1);

        verticalLayout_3->addWidget(far_L);


        horizontalLayout_3->addWidget(frame);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);
        horizontalLayout_3->setStretch(3, 4);

        horizontalLayout_2->addWidget(frame_4);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addWidget(window_f);


        retranslateUi(app);
        QObject::connect(clear, &QPushButton::clicked, mass, qOverload<>(&QLineEdit::clear));
        QObject::connect(clear, &QPushButton::clicked, power, qOverload<>(&QLineEdit::clear));
        QObject::connect(clear, &QPushButton::clicked, angle, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(app);
    } // setupUi

    void retranslateUi(QWidget *app)
    {
        app->setWindowTitle(QCoreApplication::translate("app", "app", nullptr));
        ball->setText(QString());
#if QT_CONFIG(whatsthis)
        mass->setWhatsThis(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        mass->setPlaceholderText(QCoreApplication::translate("app", "mass of object", nullptr));
        power->setPlaceholderText(QCoreApplication::translate("app", "power", nullptr));
        angle->setPlaceholderText(QCoreApplication::translate("app", "angle", nullptr));
        pixelPerSec->setText(QCoreApplication::translate("app", "100", nullptr));
        pixelPerSec->setPlaceholderText(QCoreApplication::translate("app", "pixel per second", nullptr));
        enter->setText(QCoreApplication::translate("app", "Enter", nullptr));
        clear->setText(QCoreApplication::translate("app", "Clear", nullptr));
        reset->setText(QCoreApplication::translate("app", "Reset", nullptr));
        peak_L->setText(QCoreApplication::translate("app", "X:", nullptr));
        far_L->setText(QCoreApplication::translate("app", "Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
