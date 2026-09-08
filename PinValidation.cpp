# include <iostream>
using namespace std;
int main () {
    int Pin = 250002;
    int input;
    int i = 1;
    do
    {cout <<"Enter Your Password: " ;
        cin >> input;
        if (input==Pin)
{cout << "Access Granted" << endl;break;}
else if (!(input==Pin))
{cout <<"Error: Wrong Password, Attempt Left: "<< 3-i << endl;
}
i++;
} while (i<=3);
   if (i>3)
   {cout << "Error: Your Card Has Been Blocked Because Of Security Reasons" << endl;}
    


    return 0;
}