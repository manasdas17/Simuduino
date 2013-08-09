#define IMG_PATH "../images/"
#include "elementmanager.h"

#include <QString>
#include <QDebug>

#include "element.h"

ElementManager::ElementManager()
{

}

ElementManager::ElementManager(SvgView* view) : m_view(view)
{

}

void ElementManager::addElement(QString name)
{
    Element* elmt = new Element();
    addElement(name, elmt);
}

// Nom de l'image = nom de l'elmt :

void ElementManager::addElement(QString name, Element* elmt)
{
    if (elmt->getPictureName().isEmpty()) {
        elmt->setPictureName(IMG_PATH + name + ".svg");
    }
    m_view->openFile(elmt->getPictureName());
    m_elmts.insert(name, elmt);
}

// parcours de la map :
/*for(QMap<QString, Element*>::iterator i = elmts.begin(); i != elmts.end(); i++) {
    qDebug() << i.key() << " : " << i.value();
}*/
