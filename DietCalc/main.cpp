#include "DietCalc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DietCalc w;
	w.show();
	return a.exec();
}
