#include "BaslerOpenCV.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BaslerOpenCV w;
	w.show();
	return a.exec();
}
