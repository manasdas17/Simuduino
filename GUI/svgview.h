#ifndef SVGVIEW_H
#define SVGVIEW_H

#include <QGraphicsView>
#include <QFile>
#include <QWheelEvent>
#include <QMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsSvgItem>
#include <QPaintEvent>
#include <qmath.h>
#include <QDebug>
#include <QVector>

QT_BEGIN_NAMESPACE
class QWheelEvent;
class QPaintEvent;
class QFile;
QT_END_NAMESPACE

#define ZOOM_MAX 2
#define ZOOM_MIN 0.5

class SvgView : public QGraphicsView
{
    Q_OBJECT

public:
    SvgView(QWidget *parent = 0);
    void openFile(const QString fileName);

protected:
    void wheelEvent(QWheelEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    QVector <QGraphicsItem*>* m_itemVect;
    QGraphicsScene* scene;
    qreal m_zoom;
};
#endif // SVGVIEW_H
