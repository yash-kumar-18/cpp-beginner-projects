# include <iostream>
using namespace std;
int main () {
// using to save marks
double theorymarks;
double practicalmarks;
// using to tell user to enter marks
cout << "Enter Your Theory Marks= ";
// using to get marks input
cin >> theorymarks;
// using to tell user to enter marks
cout << "Enter Your Practical Marks= ";
// using to get marks input
cin >> practicalmarks;
// conditions
if (theorymarks>=0 && theorymarks<=50 && practicalmarks>=0 && practicalmarks<=50 )
if (theorymarks + practicalmarks >=40)
{ if (practicalmarks >=15 && theorymarks >=15)
    {cout << "You Passed The Exam";}
    else {
        cout << "You Failed Because Of Individual Cutoff" ;
    }}
else {
    cout << "Failed Overall";}
else {
    cout << "Invalid Input" << endl;
}
return 0;
}