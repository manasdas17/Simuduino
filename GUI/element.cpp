#include "element.h"

#include "svgview.h"

Element::Element() : m_picture_name("")
{

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
