/* Write a program that asks user for two integers and prints the sum, difference, product and remainder of the two numbers.

Esibrand tulostus

Input first integer: 3

Input second integer: 5

3+5 = 8

3-5 = -2

3*5 = 15

Remainder: 3 */

#include <iostream>
using namespace std;
int main()
{
  int first_number, second_number;
  cout << "Input first integer:";
  cin >> first_number;
  cout << "Input second integer:";
  cin >> second_number;
  cout << first_number << "+" << second_number << " = " << first_number + second_number << "\n";	 	
  cout << first_number << "-" << second_number << " = " << first_number - second_number << "\n";
  cout << first_number << "*" << second_number << " = " << first_number * second_number << "\n";
  cout << "Remainder: " << first_number << endl;
}