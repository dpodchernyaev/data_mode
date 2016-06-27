/* Copyright (c) 2015 Forward Systems. All rights reserved */

#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QLocale>
#include <QTextCodec>
#include <QHash>
#include <QDir>
#include <QDebug>
#include <QSqlQuery>

#ifdef Q_WS_X11
	#include <X11/Xlib.h>
#endif

class ClientItem;
class Item;

/** Запускает приложение */
int
launchApp(int argc, char *argv[])
{
#ifdef Q_WS_X11
	XInitThreads();
#endif
	QApplication app(argc, argv);

#ifdef Q_OS_WIN
	QApplication::setStyle(new SalonStyle);
#endif

	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForTr(codec);
	QTextCodec::setCodecForCStrings(codec);

	QLocale::setDefault(QLocale(QLocale::Russian, QLocale::RussianFederation));

//	qRegisterMetaType< QList<Item*> >("QList<Item*>");
	return app.exec();
}

/** Точка входа. */
int main(int argc, char *argv[])
{
	return launchApp(argc, argv);
}
