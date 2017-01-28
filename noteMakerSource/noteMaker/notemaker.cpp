#include "notemaker.h"
#include "gtarJSONParser.h"
#include "qstring.h"
#include "QString"
#include "GuitarShapeContainer.h"

#include <QDebug>


class GuitarShapeContainer;

noteMaker::noteMaker(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);
	setupUi(this);
	init();
}

noteMaker::~noteMaker()
{

}

void noteMaker::init()
{
	qDebug() << "In noteMaker::init()";
	
	QString tempString = QString::fromStdString(  gtarJSONParser::sayHello() );
	qDebug() << tempString;

	shapes = new std::vector<GuitarShapeContainer>();

	createTestData();

}

void noteMaker::createTestData()
{
	GuitarShapeContainer eNatuarlMinor = GuitarShapeContainer("eNatuarlMinor", GuitarShapeContainer::scale);
	eNatuarlMinor.appendNote("e", 2, 6);
	eNatuarlMinor.appendNote("f#", 2, 6);
	eNatuarlMinor.appendNote("g", 2, 6);
	eNatuarlMinor.appendNote("a", 2, 5);
	eNatuarlMinor.appendNote("b", 2, 5);
	eNatuarlMinor.appendNote("c", 3, 5);
	eNatuarlMinor.appendNote("d", 3, 4);
	eNatuarlMinor.appendNote("e", 3, 4);
	eNatuarlMinor.appendNote("f#", 3, 4);
	eNatuarlMinor.appendNote("g", 3, 3);
	eNatuarlMinor.appendNote("a", 3, 3);
	eNatuarlMinor.appendNote("b", 3, 2);
	eNatuarlMinor.appendNote("c", 3, 2);
	eNatuarlMinor.appendNote("d", 3, 2);
	eNatuarlMinor.appendNote("e", 3, 1);

	shapes->push_back(eNatuarlMinor);

	GuitarShapeContainer eBlues = GuitarShapeContainer("eBlues", GuitarShapeContainer::scale);
	eBlues.appendNote("e", 2, 6);
	eBlues.appendNote("g", 2, 6);
	eBlues.appendNote("a", 2, 5);
	eBlues.appendNote("a#", 2, 5);
	eBlues.appendNote("b", 2, 5);
	eBlues.appendNote("d", 3, 4);
	eBlues.appendNote("e", 3, 4);
	eBlues.appendNote("g", 3, 3);
	eBlues.appendNote("a", 3, 3);
	eBlues.appendNote("a#", 3, 2);
	eBlues.appendNote("b", 3, 2);
	eBlues.appendNote("d", 4, 2);
	eBlues.appendNote("e", 4, 1);


	shapes->push_back(eBlues);
}
