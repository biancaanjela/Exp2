#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int no, Start, Final, Sum;
	do {
    	cout << "Enter a number: "; cin >> no;
	
		Start = 1;
    	Final = 0;
    	Sum = Start;
    
    	for (int i=1; i<=1; i++)
    		{
    	    Final = no*(no+1)/2;
        	cout << "The sum of all whole numbers from 1 to "<< no << " is " << Final <<endl;
    		}
 		}
 	while (no != 0.0);
    cout << "Thank You!!";
    
	getch();
    return 0;

}
