#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "svgview.h"

class SvgView;

QT_BEGIN_NAMESPACE
class QAction;
class QGraphicsView;
class QGraphicsScene;
class QGraphicsRectItem;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    SvgView* getView() { return m_view; }

private:
    SvgView* m_view;
};

#endif
