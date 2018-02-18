#include <iostream>
using namespace std;

float mpgcalc (float, float);

float lpg=0.264179;
float numliters;
float nummiles;
float firstmpg;
float secondmpg;
char yesno;
bool run_again=true;

int main(){
	while (run_again){
	cout << "Enter number of liters of gasoline for the first car: ";
	cin >> numliters;
	cout << "Enter number of miles driven in the first car: ";
	cin >> nummiles;
	firstmpg=mpgcalc (numliters, nummiles);
	cout << endl << "Enter number of liters of gasoline for the second car: ";
	cin >> numliters;
	cout << "Enter number of miles driven in the second car: ";
	cin >> nummiles;
	secondmpg=mpgcalc (numliters, nummiles);
	cout << endl << "Your first car gets " << firstmpg << " per gallon." << endl 
	<< "Your second car gets " << secondmpg << " per gallon." << endl;
	if (secondmpg>firstmpg){cout << "The second car is more efficient." << endl;}
	else if (firstmpg>secondmpg){cout << "The first car is more efficient." << endl;}
	else {cout << "Both cars are equal." << endl;}
	cout << "Go again (y/n)?: ";
	cin >> yesno;
	if ((yesno=='n')||(yesno=='N')){run_again=false;}
	}
	return 0;
}

float mpgcalc (float liters, float miles){
	float mpg;
	
	mpg= miles/(liters*lpg);
	return mpg;
}

