#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int CurrentBill, DemandCharge, Surcharge, Gallons;
	double UnpaidBal, Charge, TotalBill;
   
   cout << "Enter Current Bill: "; cin >> CurrentBill;
   cout << "Enter Unpaid Balance from Previous Bill: "; cin >> UnpaidBal;
   cout << "Number of Gallons Used: "; cin >> Gallons;
   
   DemandCharge = 35;
   Charge = 1.10;
   
   if (UnpaidBal > 0)
	{
	Surcharge = UnpaidBal + 20;  
	TotalBill = (Charge * Gallons) + DemandCharge + Surcharge + CurrentBill;
	}
	else if (UnpaidBal == 0)
	{
	TotalBill = (Charge * Gallons) + DemandCharge + CurrentBill;
	}
	cout << "Your Total Bill is: P " << TotalBill << "\n\n" <<endl;
	
	
getch ();
return 0;
}
