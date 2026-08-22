#include <iostream>
using namespace std;
int main () {
    // using to save marks
  double marks;
    
  // using to tell user to enter marks 
  cout  << "Enter Your Marks: " << endl ;
    
  // using to get input about marks
  cin >> marks;

  // condition
    if (marks>=90)
    { cout << "Grade A" << endl ;
        /* code */
    }
    else if (marks>=75)
    {cout << "Grade B" << endl ;
        /* code */
    }
    else if (marks>=50)
    {cout << "Grade C" << endl ;
        /* code */
    }
    else if (marks>=33)
    {cout << "Grade D (Pass)" << endl ;
        /* code */
    }
    else 
    {cout << "Grade F (Fail)" << endl ;
        /* code */
    }
    return 0;
}
