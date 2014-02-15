#include "professor.h"

//constructors
professor::professor(void)
{
	setName("Default Name");
	setIq(150);
	m_labCoats=2;
}
professor::professor(string name, int iq, int labCoats) : person(name, iq+70)
{
	m_labCoats = labCoats;
}

//destructor
professor::~professor(void)
{
	while (m_labCoats > 0)
	{
		if (m_labCoats > 1)
		{
			cout << "oh no my " << m_labCoats << " labcoats!";
			m_labCoats--;
		}
		else if (m_labCoats == 1)
		{
			cout << "oh no my last labcoat!";
			m_labCoats--;
		}
	}
}

//accessors
int professor::getLabCoats()
{
	return m_labCoats;
}
int professor::listSmarts()
{
	int primes = 5;
	cout << "I am smart so my IQ is naturally 70 points higher \n";
	cout << "I can also list the first " << primes << " prime numbers";
	int a, timer;
	a = timer = 0;
	cout << "1" << endl;
	timer++;
	while (a > -1)
	{
		a++;
		bool isPrime = true;
		for (int b = 2; b < a; b++)
		{
			if (a%b == 0)
				isPrime = false;	
		}
		if (isPrime == true)
		{
			cout << a << endl;
			timer++;
		}
		if ((timer) > primes)
		{
			break;
		}
	}
	cout << "lastly my IQ is ";
	return getIq();
}

//mutators
void professor::setLabCoats(int labCoats)
{
	m_labCoats = labCoats;
}