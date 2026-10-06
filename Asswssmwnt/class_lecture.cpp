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

};


int main() {

    Solution obj;
    int arr[] = {1,17,-4,9,3};
    int result = obj.findMax(arr, 5);
    int minn = obj.findMin(arr,5);
    cout<< result << " "<< endl;
    cout<< "Min: "<< minn << endl;
    
}