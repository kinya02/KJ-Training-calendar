#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TrainingcalendarKJ.h"

class TrainingcalendarKJ : public QMainWindow
{
    Q_OBJECT

public:
    TrainingcalendarKJ(QWidget *parent = nullptr);
    ~TrainingcalendarKJ();

private:
    Ui::TrainingcalendarKJClass ui;
};

