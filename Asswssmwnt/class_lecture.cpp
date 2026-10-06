#include<iostream>
using namespace std;

class Solution{
public:

    int findMax(int arr[], int size){

        int maxNum = arr[0];
        for(int i = 0; i < size; ++i){

            if(arr[i] > maxNum){
                maxNum = arr[i];
            }
        }

        return maxNum;

    }

    int findMin(int arr[], int size){

        int minNum = arr[0];

        for(int i = 1; i < size; ++i){

            if(arr[i] < minNum){
                minNum = arr[i];
            }
        }

        return minNum;

    }


    int countOccurrences(int arr[], int size, int target){

        int count = 0;

        for(int i = 0; i < size; ++i) {

            if(arr[i] == target){
                count ++;
            }
        }
        return count;
    }

    int countEven(int arr[], int size){

        int count = 0;

        for(int i = 0; i < size; ++i) {

            if(arr[i] % 2 == 0){
                count ++;
            }
        }
        return count;
    }

};

class BankAccount{
private:

    int balance;

public:

    BankAccount(double initialBalance) : balance(initialBalance){};

    void deposit(double amount){
        balance += amount;
    }

    int getBalance(){
        return balance;
    }
};


int main() {

    // Solution obj;
    // int arr[] = {17,-4,4,9,3};
    // int result = obj.findMax(arr, 5);
    // int minn = obj.findMin(arr,5);
    // int counter = obj.countOccurrences(arr,5, 3);
    // int evenCount = obj.countEven(arr, 5);
    
    // cout<< result << " "<< endl;
    // cout<< "Min: "<< minn << endl;
    // cout<< "Count: "<< counter<< endl;
    // cout<< "Even Count: "<< evenCount<< endl;


    BankAccount account1(1500);
    account1.deposit(600);
    cout<< "Current balance: "<< account1.getBalance();

    
}