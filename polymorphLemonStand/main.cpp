#include <iostream>
#include <string>
#include "professor.h"
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
	cout << endl;
}

int main()
{
	student s("Smart Sam", 100, 4.00);
	student t("Dumb Dom", 100, 2.00);
//	new professor p("Prof Jon", 100, 5);
	professor r("Prof Kal", 100, 2);

	lemonaideStand (s);
	lemonaideStand (t);
	//lemonaideStand (p); //figure out why this doesnt work
	lemonaideStand (r);

	cout << s.listSmarts();
	cout << endl << endl;
	cout << t.listSmarts();
	cout << endl << endl;
	//p.listSmarts();		//figure out why this doesnt work
	//cout << endl << endl;	//figure out why this doesnt work
	cout << r.listSmarts();
	cout << endl << endl;
	
	//Following is to stall the program from closing
	int x;
	cin >> x;

	return 0;
}