#include <QApplication>
#include <QTranslator>
#include <QDebug>

#include "elementmanager.h"
#include "mainwindow.h"

// *** Debut du .ino ***
// Cette portion de code est aussi utilisée par avr-gcc !!
// Ne pas faire référence à des fonctions Qt
// Les commentaires commençant par @ comme ci-dessous sont destinés à Simuduino, pour savoir quels éléments ajouter dans le simulateur.

//@ voiture

#include "voiture.h"
Voiture v;

void setup()
{

}

void loop()
{
    //voiture.avancer(10);
    //voiture.reculer(10);
}

// *** Fin du .ino ***

int main(int argc, char *argv[])
{
    MainWindow* win;
    SvgView* view;

    QApplication app(argc, argv);

    QTranslator t;
    t.load(QString("simuduino_") + QLocale::system().name().section('_', 0, 0));
    app.installTranslator(&t);

    win = new MainWindow();
    view = win->getView();
    win->show();

    ElementManager em(view);

    // v.setPictureName("../images/chassis.svg");
    em.addElement("voiture", &v);

    setup();

    //while(true)
    {
        loop();
    }

    return app.exec();
}
