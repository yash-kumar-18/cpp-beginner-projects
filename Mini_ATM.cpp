#include <iostream>
using namespace std;

int main(){
    // variable to store initial account balance
    double balance = 1000.0;
    // variable to store deposit/withdrawal amount
    double amount;
    // variable to store user's menu choice
    int choice;

    // Display menu options
    cout << "---Welcome To Mini ATM Banking---"<< endl;
    cout << "Choose an option below" << endl;
    cout << "1. Check Balance"<< endl;
    cout << "2. Deposit Money"<< endl;
    cout << "3. Withdraw Money"<< endl;
    cout << "4. Exit"<< endl;
    cout << "Enter An Option No.: ";
    cin >> choice ;

    // Switch statement to handle user choice
    switch (choice)
    {
    case 1: // Check balance
      cout << "Your Account Balance: " <<balance;
        break;

    case 2: // Deposit money
    cout << "Enter Amount: ";
    cin >> amount;
    if (amount>0)
    {
        // If deposit amount is valid, update balance
        cout << "Deposit Successful! Closing Balance : Rs " <<balance + amount << endl;
        cout << "Thank You For Banking With Us. Please Visit Again!"<< endl;
    }
    else {
        // Error if deposit amount <= 0
        cout << "Error: Deposit Amount Must Be Greater Than 0."<< endl;}
    break;

    case 3: // Withdraw money
    cout << "Enter Amount: ";
    cin >> amount;
    if (amount>0)
    {
        // Check if withdrawal amount is less than or equal to balance
        if (balance>amount)
        {
            cout << "Withdrawal Successful! Closing Balance : Rs " << balance - amount << endl;
            cout << "Thank You For Banking With Us. Please Visit Again!"<< endl;
        }
        else {
            // Error if withdrawal amount exceeds balance
            cout << "Error: Withdrawal Amount Must Be Less Than or Equal To Available Balance."<< endl;
        }
    }
    else {
        // Error if withdrawal amount <= 0
        cout << "Error: Withdrawal Amount Must Be Greater Than 0."<< endl;
    }
    break;

    case 4: // Exit
    cout <<" Thank You For Visiting. Please Visit Again!"<< endl;
    break;

    default: // Invalid choice
    cout << "Error: Choose A Valid Option. (i.e. 1 to 4)" << endl ;
        break;
    }
    
    return 0;
}
