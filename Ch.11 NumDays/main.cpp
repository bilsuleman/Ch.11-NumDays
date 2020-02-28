#include <iostream>
#include "NumDays.h"

using namespace std;

int main()
{
	NumDays a(12);
	NumDays b(6);
	NumDays c(0);

	cout << "Hours: " << a.getHours() << endl << "Days: " << a.getDays() << endl;
	cout << "Hours: " << b.getHours() << endl << "Days: " << b.getDays() << endl;

	cout << "Adding objects a and b..." << endl;
	c = a + b;
	a.setHours(12);
	cout << "Result: " << endl <<
		"Object C: " << endl <<
		"Days: " << c.getDays() << endl <<
		"Hours: " << c.getHours() << endl;
	c.setHours(0);
	c.setDays(0);
	cout << "Subtracting a and b: " << endl;
	c = a - b;
	cout << "Object C: " << "Days: " << c.getDays() << " Hours: " << c.getHours() << endl;
	++a;
	cout << "Testing increment Prefix: " << "Days: " << a.getDays() << " Hours: " << a.getHours() << endl;
	--a;
	cout << "Testing decrement Prefix: " << "Days: " << a.getDays() << " Hours: " << a.getHours() << endl;
	a++;
	cout << "Testing increment Postfix: " << "Days: " << a.getDays() << " Hours: " << a.getHours() << endl;
	a--;
	cout << "Testing decrement Postfix: " << "Days: " << a.getDays() << " Hours: " << a.getHours() << endl;

	return 0;
}