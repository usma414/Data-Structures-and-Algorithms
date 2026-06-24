 
 #include <iostream>
 using namespace std;

 int decToBin (int num) {

    int ans = 0;
    int pow = 1;

    while (num > 0) {
        int rem = num % 2;
        num = num /2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;

 }


 int binToDec (int binNum) {

    int answer = 0;
    int power = 1;
    while (binNum > 0) {
        int remain = binNum % 10;
        answer += (remain * power);

        binNum = binNum / 10;
        power *= 2;
    }
    return answer;
 }

 int main () {
    // cout<< "Binary form of number n is: " << decToBin(8);
    cout << "Decimal form of number n is : " << binToDec(1010);
 }



 