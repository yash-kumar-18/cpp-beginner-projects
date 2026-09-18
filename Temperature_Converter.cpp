#include <iostream>
using namespace std;

int main(){
    // Variables to store temperature value, conversion choice, and repeat choice
    double temperature;
    int conversionChoice;
    char choice;

    // Display menu options
    cout << "Choose Option Below"<<endl;
    cout << "1. Celcius To Fahrenheit"<<endl;
    cout << "2. Fahrenheit To Celcius" << endl;
    cout << "Enter The Option No.: ";
    cin >> conversionChoice;

    // Validate conversion choice
    if (!(conversionChoice==1||conversionChoice==2))
    {
        cout << "Error: Enter A Valid Input"<< endl;
        return 0;
    }

    // Switch to handle conversion type
    switch (conversionChoice)
    {
    case 1: // Celsius to Fahrenheit
        do
        {
            cout<<"Enter The Temperature (in Celcius): ";
            cin >> temperature;
            cout << "The Temperature In Fahrenheit Will Be: "<<(temperature*1.8)+32<< endl;

            // Ask if user wants to calculate again
            cout << "Do You Want To Calculate Again? (y/n): ";
            cin >> choice;

            // Validate input
            if (!(choice=='y'||choice=='n')){
                cout << "Error: Enter A Valid Input (i.e. y/n)"<<endl;
                break;
            }
            if (choice=='n')
            {
                cout <<"Thank You For Using" << endl;
                return 0;
            }
        } while (choice=='y');
        break;

    case 2: // Fahrenheit to Celsius
        do
        {
            cout<<"Enter The Temperature (in Farenheit): ";
            cin >> temperature;
            cout << "The Temperature In Celcius Will Be: "<<(temperature-32)*5/9<< endl;

            // Ask if user wants to calculate again
            cout << "Do You Want To Calculate Again? (y/n): ";
            cin >> choice;

            // Validate input
            if (!(choice=='y'||choice=='n')){
                cout << "Error: Enter A Valid Input (i.e. y/n)"<<endl;
                break;
            }
            if (choice=='n')
            {
                cout <<"Thank You For Using" << endl;
                return 0;
            }
        } while (choice=='y');
        break;
    }

    return 0;
}
