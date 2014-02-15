#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"

class professor :
	public person
{
public:
	//constructors
	professor(void);
	professor(string name, int iq, int labCoats);
	
	//destructors
	virtual ~professor(void);

	//functions
	int listSmarts();

	//accessors
	int getLabCoats();

	//mutators
	void setLabCoats(int labCoats);

private:
	int m_labCoats;
};

#endif