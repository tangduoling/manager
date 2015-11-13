#include "manager.h"

manager::manager(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	setFixedSize(750,500);
	createMenuBar();
}

manager::~manager()
{

}

void manager::createMenuBar()
{
	manageAction = new QAction(QStringLiteral("品牌车管理"),this);
	charAction   = new QAction(QStringLiteral("销售统计"),this);
	quitAction   = new QAction(QStringLiteral("退出"),this);

	manageAction->setShortcut(QStringLiteral("Ctrl+M"));
	charAction->setShortcut(QStringLiteral("Ctrl+C"));
	quitAction->setShortcut(QStringLiteral("Ctrl+O"));
	manageMenu = menuBar()->addMenu(QStringLiteral("销售管理:"));
	manageMenu->addAction(manageAction);
	manageMenu->addAction(charAction);
	manageMenu->addSeparator();
	manageMenu->addAction(quitAction);

	passwordMenu = menuBar()->addMenu(QStringLiteral("修改密码:"));

	connect(manageAction, SIGNAL(triggered()), this, SLOT(on_manageMenu_Clicked()));
	connect(charAction, SIGNAL(triggered()), this, SLOT(on_chartMenu_Clicked()));
	connect(quitAction, SIGNAL(triggered()), this, SLOT(on_quitMenu_Clicked()));
}

void manager::on_manageMenu_Clicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void manager::on_chartMenu_Clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void manager::on_quitMenu_Clicked()
{
	this->close();
}
