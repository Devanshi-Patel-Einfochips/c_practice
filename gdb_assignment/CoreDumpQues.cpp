
#include<iostream>
using namespace std;

int factorial(int n);

int main(void) {
	
	int n = 5;
	int f = factorial(n);
    cout << "The factorial of " << n << " is " << f << endl;

	n = 17;
	f = factorial(n);
    cout << "The factorial of " << n << " is " << f << endl;

	return 0;
}

int factorial(int n) {
	int f = 1;
	int i = 1;
	int *ptr = nullptr;  

	if (n > 10) {
		*ptr = 100;  // This will cause a crash
	}

	while (i <= n) {
		f = f * i;
		i++;
	}
	return f;	
}
