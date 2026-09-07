# include <iostream>
using namespace std;
int main () {
    double fare;
    double distance;
    int choice;
    bool rushhour;
  cout << "Select A Vechile Type" << endl;
    cout << "1: Bike (Base Rs 25 + Rs 8 Per Km)" << endl ;
 cout << "2: Auto (Base Rs 40 + Rs 12 Per Km)" << endl ;
  cout << "3: Sedan (Base Rs 80 + Rs 18 Per Km)" << endl ;
    cout << "Enter Your Vechile Option No.: ";
    cin >> choice;
    if (!(choice==1 ||choice==2 ||choice==3 ))
    { cout << "Error: Please Enter A Valid Input(i.e. 1,2 or 3)" << endl ;
        return 0;
    }
    else 
    cout << "Please Enter The Distance (in Km): ";
    cin >> distance;
    if (distance <=0){
        cout << "Error: Distance Must Be Greater Than Zero" << endl;
        return 0;}
    else
    switch (choice)
    {
    case 1: fare = (25 +distance*8);
        break;
    case 2: fare = (40 +distance*12);
        break;
        case 3: fare = (80 +distance*18);
        break;
    }
    cout << "Is There Rush Hour Going On (7:00 AM to 9:00 AM)"<< endl;
    cout <<"1. Yes"<< endl;
    cout << "2. No" << endl;
    cout << "Enter Your Option No.: ";
    cin >> rushhour;
    if (!(rushhour==1 || rushhour==2))
    { cout << "Error: Please Enter A Valid Input(i.e. 1 or 2)" << endl ;
     return 0;}
    else
    if (rushhour == 1)
    { switch (choice)
    {
    case 1:
         if (fare*1.25>=500)
         {cout << "Your Total Fare After Discount(Rs 50): " << (fare*1.25) -50 << endl;
         }
         else if (fare*1.25<500 && fare*1.25>250)
         {cout << "Your Total Fare After Discount (Rs 20): " << (fare*1.25) -20 << endl;
         }
         else
        cout << "Your Total Fare: " << fare*1.25 << endl;
        break;
    case 2:
        if (fare*1.25>=500)
         {cout << "Your Total Fare After Discount(Rs 50): " << (fare*1.25) -50 << endl;
         }
         else if (fare*1.25<500 && fare*1.25>250)
         {cout << "Your Total Fare After Discount(Rs 20): " << (fare*1.25) -20 << endl;
         }
         else
       cout << "Your Total Fare: " << fare*1.25 << endl;
        break;
    case 3:
        if (fare*1.25>=500)
         {cout << "Your Total Fare After Discount(Rs 50): " << (fare*1.25) -50 << endl;
         }
         else if (fare*1.25<500 && fare*1.25>250)
         {cout << "Your Total Fare After Discount(Rs 20): " << (fare*1.25) -20 << endl;
         }
         else
        cout << "Your Total Fare: " << fare*1.25 << endl;
        break;
    default:
        break;}}
    
    else
    { switch (choice)
    {
    case 1:
    if (fare >500)
    { cout << "Your Total Fare After Discount(Rs 50): " << (fare) -50 << endl;
    }
    else if (fare>250 && fare<500)
    {cout << "Your Total Fare After Discount(Rs 20): " << (fare) -20 << endl;
    }
    else
    cout << "Your Total Fare: " << fare << endl;
        break;
    case 2:
    if (fare >500)
    { cout << "Your Total Fare After Discount(Rs 50): " << (fare) -50 << endl;
    }
    else if (fare>250 && fare<500)
    {cout << "Your Total Fare After Discount(Rs 20): " << (fare) -20 << endl;
    }
    else 
       cout << "Your Total Fare: " << fare << endl;
        break;
    case 3:
    if (fare >500)
    { cout << "Your Total Fare After Discount(Rs 50): " << (fare) -50 << endl;
    }
    else if (fare>250 && fare<500)
    {cout << "Your Total Fare After Discount(Rs 20): " << (fare) -20 << endl;
    }
    else
        cout << "Your Total Fare: " << fare<< endl;
        break;
    }
    
    
    


    }
    
    return 0;
}
