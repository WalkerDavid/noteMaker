#include "notemaker.h"
//#include <QtWidgets/QApplication>
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	noteMaker w;
	w.show();
	return a.exec();
}
