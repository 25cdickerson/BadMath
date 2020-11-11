#include <iostream>
#include <iomanip>
using namespace std;

float average(float i1, float i2, float i3)
{
	float avg = (i1 + i2 + i3) / 3;
	return avg;
}
#include <string>
int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;
	string temp;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; 
	cin >> temp;
	n1 = stof(temp);
	cout << "Second number: ";
	cin >> temp;
	n2 = stof(temp);
	cout << "Third number: ";
	cin >> temp;
	n3 = stof(temp);

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}