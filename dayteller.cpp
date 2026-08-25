# include <iostream>
using namespace std ;
int main() {
    // used variable to save the values
    int day;
    // Taking Input From User
    cout << "Enter Your Day Number (1 to 7): ";
    cin>>day;
    // Conditions Used To Display The Day Name
    switch (day)
    {
    case 1:
        cout << "Your Day According To Your Day Number Is: Monday And It Is A ";
        break;
    case 2: 
    cout << "Your Day According To Your Day Number Is: Tuesday And It Is A ";
    break;
    case 3:
    cout << "Your Day According To Your Day Number Is: Wednesday And It Is A ";
    break;
    case 4:
    cout << "Your Day According To Your Day Number Is: Thursday And It Is A ";
    break;
    case 5:
    cout << "Your Day According To Your Day Number Is: Friday And It Is A ";
    break;
    case 6:
    cout << "Your Day According To Your Day Number Is: Saturday And It Is A ";
    break;
    case 7:
    cout << "Your Day According To Your Day Number Is: Sunday And It Is A ";
    break;
    default:
    cout << "Error: Enter A Valid Input From Between (1 to 7)";
        return 0;
    }
    // Conditions For Weekdays And Weekends
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    cout << "Weekday" << endl;
        break;
    
    case 6:
    case 7:
    cout << "Weekend" << endl;
        break;
    }
    return 0;
}