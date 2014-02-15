#ifndef PERSON_INCLUDED
#define PERSON_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class person
{
public:
	//constructors
	person(string name, int iq);
	person();

	//destructor
	virtual ~person(void);

	//functions
	virtual int listSmarts()=0;

	//accessors
	string getName();
	int getIq();

	//mutators
	void setName(string a);
	void setIq(int b);

private:
	string m_name;
	int m_iq;
};

#endif