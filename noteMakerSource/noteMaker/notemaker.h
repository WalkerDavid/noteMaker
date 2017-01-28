#ifndef NOTEMAKER_H
#define NOTEMAKER_H

#include <QtWidgets/QMainWindow>
#include "ui_notemaker.h"

class noteMaker : public QMainWindow, private Ui::noteMakerClass
{
	Q_OBJECT

public:
	noteMaker(QWidget *parent = 0);
	~noteMaker();

private:
	//Ui::noteMakerClass ui;
};

#endif // NOTEMAKER_H
