#include <iostream>
using namespace std;
int main () {

double temperature;

cout << "Enter Temperature Of Water In Celcius";

cin >> temperature ;

if (temperature<0)
{ cout << "Your Water Is In Solid State " << endl; }

else if (temperature >=100)
{ cout << "Your Water Is In Gaseous State "<< endl;}

else{cout << "Your Water Is In Liquid State "<< endl; }











    return 0;
}
