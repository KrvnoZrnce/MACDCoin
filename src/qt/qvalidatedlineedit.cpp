#include "qvalidatedlineedit.h"

#include "guiconstants.h"

QValidatedLineEdit::QValidatedLineEdit(QWidget *parent) :
    QLineEdit(parent), valid(true)
{
    connect(this, SIGNAL(textChanged(QString)), this, SLOT(markValid()));
    //setStyleSheet("color:white; border-color:rgba(37, 170, 225, 255); border-width:1px; border-style:solid;");
}

void QValidatedLineEdit::setValid(bool valid)
{
    if(valid == this->valid)
    {
        return;
    }

    if(valid)
    {
        setStyleSheet("color:white;");
    }
    else
    {
        setStyleSheet(STYLE_INVALID);
    }
    this->valid = valid;
}

void QValidatedLineEdit::focusInEvent(QFocusEvent *evt)
{
    // Clear invalid flag on focus
    setValid(true);
    QLineEdit::focusInEvent(evt);
    //setStyleSheet("color:white; border-bottom-color:rgba(37, 170, 225, 255); border-bottom-width:1px; border-bottom-style:solid;");
}

void QValidatedLineEdit::markValid()
{
    setValid(true);
    //setStyleSheet("color:white; border-bottom-color:rgba(37, 170, 225, 255); border-bottom-width:1px; border-bottom-style:solid;");
}

void QValidatedLineEdit::clear()
{
    setValid(true);
    QLineEdit::clear();
    //setStyleSheet("color:white; border-bottom-color:rgba(37, 170, 225, 255); border-bottom-width:1px; border-bottom-style:solid;");
}
