#include "svgview.h"

#include <QDebug>
#include <qmath.h>

SvgView::SvgView(QWidget *parent) : QGraphicsView(parent), m_zoom(1)
{
    this->scene = new QGraphicsScene(this);
    setScene(scene);
    setTransformationAnchor(AnchorUnderMouse);
    setDragMode(ScrollHandDrag);

    m_itemVect = new QVector<QGraphicsItem*>;

    // s->clear();
    // resetTransform();
}

void SvgView::openFile(const QString fileName)
{
    QFile file(fileName);

    if (!file.exists()) {
        qDebug() << tr("Could not open file ") << fileName << "." << endl;
        return;
    }

    QGraphicsItem *svgItem = new QGraphicsSvgItem(file.fileName());
    svgItem->setFlags(QGraphicsItem::ItemClipsToShape);
    svgItem->setCacheMode(QGraphicsItem::NoCache);
    svgItem->setZValue(0);

    scene->addItem(svgItem);
}

void SvgView::paintEvent(QPaintEvent *event)
{
   QGraphicsView::paintEvent(event);
}

void SvgView::wheelEvent(QWheelEvent *event)
{
    float fact = qPow(1.2, event->delta() / 240.0);

    if ((m_zoom > ZOOM_MIN || fact > 1) && (m_zoom < ZOOM_MAX || fact < 1)) {
        m_zoom *= fact;
        scale(fact, fact);
        event->accept();
    }
}
