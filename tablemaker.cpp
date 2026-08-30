# include <iostream>
using namespace std;
int main () {
// using variables to save number and limit of printing
double number;
int limit;
cout << "Which Number's Table Do You want To Generate: " ;
cin >> number;
if (number<=0)
{cout << "Error: Number Must Be Greater Than Zero"<< endl;
return 0;
}
cout << "Up To What Number Do You Want To Print The Table (1 to 10,000): ";
cin >> limit;
// if (limit<=0)
// {cout << "Error: Table Limit Must Be Greater Than Zero"<<endl;
// return 0;}
// else if (limit>10000)
// {cout << "Error: Table Limit Must Be Lower Than OR Equal To 10,000"<<endl;
// return 0;}
// else
cout << "Table Of " << number << endl;
for (size_t i = 1; i <= limit; i++)
{cout <<number<<"x"<<i<<"="<< number*i << endl;}
    return 0;
}