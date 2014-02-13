#include "student.h"

//constructors
student::student(void)
{
	m_gpa = 0.0;
}

student::student(string name, int iq, const double &gpa) : person(name, iq+50)
{
	m_gpa = gpa;
}

student::~student(void)
{
}

double student::getGpa() { return m_gpa; }

void student::setGpa(double gpa) { m_gpa = gpa; }