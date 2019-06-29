#include "cloud_disk.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	cloud_disk w;
	w.show();
	return a.exec();
}
