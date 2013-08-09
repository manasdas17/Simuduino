#ifndef ELEMENTMANAGER_H
#define ELEMENTMANAGER_H

#include <QMap>
#include "svgview.h"

class Element;

class ElementManager
{
public:
    ElementManager();
    ElementManager(SvgView* view);

    void addElement(QString name);
    void addElement(QString name, Element* elmt);

private:
    QMap <QString, Element*> m_elmts;
    SvgView* m_view;
};

#endif // ELEMENTMANAGER_H
