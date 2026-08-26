# include <iostream>
using namespace std;
int main () {
// using to save age
int age;
//using to tell user to give input about age
cout << "Enter Your Age: ";
// age input
cin >> age;
// using condition to stop user from entering negative age
if (age<=0)
{cout << "Age Must Be Greater Than Zero" << endl ;
    return 0;
}
// using ternaary operator
else
 (age>=18) ? cout << "You Are Eligible To Vote" : cout << "Error: You Are Not Eligible To Vote" ;

    return 0;
}
