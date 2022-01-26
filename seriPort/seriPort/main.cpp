#include "seriport.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	seriPort w;
	w.show();
	return a.exec();
}
