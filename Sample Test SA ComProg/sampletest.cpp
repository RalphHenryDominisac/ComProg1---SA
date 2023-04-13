#include <iostream>
using namespace std;

int factorial (int fact, int n){
	fact = fact*n;
	return fact;
}
int main(){
	int n, fact=1;
	
	cout << "Enter number: ";
	cin >>n;
	for (int i=1; i<=n; i++)
	     fact=factorial(fact,i);
	     
	     cout <<"\nFactorial of given number is: " << fact;
	     
	
	return 0;
}
