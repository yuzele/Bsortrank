#pragma once

#include <QLabel>
#include <QString>
#include <QPixmap>
#include <QPainter>

class IconLabel : public QLabel
{
	Q_OBJECT

public:
	IconLabel(const QPixmap& icon, const QString& text, QWidget *parent);
	~IconLabel();
	void paintEvent(QPaintEvent* event);

private:
	QPixmap _icon;
	QString _text;
};
