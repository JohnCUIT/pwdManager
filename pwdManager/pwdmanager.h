#ifndef PWDMANAGER_H
#define PWDMANAGER_H

#include <QtGui/QMainWindow>
#include "ui_pwdmanager.h"

class pwdManager : public QMainWindow
{
	Q_OBJECT

public:
	pwdManager(QWidget *parent = 0, Qt::WFlags flags = 0);
	~pwdManager();

private:
	Ui::pwdManagerClass ui;
};

#endif // PWDMANAGER_H
