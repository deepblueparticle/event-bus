#pragma once
#include <QObject>

namespace Emitter
{
    /**
     * @brief The EventBusDispatcher class
     */
    class EventBusDispatcher : public QObject
    {
        Q_OBJECT
    public:
        EventBusDispatcher(QObject *parent = 0);
    protected:
        virtual bool event(QEvent *qevent);
    };
}
