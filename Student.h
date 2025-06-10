//****************************************************************************************************
//
//         File:                        Student.h
//
//         Student:                     Allison Coil
//
//         Assignment:                  Program #10
//
//         Course Name:                 Data Structures   I
//
//         Course Number:               COSC 3050 - 01
//
//         Due:                         Apr 21, 2021
//
//
//         This struct defines a Student and overloads the relational operators for the 
//         Student.
//
//****************************************************************************************************

#ifndef STUDENT_H
#define STUDENT_H

//****************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

//****************************************************************************************************

struct Student
{
	int id;
	char name[50];
	char citystate[50];
	char phone[12];
	char gender;
	int year;
	int credits;
	float gpa;
	char major[6];

	Student();
	friend ostream& operator << (ostream& out, const Student& data);

	bool operator == (const Student& rhs) const;
	bool operator == (int value) const;
	bool operator != (const Student& rhs) const;
	bool operator != (int value) const;
	bool operator > (const Student& rhs) const;
	bool operator > (int value) const;
	bool operator < (const Student& rhs) const;
	bool operator < (int value) const;
	bool operator >= (const Student& rhs) const;
	bool operator >= (int value) const;
	bool operator <= (const Student& rhs) const;
	bool operator <= (int value) const;
};

//****************************************************************************************************

Student :: Student ()
{
	id = 0;
}

//****************************************************************************************************

ostream& operator << (ostream& out, const Student& data)
{
	out << left << setw(10) << data.id
		<< setw(30) << data.name
		<< setw(10) << data.major
		<< fixed << setprecision(2) << data.gpa <<endl;

	return out;
}

//****************************************************************************************************

bool Student :: operator == (const Student& rhs) const
{
	return (this->id == rhs.id);
}

//****************************************************************************************************

bool Student :: operator == (int value) const
{
	return (this->id == value);
}

//****************************************************************************************************

bool Student :: operator != (const Student& rhs) const
{
	return (this->id != rhs.id);
}

//****************************************************************************************************

bool Student :: operator != (int value) const
{
	return (this->id != value);
}

//****************************************************************************************************

bool Student :: operator > (const Student& rhs) const
{
	return (this->id > rhs.id);
}

//****************************************************************************************************

bool Student :: operator > (int value) const
{
	return (this->id > value);
}

//****************************************************************************************************

bool Student :: operator < (const Student& rhs) const
{
	return (this->id < rhs.id);
}

//****************************************************************************************************

bool Student :: operator < (int value) const
{
	return (this->id < value);
}

//****************************************************************************************************

bool Student :: operator >= (const Student& rhs) const
{
	return (this->id >= rhs.id);
}

//****************************************************************************************************

bool Student :: operator >= (int value) const
{
	return (this->id >= value);
}

//****************************************************************************************************

bool Student :: operator <= (const Student& rhs) const
{
	return (this->id <= rhs.id);
}

//****************************************************************************************************

bool Student :: operator <= (int value) const
{
	return (this->id <= value);
}

//****************************************************************************************************

#endif