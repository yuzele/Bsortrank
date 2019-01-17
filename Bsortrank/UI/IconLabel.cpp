#include "IconLabel.h"

IconLabel::IconLabel(const QPixmap& icon, const QString& text, QWidget *parent)
	: QLabel(parent)
{
	_icon = icon;
	_text = text;
}

IconLabel::~IconLabel()
{
}

void IconLabel::paintEvent(QPaintEvent * event)
{
	QRect targetRect, srcIconRect, textRect;
	targetRect.setX(0);
	targetRect.setY(0);
	targetRect.setWidth(32);
	targetRect.setHeight(this->height());
	srcIconRect.setX(0);
	srcIconRect.setY(0);
	srcIconRect.setWidth(_icon.rect().width());
	srcIconRect.setHeight(_icon.rect().height());
	textRect.setX(targetRect.width());
	textRect.setY(0);
	textRect.setWidth(this->width() - targetRect.width());
	textRect.setHeight(this->height());
	srcIconRect.setWidth(_icon.rect().width());
	srcIconRect.setHeight(_icon.rect().height());
	QPainter painter(this);
	painter.drawPixmap(targetRect, _icon, srcIconRect);
	painter.drawText(textRect, _text);
}
