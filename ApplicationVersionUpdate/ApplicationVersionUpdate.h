#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ApplicationVersionUpdate.h"

class ApplicationVersionUpdate : public QMainWindow
{
    Q_OBJECT

public:
    ApplicationVersionUpdate(QWidget *parent = Q_NULLPTR);

private:
    Ui::ApplicationVersionUpdateClass ui;
};
