#ifndef UI_MQTT_H
#define UI_MQTT_H

#include <QWidget>
#include "QtMqtt/QtMqtt"

namespace Ui {
class ui_mqtt;
}

class ui_mqtt : public QWidget
{
    Q_OBJECT
public:
    explicit ui_mqtt(QWidget *parent = nullptr);
    ~ui_mqtt();

private slots:
    void on_btn_mqtt_connect_clicked();

private:
    Ui::ui_mqtt *ui;
    QMqttClient * m_client;//mqtt client指针
};

#endif // UI_MQTT_H
