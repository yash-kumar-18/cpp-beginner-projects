#include <iostream>
using namespace std;

int main () {
    // using variables to save number and limit of printing
    double number;   // number for which the table will be generated
    int limit;       // limit up to which the table will be printed

    // Ask user for the number
    cout << "Which Number's Table Do You want To Generate: " ;
    cin >> number;

    // Validate number input
    if (number<=0)
    {
        cout << "Error: Number Must Be Greater Than Zero"<< endl;
        return 0;
    }

    // Ask user for the limit
    cout << "Up To What Number Do You Want To Print The Table (1 to 10,000): ";
    cin >> limit;

    // Validate limit input
    if (limit<=0)
    {
        cout << "Error: Table Limit Must Be Greater Than Zero"<<endl;
        return 0;
    }
    else if (limit>10000)
    {
        cout << "Error: Table Limit Must Be Lower Than OR Equal To 10,000"<<endl;
        return 0;
    }
    else
        cout << "Table Of " << number << endl;

    // Loop to generate and print the table
    for (size_t i = 1; i <= limit; i++)
    {
        cout << number << "x" << i << "=" << number*i << endl;
    }

    return 0;
}
