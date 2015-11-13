#ifndef MANAGER_H
#define MANAGER_H

#include <QtWidgets/QWidget>
#include "ui_manager.h"
#include <QMenuBar>
#include <QAction>
#include <QString>
#include <QMainWindow>

class manager : public QMainWindow
{
	Q_OBJECT

public:
	explicit manager(QWidget *parent = 0);
	~manager();

	QMenu *manageMenu;
	QMenu *passwordMenu;

	QAction *manageAction;
	QAction *charAction;
	QAction *quitAction;

public slots:
	void on_manageMenu_Clicked();
	void on_chartMenu_Clicked();
	void on_quitMenu_Clicked();

private:
	Ui::managerClass ui;

	void createMenuBar();
};

#endif // MANAGER_H
