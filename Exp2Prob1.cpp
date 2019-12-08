#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
double Hours, TotalBill, Fee;
char Package;

cout << "Please enter Package purchased: "; cin >> Package;

if(Package == 'A' || Package == 'B' || Package == 'C')
{

cout << "Hours of use: "; cin >> Hours;
}

if(Package == 'A')
{
Fee = 995;
if(Hours < 10)
{   
TotalBill = Fee;
}
else
TotalBill = ((Hours - 10) * 20) + Fee;

cout << "Your Total Bill is: P " << TotalBill << "\n\n";
}

if(Package == 'B')
{
Fee = 1495;
if(Hours < 20)
TotalBill = Fee;
else
TotalBill = ((Hours - 20) * 10) + Fee;

cout << "Your Total Bill is: P " << TotalBill << "\n\n";
}

if(Package == 'C')
{
Fee = 1995;
TotalBill = Fee;
cout << "Your Total Bill is: P " << TotalBill << "\n\n";
}


