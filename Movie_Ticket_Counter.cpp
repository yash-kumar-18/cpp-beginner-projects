#include <iostream>
using namespace std;

int main(){
    // Variables to store user inputs
    int age;       // age of the person
    int choice;    // choice of ticket type
    int persons;   // number of tickets required

    // Display ticket options
    cout << "Choose A Option Below" << endl;
    cout <<"1: Standard Screen" << endl;
    cout <<"2: IMAX 3D" << endl;
    cout <<"3: VIP Lounge" << endl;
    cout << "Please Choose A Option: ";
    cin >> choice;

    // Validate choice input
    if (choice<=0)
    { 
        cout << "Error: Please Choose A Valid Option"<< endl;
        return 0;
    }
    else
        cout << "Enter Your Age: ";
    cin >> age;

    // Validate age input
    if (age <=0)
    {
        cout << "Error: Age Should Be Greater Than Zero"<< endl;
        return 0;
    }

    // Ticket pricing based on choice and age
    switch (choice)
    {
    case 1: // Standard Screen
       {cout << "Standard Ticket Is For Rs 150 Per Person" << endl;}
        break;
    case 2: // IMAX 3D
    {cout << "IMAX 3D  Ticket Is For Rs 300 Per Person"<< endl;}
        break;
    case 3: // VIP Lounge
        {
            if (age>=60)
            {cout << "VIP Ticket Is For Rs 400 Per Person (Only For Senior Citizens)" << endl;}
            else if (age<60)
            {cout << "VIP Ticket Is For Rs 500 Per Person " << endl;}
        }
        break;
    default: // Invalid option
        {cout << "Error: Please Enter A Valid Option (1 to 3)";}
        break;
    }

    // Ask for number of tickets
    cout << "How Many Tickets Do You Need ?: " ;
    cin >> persons;

    // Validate number of tickets
    if (persons <=0)
    { 
        cout << "Error No. Of Persons Should Be Greater Than 0"<< endl;
        return 0;
    }

    // Calculate total cost based on choice and age
    switch (choice)
    {
    case 1: // Standard Screen
        {cout << "The Total Comes To: " << persons * 150 << endl;}
        break;
    case 2: // IMAX 3D
        {cout << "The Total Comes To: " << persons * 300 << endl;}
        break;
    case 3: // VIP Lounge
        if (age>=60)
        {cout << "The Total Comes To: " << persons * 400 << endl;}
        else if (age<60)
        {cout << "The Total Comes To: " << persons * 500 << endl;}
        break;
    default: // Invalid input
        cout << "Error: Please Enter A Valid Input"<< endl;
        break;
    }

    return 0;
}
