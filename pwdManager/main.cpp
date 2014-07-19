#include "pwdmanager.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	pwdManager w;
	w.show();
	return a.exec();
}
