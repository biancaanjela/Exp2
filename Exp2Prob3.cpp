#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
	int x, y;
	float V;
	const float z = 2.5;

	cout << "Please enter a value for x: ";	cin >> x;
	cout << "Please enter a value for y: ";	cin >> y;

	
	switch (x)
	{
		
	case 1:	
	if (1 < y < 5)
	{
	V = x * y * z;
	}
	else if (y >= 5)
	{
	V = x + (y/z);
	}
	break;
		
	
	case 2:
	if (y <= 5)
	{
	V = fabs((x - y) / z);
	}
	else if (y > 5)
	{
	V = x - (sqrt(y + z));
	}
	break;
			
			
	default:
	V = x + y + z;
	break;
	}
	cout << "The value for V is: " << setprecision(2) << V;
	
	getch();
	return 0;
}
