# include <iostream>
using namespace std;
int main () { 
int fueltype;
int dispensingchoice;
double amount;
cout <<"Choose Your Fuel Type" << endl;
cout << "1. Petrol (90Rs/L)" << endl;
cout << "2. Diesel (85Rs/L)" << endl;
cout << "3. CNG (65Rs/L)" << endl;
cout << "Enter Your Fuel Type Option No. :" ;
cin >> fueltype;
if (!(fueltype==1||fueltype==2||fueltype==3))
{cout<<"Error: Please Enter A Valid Input" << endl;
return 0;}   
cout << "Choose A Dispensing Mode" << endl;
cout << "1. By Amount (in Rs)" << endl;
cout << "2. By Volume (in L)"<< endl;
cout << "Choose A Dispensing Option No. :" ;
cin >> dispensingchoice;
if (!(dispensingchoice==1||dispensingchoice==2))
{cout<<"Error: Please Enter A Valid Input" << endl;
return 0;}
if (dispensingchoice==1)
{cout << "Enter Amount (in Rs): " ;
    cin >> amount;}
else if (dispensingchoice==2)
{ cout << "Enter Volume (in L): " ;
 cin>> amount;}
 if (amount<=0)
 {cout << "Error: Enter Amount/Volume Must Be Greater Than Zero" << endl;
return 0; }
switch (fueltype)
{
case 1: if (dispensingchoice==1)
{cout << "Your Total Fuel Bill: " <<amount << "& You Will Get " << amount/90 << "L Petrol"<<endl;}
else if (dispensingchoice==2)
{cout << "Your Total Fuel Bill: " <<amount*90<<endl;}
    break;
case 2: if (dispensingchoice==1)
{cout << "Your Total Fuel Bill: " <<amount << "& You Will Get " << amount/85 << "L Diesel"<<endl;}
else if (dispensingchoice==2)
{cout << "Your Total Fuel Bill: " <<amount*85<< endl;}
    break;
    case 3: if (dispensingchoice==1)
{cout << "Your Total Fuel Bill: " <<amount << "& You Will Get " << amount/65 << "L CNG"<<endl;}
else if (dispensingchoice==2)
{cout << "Your Total Fuel Bill: " <<amount*65<< endl;}
    break;
default:
{cout << "Error: Enter A Valid Input"<< endl;}
    break;
}
    return 0;
}