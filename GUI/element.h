#ifndef ELEMENT_H
#define ELEMENT_H

#include "svgview.h"
#include "elementmanager.h" // pb d'inclusion croisée

// Pour utiliser le polymorphisme :
// template <typename T>

class Element : public ElementManager
{
public:
    Element();
    Element(SvgView* view);
    // Element(Element* father);
    ~Element();

    // general :
    void setPicture(const QString fileName);

    // visual modifiers :
    void rotate(qreal direction);
    void translateX(qreal xPosition);
    void translateY(qreal yPosition);
    void brighten(qreal alpha);

    // getters and setters :
    SvgView* getView() { return m_view; }
    void setView(SvgView* view) { m_view = view; }

    qreal getDirection() { return m_direction; }
    void setDirection(qreal direction) { rotate(direction - m_direction); }

    qreal getXPosition() { return m_xPosition; }
    void setXPosition(qreal Xposition) { translateX(Xposition - m_xPosition); }

    qreal getYPosition() { return m_yPosition; }
    void setYPosition(qreal Yposition) { translateY(Yposition - m_yPosition); }

    qreal getAlpha() { return m_alpha; }
    void setAlpha(qreal alpha) { brighten(alpha - m_alpha); }

private:
    SvgView* m_view;
    QString m_name;

    // visual attributes :
    qreal m_xPosition;
    qreal m_yPosition;
    qreal m_direction;
    qreal m_alpha;
};

#endif // ELEMENT_H
