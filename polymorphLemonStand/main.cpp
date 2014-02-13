#include <iostream>
#include <string>
#include "person.h"

using namespace std;

void lemonaideStand(person &x)
{
	cout << "This is the digital lemonade stand \n";
	cout << x.getName();
	cout << " enjoy some digital lemonade! U";
}

int main()
{
	
	person p("Susan", 190); //Name
	cout << p.getName();
	//student s(George, 3.0); //Name, gpa
	int x;
	cin >> x;

	return 0;
}