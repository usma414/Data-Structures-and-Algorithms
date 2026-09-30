
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    // double power(double x, int n) {

    //     long binForm = n;       //x^n = 2 ^ 5;   n = 5
    //     double ans = 1;   

    //     if(n == 0) return 1.0;
    //     if (x == 1) return 1.0;
    //     if (x == 0) return 0.0;
    //     if (n == 1) return x;
    //     if(x == -1 && n % 2 == 0) return 1.0;
    //     if(x == -1 && n % 2 != 0) return -1.0;

    //     // Checking if power is negative
    //     if (n < 0) {
    //         x = 1/x;
    //         binForm = -binForm;
    //     }

    //     while (binForm > 0) {

    //         if (binForm % 2 == 1) {     // 5 % 2 == 1    ====  
    //             ans *= x;               // 1 *  2 == 2   ==== 2 * 16 == 32 this is our answer
    //         }

    //         x *= x;                    // 2 * 2 = 4   === 16 * 16 ====dont care
    //         binForm /= 2;               
    //     }

    //     return ans;

    // }

    double power(double x, int n) {

        long binForm = n;
        double ans = 1;

        if (n == 0) return 1.0;
        if (n == 1) return x;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;


        if (n < 0) {
            x = (1/x);
            binForm = -binForm;
        }

        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }

};

int main() {
    Solution obj;
    cout << obj.power(2, 5);
}