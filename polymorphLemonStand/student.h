#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class student :
	public person
{
public:
	student(void);
	student(string name, int iq, const double &gpa);
	~student(void);

	//accessor
	double getGpa();

	//mutator
	void setGpa(double gpa);

private:
	double m_gpa;
};

#endif