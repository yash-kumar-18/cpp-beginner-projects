#include <iostream>
using namespace std;

int main () { 
    // Variables to store user input
    int fueltype;            // Fuel type chosen by user
    int dispensingchoice;    // Dispensing mode chosen by user
    double amount;           // Amount or volume entered by user

    // Display fuel options
    cout <<"Choose Your Fuel Type" << endl;
    cout << "1. Petrol (90Rs/L)" << endl;
    cout << "2. Diesel (85Rs/L)" << endl;
    cout << "3. CNG (65Rs/Kg)" << endl;
    cout << "Enter Your Fuel Type Option No. :" ;
    cin >> fueltype;

    // Validate fuel type input
    if (!(fueltype==1||fueltype==2||fueltype==3))
    {
        cout<<"Error: Please Enter A Valid Input" << endl;
        return 0;
    }   

    // Display dispensing options
    cout << "Choose A Dispensing Mode" << endl;
    cout << "1. By Amount (in Rs)" << endl;
    cout << "2. By Volume (in L/Kg)"<< endl;
    cout << "Choose A Dispensing Option No. :" ;
    cin >> dispensingchoice;

    // Validate dispensing choice input
    if (!(dispensingchoice==1||dispensingchoice==2))
    {
        cout<<"Error: Please Enter A Valid Input" << endl;
        return 0;
    }

    // Take input based on dispensing choice
    if (dispensingchoice==1)
    {
        cout << "Enter Amount (in Rs): " ;
        cin >> amount;
    }
    else if (dispensingchoice==2)
    {
        cout << "Enter Volume (in L/Kg): " ;
        cin>> amount;
    }

    // Validate amount/volume input
    if (amount<=0)
    {
        cout << "Error: Enter Amount/Volume Must Be Greater Than Zero" << endl;
        return 0; 
    }

    // Calculate bill based on fuel type and dispensing choice
    switch (fueltype)
    {
    case 1: // Petrol
        if (dispensingchoice==1)
        {
            cout << "Your Total Fuel Bill: " <<amount 
                 << " & You Will Get " << amount/90 << "L Petrol"<<endl;
        }
        else if (dispensingchoice==2)
        {
            cout << "Your Total Fuel Bill: " <<amount*90<<endl;
        }
        break;

    case 2: // Diesel
        if (dispensingchoice==1)
        {
            cout << "Your Total Fuel Bill: " <<amount 
                 << " & You Will Get " << amount/85 << "L Diesel"<<endl;
        }
        else if (dispensingchoice==2)
        {
            cout << "Your Total Fuel Bill: " <<amount*85<< endl;
        }
        break;

    case 3: // CNG
        if (dispensingchoice==1)
        {
            cout << "Your Total Fuel Bill: " <<amount 
                 << " & You Will Get " << amount/65 << "Kg CNG"<<endl;
        }
        else if (dispensingchoice==2)
        {
            cout << "Your Total Fuel Bill: " <<amount*65<< endl;
        }
        break;

    default: // Invalid input
        {cout << "Error: Enter A Valid Input"<< endl;}
        break;
    }

    return 0;
}
