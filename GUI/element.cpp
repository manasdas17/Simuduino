#include "element.h"

Element::Element()
{

}

Element::Element(SvgView* view) : m_view(view)
{

}

Element::~Element()
{

}

void Element::setPicture(const QString fileName)
{
    m_view->openFile(fileName);
}

void Element::rotate(qreal direction)
{
    //...
    m_direction += direction;
}

void Element::translateX(qreal xPosition)
{
    //...
    m_xPosition += xPosition;
}

void Element::translateY(qreal yPosition)
{
    //...
    m_yPosition += yPosition;
}

void Element::brighten(qreal alpha)
{
    //...
    m_alpha += alpha;
}
