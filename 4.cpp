#include <iostream>
using namespace std;

int main ()

{
	int p,d,isprime=1;
	cout << "enter number: ";
	cin >> p;

	for (d=2;d<p;d++)
		if (!(p%d))
			isprime = 0;
		if (isprime)
			cout << "is prime" << endl;
		else	
			cout << "not prime" << endl;
		return 0;
}