/********************************************************************
 ** Author:		  Morgan Eck
 ** Date:		  7/1/2018
 ** Description:  Asks the user for a number of cents from 0 to 99
 **			      and outputs how many of each type of coin would
 **			      represent that amount with the fewest total coins.
 *******************************************************************/

 #include <iostream>
 #include <string>

 using std::cout;
 using std::cin;
 using std::endl;

 int main()
 {
 	//declare variables
	int userCents,
		quarters,
		dimes,
		nickles,
		pennies;
	/*the values for coins used in calculations will be:
	quarter: 25, dimes: 10, nickles: 5, pennies: 1 */

	//prompt user for a number of cents between 0 - 99
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> userCents;

	/*calculate the amounts of each type of coin, 
	starting with quarters and working down by value */
	quarters = userCents / 25;
	dimes = (userCents % 25) / 10;
	nickles = ((userCents % 25) %10) / 5;
	pennies = (((userCents % 25) % 10) % 5) / 1;

	//displays results for number of each coin type
	cout << "Your change will be:" << endl;
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickles << endl;
	cout << "P: " << pennies << endl;
	
 	return 0;
 }
