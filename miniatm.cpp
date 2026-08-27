# include <iostream>
using namespace std;
int main(){
    double balance = 1000.0;
    int choice;
    double amount;
    cout << "---Welcome To Mini ATM Banking---"<< endl;
    cout << "Choose an option below" << endl;
    cout << "1. Check Balance"<< endl;
    cout << "2. Deposit Money"<< endl;
    cout << "3. Withdraw Money"<< endl;
    cout << "4. Exit"<< endl;
    cin >> choice ;
    switch (choice)
    {
    case 1:
      cout << "Your Account Balance: " <<balance;
        break;
    case 2:
    cout << "Enter Amount: ";
    cin >> amount;
    if (amount>0)
    {cout << "Deposit Successful! Closing Balance : Rs " <<balance + amount << endl;
    }
    else {
        cout << "Error: Deposit Amount Must Be Greater Than 0"<< endl;}
    break;
    case 3:
    cout << "Enter Amount: ";
    cin >> amount;
    if (amount>0)
    {if (balance>amount)
    {cout << "Withdrawl Successful! Closing Balance : Rs " << balance - amount << endl;
    }
    else {
        cout << "Error: Withdrawl Amount Must Be Greater Than Available Balance"<< endl;
    }}

    else {
        cout << "Error: Withdrawl Amount Must Be Greater Than 0"<< endl;
    }
    break;
    case 4:
    cout <<" Thank You For Visiting" << endl;
    break;

    default:
    cout << "Error: Choose A Valid Option (1 to 4) " << endl ;
        break;
    }
    
    return 0;
}
