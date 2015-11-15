#include "manager.h"
#include "connection.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	if (!createConnection())
	{
		return 0;
	}

	QApplication a(argc, argv);
	manager w;
	w.show();
	return a.exec();
}
