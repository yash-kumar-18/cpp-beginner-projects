#include <iostream>
using namespace std;
int main(){
    double temperature;
    int conversionChoice;
    char choice;
    cout << "Choose Option Below"<<endl;
    cout << "1. Celcius To Fahrenheit"<<endl;
    cout << "2. Fahrenheit To Celcius" << endl;
    cout << "Enter The Option No.: ";
    cin >> conversionChoice;
if (!(conversionChoice==1||conversionChoice==2))
{cout << "Error: Enter A Valid Input"<< endl;
return 0;}
switch (conversionChoice)
{
case 1:do
{cout<<"Enter The Temperature (in Celcius): ";
    cin >> temperature;
    cout << "The Temperature In Fahrenheit Will Be: "<<(temperature*1.8)+32<< endl;
    cout << "Do You Want To Calculate Again? (y/n): ";
    cin >> choice;
if (!(choice=='y'||choice=='n')){
    cout << "Error: Enter A Valid Input (i.e. y/n)"<<endl;
break;}
if (choice=='n')
{cout <<"Thank You For Using" << endl;
    return 0;}
} while (choice=='y');

    break;
case 2:do
{cout<<"Enter The Temperature (in Farenheit): ";
    cin >> temperature;
    cout << "The Temperature In Celcius Will Be: "<<(temperature-32)*5/9<< endl;
    cout << "Do You Want To Calculate Again? (y/n): ";
    cin >> choice;
if (!(choice=='y'||choice=='n')){
    cout << "Error: Enter A Valid Input (i.e. y/n)"<<endl;
break;}
if (choice=='n')
{cout <<"Thank You For Using" << endl;
    return 0;}

} while (choice=='y');

    break;
}
    return 0;
}