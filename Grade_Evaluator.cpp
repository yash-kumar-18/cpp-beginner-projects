#include <iostream>
using namespace std;
int main () {
    // using to save marks
  double marks;
    
  // using to tell user to enter marks 
  cout  << "Enter Your Marks: " << endl ;
    
  // using to get input about marks
  cin >> marks;
    // using to stop user to enter wrong input
    if (marks>100)
        cout << "Error: Marks Cannot Be Greater Than 100." << endl ;
else
  // condition
    if (marks>=90)
    { cout << "Excellent work! You achieved Grade A." << endl ;
    }
    else if (marks>=75)
    {cout << "Good job! Keep it up — you earned Grade B" << endl ;
    }
    else if (marks>=50)
    {cout << "You passed with Grade C. With more effort, you can do even better." << endl ;
    }
    else if (marks>=33)
    {cout << "You passed with Grade D. Keep working harder to improve further." << endl ;
    }
    else 
    {cout << "Don't lose hope - you'll have many chances ahead. This time you got Grade F (Fail)." << endl ;
    }
    return 0;
}
