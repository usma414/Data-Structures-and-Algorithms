#include <iostream>
using namespace std;

void printhello () {
    cout<<"Hello World...Restarting DSA Again"<< endl;
}

int greetings () {
    cout<<"Hi. How are you sir?"<<endl;
    return 3;
}

int sum (int a, int b) {
    int s = a + b;
    return s;
}

int min (int c, int d) {
    if (c < d) { 
        return c;
    } else {
        return d;
    }
}

int calculatesum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    
return sum;
}

// Factorial
int factorial (int m) {
    int fact = 1;
    for (int i = 1; i <= m; i++) {
        fact *= i;
    }
    return fact;
}

// Sum of digits 

int sumOfDigits (int num) {

    int digsum = 0;
    while (num > 0) {
        int lastdigit = num % 10;
        num = num / 10;
        digsum += lastdigit;
    }
    return digsum;
}

// #Binomial Coefficient nCr

int nCr (int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fcat_nmr = factorial(n-r);

    int nCr = fact_n / (fact_r * fcat_nmr);
    return nCr;
}

int main () {
    printhello();
    greetings();
    cout<< "Sum of a and b = " << sum(5,6)<< endl;
    cout<<"Min of two "<< min(23,35) << endl;
    cout << "Sum of the n numbers is " << calculatesum(10)<< endl;
    cout << "Factorial is : " << factorial(5) << endl;
    cout << "Factorial is : " << factorial(5) << endl;
    cout << "Binomial cofficient is: "<< nCr(8,3);

    return 0;
}