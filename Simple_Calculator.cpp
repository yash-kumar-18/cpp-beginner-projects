# include <iostream>
using namespace std ;
int main () {

    // using as variab to save values
    double num1;
    double num2;
    char op;
    // using to tell user to give input
    cout << "Enter First Number= " ;
    cin >> num1 ;
    cout << "Enter Second Number= " ;
    cin >> num2 ;
    cout << "Enter An Operator (+,-,/,*)= ";
    cin >> op;
    // using swith to run code as per conditions
    switch (op)
    {
    case '+':
      cout << "Result= " << num1 + num2 << endl;
        break;
    case '-':
    cout << "Result= " << num1 - num2 << endl;
    break;
    case '*':
    cout << "Result= " << num1 * num2 << endl;
    break;
    case '/':
    if (num2 == 0){
        cout << "Error: Divison With Zero Is Not Allowed";
    }
    else {
        cout << "Result: " << num1/num2 << endl ;
    }
    break;
    default: cout << "Error: Invalid Operator Entered" << endl;
        break;
    }


return 0;

}
