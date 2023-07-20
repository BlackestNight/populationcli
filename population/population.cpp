#include <iostream>
#include <stdio.h>
using namespace std;

int start;
int endpop;
int n;

int main(int start, int endpop)
{
	cout << "What is the populations Start size?: ", cin >> start;
	if (start < 9)
	{
		cout << "please put a number higher than 9: ", cin >> start;
	}
	cout << "What is the populations End size?: ", cin >> endpop;
	if (endpop <= start)
	{
		cout << "please put a number higher than your start population: ", cin >> endpop;
	}

	for (n = 0; start <= endpop; n++) 
	{
		start = (start / 3) - (start / 4) + start;
	}
	cout <<"Years: ", cout << n;
	return start;
}
