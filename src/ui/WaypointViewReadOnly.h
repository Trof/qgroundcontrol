#ifndef WAYPOINTVIEWREADONLY_H
#define WAYPOINTVIEWREADONLY_H

#include <QtGui/QWidget>
#include "Waypoint.h"
#include <iostream>

namespace Ui {
    class WaypointViewReadOnly;
}

class WaypointViewReadOnly : public QWidget
{
    Q_OBJECT

public:
    explicit WaypointViewReadOnly(Waypoint* wp, QWidget *parent = 0);
    ~WaypointViewReadOnly();

public slots:
void changedCurrent(int state);
void changedAutoContinue(int state);
void updateValues(void);
void setCurrent(bool state);

signals:
    void changeCurrentWaypoint(quint16);
    void changeAutoContinue(quint16, bool);

protected:
Waypoint* wp;

private:
    Ui::WaypointViewReadOnly *m_ui;
};

#endif // WAYPOINTVIEWREADONLY_H
