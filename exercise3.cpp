/* Write a program that asks user for amount of dollars and converts them to euros. In the end the program prints the amount of euros on screen. The exchange rate for euros is 0.727802. Use variables of the type double */

#include <iostream>
using namespace std;
int main()
{
  float dollar_rate = 0.727802, a, number;
  cout << "How much dollars do you want to exchange:";
  cin >> number;
	a=number*dollar_rate;
  cout << "Amount in euros: " << a << endl;
}



/* Write a program that asks for the circle radius and calculates the area of the circle based on it. In the end the area is printed on screen. Use the approximate value of 3.142 for π. User is expected to input only integers.

Tip:

Circle area is A = π · r2, where r is circle radius.

Example print:

Input circle radius: 6

Circle area with the given radius: 113.112 */


#include<iostream>
#define pi 3.142
using namespace std;
int main()
{
  double r;
  cout << "Input circle radius:";
  cin >> r;
  cout << "Circle area with the given radius: " << pi*r*r << endl;
}