#ifndef ELEMENTMANAGER_H
#define ELEMENTMANAGER_H

#include <QString>
#include "element.h"

class ElementManager
{
public:
    ElementManager(SvgView* view);
    ~ElementManager();
    void addElement(QString name);
    void addElement(QString name, Element* elmt);

private:
    QMap <QString, Element*> m_elmts;
    SvgView* m_view;
};

#endif // ELEMENTMANAGER_H
