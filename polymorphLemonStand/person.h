#ifndef PERSON_INCLUDED
#define PERSON_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class person
{
public:
	person(string name, const int iq);
	person();
	~person(void);

	//accessors
	string getName();
	float getIq();

	//mutators
	void setName(string a);
	void setIq(int b);

private:
	string m_name;
	int m_iq;
};

#endif