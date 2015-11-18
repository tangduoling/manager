#ifndef CONNECTION_H_H
#define CONNECTION_H_H
#include <QDebug>

#include <QtSql>
#include <QSqlDatabase>

static bool createConnection()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setHostName("easybook-3313b0");
	db.setDatabaseName("data.db");
	db.setUserName("paresly");
	db.setPassword("123456");

	if (!db.open())
	{
		return false;
	}

	QSqlQuery query;
	query.exec("create table factory(id varchar primary key,name varchar)");
	
	return true;
}
#endif