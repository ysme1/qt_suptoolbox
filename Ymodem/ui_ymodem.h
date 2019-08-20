#ifndef UI_YMODEM_H
#define UI_YMODEM_H
#include "YmodemFileTransmit.h"
#include "YmodemFileReceive.h"
#include <QSerialPort>

#include <QWidget>

namespace Ui {
class ui_ymodem;
}

class ui_ymodem : public QWidget
{
    Q_OBJECT

public:
    explicit ui_ymodem(QWidget *parent = nullptr) ;
    ~ui_ymodem();
    enum Status
    {
      StatusEstablish,
      StatusTransmit,
      StatusFinish,
      StatusAbort,
      StatusTimeout,
      StatusError,
      Statusupdatebtnclick
    };

signals:
    void ymodem_signel(ui_ymodem::Status status);

private slots:
    //void on_btn_start_update_clicked();
    void transmitStatus(YmodemFileTransmit::Status status);
    void receiveStatus(YmodemFileReceive::Status status);
    void transmitProgress(int progress);
    void receiveProgress(int progress);
    void on_transmitBrowse_clicked();
    void ReadData();
    void ss_timer_irq();
     void on_receiveBrowse_clicked();

     void on_transmitButton_clicked();

     void on_receiveButton_clicked();

     void on_btn_find_seriaport_clicked();

     void on_btn_open_port_clicked();

     void on_btn_start_update_clicked();

private:
    Ui::ui_ymodem *ui;
    QTimer *timer;
    QSerialPort *serialPort;
    YmodemFileTransmit *ymodemFileTransmit;
    YmodemFileReceive *ymodemFileReceive;
    bool transmitButtonStatus;
    bool receiveButtonStatus;
   // void ymodem_start_transmit();
    void Find_SerialPort();
    QSerialPort::StopBits to_convert_stopbit(QString bit);
    QSerialPort::DataBits to_convert_databit(QString  bit);
    QSerialPort::Parity to_convert_paritybit(QString  bit);
};

#endif // UI_YMODEM_H
