#pragma once

class Number
{
public:

	// data members
	char* valoare;
	int baza;

	// constructors/destructors

	Number(const char* value, int base); // where base is between 2 and 16
	~Number();

	Number(const Number& n); //move contructor
	Number(Number& n); //copy constructor
	Number(const char* s);
	Number(int x);
	Number()
	{
		valoare = nullptr;
		baza = 0;
	}

	// operators

	friend Number operator + (Number& n1, Number& n2);
	friend Number operator - (Number& n1, Number& n2);
	char* operator += (Number& n);
	char* operator = (Number& n);
	char operator [](int i);
	bool operator < (Number& n);
	bool operator > (Number& n);
	bool operator >= (Number& n);
	bool operator <= (Number& n);
	bool operator == (Number& n);

	// methods

	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};