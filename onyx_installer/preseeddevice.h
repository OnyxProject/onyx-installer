
#ifndef PRESEEDDEVICE_H
#define PRESEEDDEVICE_H

#include <QWidget>
#include "supporteddevice.h"
#include "ui_preseeddevice.h"

namespace Ui {
class PreseedDevice;
}

class PreseedDevice : public QWidget
{
    Q_OBJECT

    virtual void showEvent(QShowEvent *event)
    {
        ui->installoptionsnextButton->setEnabled(true);
    }

public:
    explicit PreseedDevice(QWidget *parent = 0, SupportedDevice dev = SupportedDevice());
    ~PreseedDevice();

private slots:
    void on_installoptionsnextButton_clicked();

signals:
    void preseedSelected(int installType);

private:
    Ui::PreseedDevice *ui;
};

#endif // PRESEEDDEVICE_H
