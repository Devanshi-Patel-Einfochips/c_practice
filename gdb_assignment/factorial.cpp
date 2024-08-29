
#include<iostream>
using namespace std;

int factorial(int n);

int main(void) {
	
	int n = 5;
	int f = factorial(n);
    cout << "The factorial of " << n << f << endl;
	// printf("The factorial of %d is %d.\n", n, f);
	n = 17;
	f = factorial(n);
        cout << "The factorial of " << n << f << endl;

	// printf("The factorial of %d is %d.\n", n, f);

	return 0;
		
}

int factorial(int n) {
	int f = 1;
	int i = 1;
	while (i <= n) {
		f = f * i;
		i++;
	}
	return f;	
}
