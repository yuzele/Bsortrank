#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Bsortrank.h"

class Bsortrank : public QMainWindow
{
	Q_OBJECT

public:
	Bsortrank(QWidget *parent = Q_NULLPTR);

private:
	Ui::BsortrankClass ui;
};
