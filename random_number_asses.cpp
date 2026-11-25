#include <iostream>
#include <random>
using namespace std;

int main(){

    mt19937 generator;
    generator.seed(123);
    uniform_int_distribution<int> dist(1,10);

    for(int i = 0; i < 5; i++){

        cout<< dist(generator)<< " ";
    }
    return 0;
}