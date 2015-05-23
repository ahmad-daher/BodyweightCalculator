
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : Bodyweight calculator
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : get it together fatass
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double weight;
	double bodyfat;
	double dbf;

	cout << "Enter your weight in pounds: ";
	cin >> weight;
    if (weight > 0)
        cout << "Enter your bodyfat without the percent sign: ";
    else
    {cout << "The number you entered is not a correct bodyweight"<< endl;
        cout << "Please enter your bodyweight"<< endl;
        cin >> weight;
        cout << endl;
        cout << "Enter your bodyfat without the percent sign"<< endl;
    };
    
    
	cin >> bodyfat;
	cout << "Enter your desired bodyfat without the percent sign: ";
	cin >> dbf;
	bodyfat = bodyfat / 100;
	double lbm;
	lbm = weight - (weight * bodyfat);

	dbf = dbf / 100;
    cout << "Your desired bodyweight is " << lbm/(1 - dbf) << endl;


    return 0;
}
