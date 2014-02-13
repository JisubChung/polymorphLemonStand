#include "person.h"

//constructors
person::person()
{
}
person::person(string name, int iq)
{
	m_name = name;
	m_iq = iq;
}

//destructor
person::~person(void) { }

//accessors
string person::getName() { return m_name; }
int person::getIq() { return m_iq; }

//mutators
void person::setIq(int iq) { m_iq = iq; }
void person::setName(string name) { m_name = name; }
