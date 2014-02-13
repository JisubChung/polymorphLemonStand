#include <iostream>
#include <string>
#include "person.h"
#include "student.h"

using namespace std;

void lemonaideStand(person &x)
{
	cout << "This is the digital lemonade stand \n";
	cout << x.getName();
	cout << " enjoy some digital lemonade! U \n";
	if (x.getIq() >= 120)
	{
		cout << "wow you have an IQ of " << x.getIq() << endl;
		cout << "enjoy some more digital lemonade! U \n";
	}
	else
	{
		cout << "wow you're not very smart \n";
		cout << "you have an IQ of " << x.getIq() << endl;
	}
}

int main()
{
	
	person p("Susan", 100);
	cout << p.getName() << " " << p.getIq() << endl;
	student s("George", 150, 3.99);

	lemonaideStand(p);
	cout << "----- \n";
	lemonaideStand(s);

	//Following is to stall the program from closing
	int x;
	cin >> x;

	return 0;
}