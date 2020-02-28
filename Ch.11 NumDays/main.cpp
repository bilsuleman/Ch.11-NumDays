#include <iostream>
#include "NumDays.h"

using namespace std;

int main()
{
	NumDays a(5);

	cout << "Hours: " << a.getHours() << endl << "Days: " << a.getDays() << endl;

	return 0;
}