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
	manageAction = new QAction(QStringLiteral("Ʒ�Ƴ�����"),this);
	charAction   = new QAction(QStringLiteral("����ͳ��"),this);
	quitAction   = new QAction(QStringLiteral("�˳�"),this);

	manageAction->setShortcut(QStringLiteral("Ctrl+M"));
	charAction->setShortcut(QStringLiteral("Ctrl+C"));
	quitAction->setShortcut(QStringLiteral("Ctrl+O"));
	manageMenu = menuBar()->addMenu(QStringLiteral("���۹���:"));
	manageMenu->addAction(manageAction);
	manageMenu->addAction(charAction);
	manageMenu->addSeparator();
	manageMenu->addAction(quitAction);

	passwordMenu = menuBar()->addMenu(QStringLiteral("�޸�����:"));

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
