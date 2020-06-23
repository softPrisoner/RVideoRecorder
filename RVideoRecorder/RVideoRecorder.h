#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RVideoRecorder.h"

class RVideoRecorder : public QMainWindow
{
    Q_OBJECT

public:
    RVideoRecorder(QWidget *parent = Q_NULLPTR);

private:
    Ui::RVideoRecorderClass ui;
};
