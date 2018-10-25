//==============================================
//	John Gettel
//	10/5/17
//	CSC 4111
//	Assignment 4
//	qtprogramwin implementation file
//==============================================
#include "qtprogramwin.h"
#include "ui_qtprogramwin.h"
#include <QKeyEvent>
#include <bitset>
#include <string>

// declare global variables
QString firstNum = 0;
bool secondNumber = false;

// Constructor Function
QtProgramWin::QtProgramWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtProgramWin)
{
    ui->setupUi(this);

	// connect gui  push buttons to corresponding functions
	connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_negative, SIGNAL(released()), this, SLOT(negative_pressed()));
	connect(ui->pushButton_add, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_subtract, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_clear, SIGNAL(released()), this, SLOT(clear_released()));
	connect(ui->pushButton_equals, SIGNAL(released()), this, SLOT(equals_released()));

	// allow binary operations to be marked as checked or not checked
	ui->pushButton_add->setCheckable(true);
	ui->pushButton_subtract->setCheckable(true);
	ui->pushButton_multiply->setCheckable(true);
	ui->pushButton_divide->setCheckable(true);
}

// Destructor Function
QtProgramWin::~QtProgramWin()
{
    delete ui;
}

// Negative Function
void QtProgramWin::negative_pressed()
{
	QString input = "";
	// test if input string is positive
	if (ui->label->text()[0] == "1" || ui->label->text()[0] == "0")
	{
		// add "-" to string 
		input = "-";
		for (int i = 0; i < ui->label->text().length(); i++)
			input = input + ui->label->text()[i];
		ui->label->setText(input);
	}
	// if input is already negative
	else
	{
		// remove leading "-" from string
		for(int i = 1; i < ui->label->text().length(); i++)
			input = input + ui->label->text()[i];
		ui->label->setText(input);
	}
}

// Binary Operation Function
void QtProgramWin::binary_operation_pressed()
{
	
	QPushButton * button = (QPushButton*)sender();
	firstNum = ui->label->text();

	// mark "true" the operation that was selected
	button->setChecked(true);
}

// Clear Functions
void QtProgramWin::clear_released()
{
	// reset all inputs on "clear"
	ui->pushButton_add->setChecked(false);
	ui->pushButton_subtract->setChecked(false);
	ui->pushButton_multiply->setChecked(false);
	ui->pushButton_divide->setChecked(false);
	secondNumber = false;
	ui->label->setText("0");
}

// Equals Functions
void QtProgramWin::equals_released()
{
	// declare variables
	QString secondNum, output;
	secondNum = ui->label->text();
	bool firstNeg = false;
	bool secondNeg = false;
	bool resultNeg = false;
	bool error = false;
	unsigned long one_ul, two_ul, result_ul;
	int one_int, two_int, result_int;

	// determine if either input is negative
	// mark flag as true 
	// remove leading "-"
	if (firstNum[0] == "-")
	{
		firstNeg = true;
		firstNum = firstNum.remove(0,1);
	}	if (secondNum[0] == "-")
	{
		secondNeg = true;
		secondNum = secondNum.remove(0, 1);
	}

	
	// convert QStrings to Strings, String to unsigned 
	// longs, and unsigned longs to integers, multiply
	// integers by -1 if negative
		// first input
	std::string first = firstNum.toStdString();
	one_ul = std::bitset<16>(first).to_ulong();
	one_int = (int)one_ul;
	if (firstNeg) { one_int = -1 * one_int; }
		// second input
	std::string second = secondNum.toStdString();
	two_ul = std::bitset<16>(second).to_ulong();
	two_int = (int)two_ul;
	if (secondNeg) { two_int = -1 * two_int; }

	// Add Function
	if (ui->pushButton_add->isChecked()) { 
		result_int = one_int + two_int;
	}
	// Subtract Function
	else if (ui->pushButton_subtract->isChecked()) {
		result_int = one_int - two_int;
	}
	// Multiply Function
	else if (ui->pushButton_multiply->isChecked()) { 
		result_int = one_int * two_int;
	}
	// Divide funcitons
	else if (ui->pushButton_divide->isChecked()) {
		// return error if divide by 0
		if (two_int == 0)
		{
			error = true;
		}
		else
		{
			result_int = one_int / two_int;
		}
	}
	// if no operation was selected set output to 0
	else
	{
		result_int = 0;
	}
	secondNumber = false;

	// test for error message
	if (error) {
		output = "ERROR";
	}
	else {
		// if negative result, set flag to true and multiply result 
		// by -1
		if (result_int < 0)
		{
			resultNeg = true;
			result_int = result_int * -1;
		}
		// convert result to unsigned long, unsigned long to String, 
		// and String to QString
		result_ul = (unsigned long)result_int;
		std::string result_str = std::bitset<16>(result_ul).to_string();
		output = QString::fromStdString(result_str);

		// remove unnecessary leading zeros in result.
		int i = 0;
		while (output[i] == "0") { i++; }
		output = output.right(output.length() - (i));

		// add "-" to a negative result
		if (resultNeg) { output = "-" + output; }
		else if (result_int == 0) { output = "0"; }
	}

	// set display label to output
	ui->label->setText(output);
}

// Digit Pressed Funciton
void QtProgramWin::digit_pressed()
{
	QPushButton * button = (QPushButton*)sender();
	QString input;

	// test if first or second number is being entered
		// second number
	if ((ui->pushButton_add->isChecked() || ui->pushButton_subtract->isChecked() ||
		ui->pushButton_multiply->isChecked() || ui->pushButton_divide->isChecked()) && !secondNumber)
	{
		input = button->text();
		secondNumber = true;
	}
		// firsst number
	else
	{
		// prevent non zero input from starting with zero
		if (ui->label->text() == "0" && button->text() == "0")
			input = (ui->label->text());
		else if(ui->label->text() == "0" && button->text() == "1")
			input = (button->text());
		else
			input = (ui->label->text() + button->text());
	}
	ui->label->setText(input);
}