# include <iostream>
using namespace std;
int main(){
    int age;
    int choice;
    int persons;
    cout << "Choose A Option Below" << endl;
    cout <<"1: Standard Screen" << endl;
    cout <<"2: IMAX 3D" << endl;
    cout <<"3: VIP Lounge" << endl;
    cout << "Please Choose A Option: ";
    cin >> choice;
     if (choice<=0)
    { cout << "Error: Please Choose A Valid Option"<< endl;
    return 0;}
    else
    cout << "Enter Your Age: ";
    cin >> age;
    if (age <=0)
    {
        cout << "Error: Age Should Be Greater Than Zero"<< endl;
    return 0;
    }
    switch (choice)
    {
    case 1:
       {cout << "Standard Ticket Is For Rs 150 Per Person" << endl;}
        break;
    case 2: 
    {cout << "IMAX 3D  Ticket Is For Rs 300 Per Person"<< endl;}
        break;
        case 3:
        {if (age>=60)
        {cout << "VIP Ticket Is For Rs 400 Per Person (Only For Senior Citizens)" << endl;
        }
        else if (age<60)
        {cout << "VIP Ticket Is For Rs 500 Per Person " << endl;
        }
    break;
    default:
{cout << "Error: Please Enter A Valid Option (1 to 3)";}
        break;}
    }
    cout << "How Many Tickets Do You Need ?: " ;
     cin >> persons;
     if (persons <=0)
     { cout << "Error No. Of Persons Should Be Greater Than 0"<< endl;
        return 0;
     }
    switch (choice)
    {
    case 1:
        {cout << "The Total Comes To: " << persons * 150 << endl;
        }
        break;
        case 2: 
        {cout << "The Total Comes To: " << persons * 300 << endl;
        }
        break;
        case 3:
        if (age>=60)
        {cout << "The Total Comes To: " << persons * 400 << endl;
        }
        else if (age<60)
        {cout << "The Total Comes To: " << persons * 500 << endl;
        }
        break;
    default:
    cout << "Error: Please Enter A Valid Input"<< endl;
        break;
    }
    return 0;
}
