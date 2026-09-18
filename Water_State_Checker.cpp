#include <iostream>
using namespace std;

int main () {

    // Variable to store temperature input
    double temperature;

    // Prompt user to enter temperature in Celsius
    cout << "Enter Temperature Of Water In Celcius";
    cin >> temperature ;

    // Check conditions for physical state of water
    if (temperature < 0)
    { 
        // Below 0°C → Solid (ice)
        cout << "Your Water Is In Solid State " << endl; 
    }
    else if (temperature >= 100)
    { 
        // At or above 100°C → Gaseous (steam)
        cout << "Your Water Is In Gaseous State "<< endl;
    }
    else
    { 
        // Between 0°C and 100°C → Liquid
        cout << "Your Water Is In Liquid State "<< endl; 
    }

    return 0;
}
