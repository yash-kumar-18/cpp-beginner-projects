# include <iostream>


using namespace std ; 

int main () {

// using to variable to save units
    double units ;
    // using to tell user to ender input
 cout << "Enter Units Consumed= ";
 // input
 cin >> units;
 // conditions
 /*Calculation used In This Code As Per Units Consumed (in Rs.)
 << Up to 100 units= 5
 101 to 200 units= 7
 201 to 300 units= 9
 Above 300 units= 11*/
  if (units<= 100 && units >=0)
 {cout << "Your Electricity Bill As Per Units Consumed= " << units*5 << endl;
 }
 else if (units >100 && units<200)
 { cout << "Your Electricity Bill As Per Units Consumed= " << (100*5 + (units - 100)*7)<<endl;
 }
  
 else if (units>=200 && units <= 300 )
 { cout << "Your Electricity Bill As Per Units Consumed= " << (100*5 + 100*7 + (units - 200)*9)<<endl;
 }
 else if (units>300)
 {cout << "Your Electricity Bill As Per Units Consumed= " << (100*5 + 100*7 + 100*9 +(units - 300)*11) << endl ;
 } 
 else {
    cout << "Invalid Input" << endl ;
 }
 
 return 0;
 

}
