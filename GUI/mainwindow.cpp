#include "mainwindow.h"

MainWindow::MainWindow()
{
    m_view = new SvgView();
    setWindowTitle(tr("Simuduino"));
    resize(600, 400);
    setCentralWidget(m_view);
}
