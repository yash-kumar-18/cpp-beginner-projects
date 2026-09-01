#include <iostream>
using namespace std;
int main() {
 double cardbalance=200.00;
int entry;
int exit;
int fare;
cout << "Choose Your Departure Point Below"<< endl;
cout << "1. Sector-1" << endl;
 cout << "2. Sector-2" << endl;
 cout << "3. Sector-3" << endl;
 cout << "4. Sector-4" << endl;
 cout << "5. Sector-5" << endl;
 cout << "Enter Departure Point Option No.: ";
 cin >> entry;
 if (!(entry==1||entry==2||entry==3||entry==4||entry==5))
 {cout << "Error: Enter A Valid Input"<< endl;
return 0;}
 
cout << "Choose Your Destination Point Below"<< endl;
cout << "1. Sector-1" << endl;
 cout << "2. Sector-2" << endl;
 cout << "3. Sector-3" << endl;
 cout << "4. Sector-4" << endl;
 cout << "5. Sector-5" << endl;
 cout << "Enter Destination Point Option No.: ";
 cin >> exit;
if (!(exit==1||exit==2||exit==3||exit==4||exit==5))
 {cout << "Error: Enter A Valid Input"<< endl;
return 0;}
else if (entry==exit)
{cout << "Error: Departure And Destination Points Can't Be Same"<<endl;
    return 0;
}
if (entry>exit)
{(fare=(entry-exit)*10);
    cout <<"Your Total Fare:" << fare<<endl;
    if (cardbalance<fare)
    {cout <<"Error: Insufficient Card Balance" << endl;
    return 0;}
else
cout << "Total Card Balance After Fare Deduction: "<< cardbalance-fare;}
{(fare=(exit-entry)*10);
    cout <<"Your Total Fare:" << fare<<endl;
    if (cardbalance<fare)
    {cout <<"Error: Insufficient Card Balance" << endl;
    return 0;}
cout << "Total Card Balance After Fare Deduction: "<< cardbalance-fare;}

    return 0;
}