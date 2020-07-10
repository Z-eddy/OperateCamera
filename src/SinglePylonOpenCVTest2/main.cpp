/*
#include "SinglePylonOpenCVTest2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SinglePylonOpenCVTest2 w;
	w.show();
	return a.exec();
}
*/

#include "pylon/PylonIncludes.h"
using namespace Pylon;
#include<iostream>
using std::cout;
using namespace Pylon;

int main()
{
	Pylon::PylonAutoInitTerm autoInitItem;
	CInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());
	return 0;
}
