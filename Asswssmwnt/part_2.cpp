#include<iostream>
#include<algorithm>
#include <vector>
#include <random>
// using namespace std;

class Prototype{
public:

    virtual void play(){
        cout<<"Playing game!!"<< endl;
    }
};

class Competition : public Prototype {
// 
public:

    void play() override(){

    }
};

int main(){


    std::mt19937 generator;
    std::generator.seed(123);
    std::uniform_int_distribution<int> dist(1,10);

    for(int i = 0; i < 5; i++){

        std::cout<< dist(generator) << " ";
    }

    // Prototype* game = new Competition();
    // game->play();
}