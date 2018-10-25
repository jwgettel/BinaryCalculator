//==============================================
//	John Gettel
//	10/5/17
//	CSC 4111
//	Assignment 4
//	qtprogramwin header file
//==============================================
#ifndef QTPROGRAMWIN_H
#define QTPROGRAMWIN_H

#include <QMainWindow>

namespace Ui {
class QtProgramWin;
}

class QtProgramWin : public QMainWindow
{
    Q_OBJECT
	 
    
public:
    explicit QtProgramWin(QWidget *parent = 0);
    ~QtProgramWin();
    
private:
    Ui::QtProgramWin *ui;

private slots:
	void digit_pressed();
	void negative_pressed();
	void binary_operation_pressed();
	void clear_released();
	void equals_released();

};

#endif // QTPROGRAMWIN_H
