#include <iostream>
using namespace std;

int main()
 {
    double n;
    double  factorial = 1;

    cout << "Enter a positive integer: "<< endl;
    cin >> n;

    if (n < 0)
    {
	
        cout << "Error! Factorial of a negative number doesn't exist."<< endl;
    }
    else {
	
         while (n>0)
         {
         	factorial = factorial * n;
         	n = n-1;
		 }
		 
	}
        cout << "Factorial of your number is  = " << factorial;    
      
return 0;
    
}
