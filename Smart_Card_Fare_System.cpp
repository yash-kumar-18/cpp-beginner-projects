#include <iostream>
using namespace std;
int main() {
    // using variables to save cardbalance,entry,exit points and fare
int cardbalance=200;
int entry;
int exit;
int fare;
// Asking user his entry point
cout << "Choose Your Departure Point Below"<< endl;
cout << "1. Sector-1" << endl;
 cout << "2. Sector-2" << endl;
 cout << "3. Sector-3" << endl;
 cout << "4. Sector-4" << endl;
 cout << "5. Sector-5" << endl;
 cout << "Enter Departure Point Option No.: ";
 cin >> entry;
 // stopping user from entering wrong Departure point
 if (!(entry==1||entry==2||entry==3||entry==4||entry==5))
 {cout << "Error: Enter A Valid Input"<< endl;
return 0;}
  // Asking user his exit point
cout << "Choose Your Destination Point Below"<< endl;
cout << "1. Sector-1" << endl;
 cout << "2. Sector-2" << endl;
 cout << "3. Sector-3" << endl;
 cout << "4. Sector-4" << endl;
 cout << "5. Sector-5" << endl;
 cout << "Enter Destination Point Option No.: ";
 cin >> exit;
 // stopping user from entering wrong Destination point
if (!(exit==1||exit==2||exit==3||exit==4||exit==5))
 {cout << "Error: Enter A Valid Input"<< endl;
return 0;}
// stopping user from entering same Departure and Destination points
else if (entry==exit)
{cout << "Error: Departure And Destination Points Can't Be Same"<<endl;
    return 0;
}
// fare calculation
fare= abs(entry-exit)*10;
    cout <<"Your Total Fare:" << fare<<endl;
    // stopping user from using more money than cardbalance
    if (cardbalance<fare)
    {cout <<"Error: Insufficient Card Balance" << endl;
    return 0;}
cout << "Total Card Balance After Fare Deduction: "<< cardbalance-fare;
    return 0;
}
