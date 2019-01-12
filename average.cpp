/***************************************************************************
 ** Author:		Morgan Eck
 ** Date:		7/1/2018
 ** Description:This program asks the user for five numbers and then prints
 **				the average of those numbers.
 **************************************************************************/

 #include <iostream>
 #include <string>

using std::cout;
using std::cin;
using std::endl;

 int main()
 {

	//declare variables
	double numberOne, 
		   numberTwo,
		   numberThree,
		   numberFour,
		   numberFive,
		   average;

	//prompt user then getting user input
	cout << "Please enter five numbers." << endl;
	cin >> numberOne;
	cin >> numberTwo;
	cin >> numberThree;
	cin >> numberFour;
	cin >> numberFive;

	//calculating the average
	average =(numberOne + numberTwo + numberThree + numberFour + numberFive)/5.0;
	cout << "The average of those numbers is:" << endl;
	cout <<  average << endl;

 return 0;
 }
