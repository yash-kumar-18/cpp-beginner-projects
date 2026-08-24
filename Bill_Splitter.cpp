# include <iostream>
using namespace std ;
int main () {

// making a variable to store value of total bill
double totalbill;
// making a variable to store value of total persons
double totalpersons;
double billperperson;
// using to tell user to enter Total  Bill Amount
cout << "Total  Bill Amount = ";

// using to get input from user to know total amount of bill
cin >> totalbill;

// using to tell user to enter Total  Persons
cout << "Total Persons = " ;

// using to get input from user to know total persons
cin >> totalpersons ;
if (totalpersons==0){
cout << "Error: Divison With Zero Is Not Allowed";
return 0;}
// making a variable to store value of bill per person
else {
    billperperson = totalbill/totalpersons;}

// using to give output about bill per person

cout << "Total Bill Per Person = " << billperperson << endl;



    return 0 ;

}
