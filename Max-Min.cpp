#include<iostream>
using namespace std;
int main()
{
	int input, max = -999999999, min = 999999999;
	cout << "Enter 10 Numbers : " << endl;
	for (int i = 0; i < 10; i++)
		{cin >> input;
		if (input > max)
			max = input;
		if (input < min)
			min = input;
		}
		cout << endl << "Minimum number	" << min << endl << "Maximum number	" << max;
}
