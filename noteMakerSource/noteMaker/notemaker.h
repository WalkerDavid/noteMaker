#ifndef NOTEMAKER_H
#define NOTEMAKER_H

#include <QtWidgets/QMainWindow>
#include "ui_notemaker.h"
#include "gtarJSONParser.h"
#include <vector>

class noteMaker : public QMainWindow, private Ui::noteMakerClass
{
	Q_OBJECT

public:
	noteMaker(QWidget *parent = 0);
	~noteMaker();

	void init();

	void createTestData();

private:
	//Ui::noteMakerClass ui;
	std::vector<GuitarShapeContainer> * shapes;
};

#endif // NOTEMAKER_H
