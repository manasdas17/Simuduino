#include "elementmanager.h"

ElementManager::ElementManager(SvgView* view) : m_view(view)
{

}

Element::~Element()
{
    m_elmts.clear();
}

void Element::addElement(QString name)
{
    qDebug() << m_view;

    Element* elmt = new Element(m_view);
    elmt->setPicture("../images/" + name + ".svg");
    m_elmts.insert(name, elmt);
}

void Element::addElement(QString name, Element* elmt)
{
    m_elmts.insert(name, elmt);
}

// parcours de la map :
/*for(QMap<QString, Element*>::iterator i = elmts.begin(); i != elmts.end(); i++) {
    qDebug() << i.key() << " : " << i.value();
}*/
