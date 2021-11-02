//#include "dialog.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLineEdit>
#include <QSpinBox>

QHBoxLayout* HBoxLayout()
{
    QPushButton* button1 = new QPushButton("One");
    QPushButton* button2 = new QPushButton("Two");
    QPushButton* button3 = new QPushButton("Three");
    QPushButton* button4 = new QPushButton("Four");
    QPushButton* button5 = new QPushButton("Five");
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);
    return layout;
}

QGridLayout* GridLayout()
{
    QLabel* nameLabel = new QLabel("&Name");
    QLineEdit* nameLineEdit = new QLineEdit();
    nameLabel->setBuddy(nameLineEdit);

    QLabel* emailLabel = new QLabel("&Email");
    QLineEdit* emailLineEdit = new QLineEdit();
    emailLabel->setBuddy(emailLineEdit);

    QSpinBox* spinBoxAge = new QSpinBox();
    QLabel* ageLabel = new QLabel("&Age");
    ageLabel->setBuddy(spinBoxAge);

    QGridLayout* layout = new QGridLayout;
    layout->addWidget(nameLabel, 0, 0);
    layout->addWidget(nameLineEdit, 0, 1);
    layout->addWidget(emailLabel, 1, 0);
    layout->addWidget(emailLineEdit, 1, 1);
    layout->addWidget(ageLabel, 2, 0);
    layout->addWidget(spinBoxAge, 2, 1);
    return layout;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget* window = new QWidget();
//    window->setLayout(HBoxLayout());
    window->setLayout(GridLayout());
    window->show();
    window->setWindowTitle("Using QHBoxLayout");
//    Dialog w;
//    w.show();
    return a.exec();
}
