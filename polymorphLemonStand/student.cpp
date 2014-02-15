#include "student.h"

//constructors
student::student(void)
{
	m_gpa = 0.0;
} //Default
student::student(string name, int iq, const double &gpa) : person(name, iq)
{
	m_gpa = gpa;
}

//destructors
student::~student(void)
{
	cout << "I was a good student with a " << m_gpa << " GPA!";
}

//accessors
double student::getGpa()
{
	return m_gpa;
}
int student::listSmarts()
{
	cout << "Since I'm a student my IQ is dependant on my GPA \n";
	if (getGpa() > 3.7)
	{
		cout << "I'm smart, my IQ is ";
		setIq(getIq()+50);
	}
	else
	{
		cout << "I'm not smart, so my IQ is ";
		setIq(getIq()-50);
	}
	return getIq();
}

//mutators
void student::setGpa(double gpa) 
{
	m_gpa = gpa;
}