#include "person.h"

//constructors
person::person()
{
}
person::person(string name, const int iq)
{
	setName(name);
	setIq(iq);
}

//destructor
person::~person(void) { }

//accessors
string person::getName() { return m_name; }
float person::getIq() { return m_iq; }

//mutators
void person::setIq(int iq) { m_iq = iq; }
void person::setName(string name) { m_name = name; }
