# include <iostream>
using namespace std;
int main () {
// using to save age
int age;
//using to tell user to give input about age
cout << "Enter Your Age: ";
// age input
cin >> age;
// condion
if (age<=0)
{ cout << "Error: Age Must Be Greater Than Zero" << endl;
return 0;}
else if (age <18)
{ cout << "You Are Not Eligible To Vote" << endl ;
 return 0; }
    else {
cout << "You Are Eligible To Vote" << endl ;
    }
 return 0;
}
