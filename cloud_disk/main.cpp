#include "cloud_disk.h"
#include <QtWidgets/QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//cloud_disk w;
	//w.show();
	login w;
	w.show();
	return a.exec();
}
