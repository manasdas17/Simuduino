#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class Window : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    Window();

    private:
    QPushButton *m_bouton;
};

#endif // WINDOW_H
