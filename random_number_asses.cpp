#include <iostream>
#include <random>
using namespace std;

// int main(){

//     mt19937 generator1;
//     mt19937 generator2;

//     generator1.seed(123);
//     generator2.seed(456);

//     uniform_int_distribution<int> dist(1,10);

//     cout<< "Seed 1: " << endl;
//     for(int i = 0; i < 5; i++){

//         cout<< dist(generator1)<< " ";
//     }

//     cout<<endl;
//     cout<< "Seed 2: "<< endl;
//     for(int i = 0; i < 5; i++){
//         cout<< dist(generator2) << " ";
//     }

//     return 0;
// }


class randomGame{
private: 

    mt19937 generator;

public:

    void seed(int val){

        generator.seed(val);

    }

    int generateNumber(){

        uniform_int_distribution<int> dist(1 , 10);
        return dist(generator);
    }
};

int main(){

    randomGame game1;
    randomGame game2;

    // game.seed(123);
    // cout<< game.generateNumber();
    // cout<< endl;
    // game.seed(245);
    // cout<< game.generateNumber();
    // cout<< endl;
    // game.seed(123);
    // cout<< game.generateNumber();

    // cout<< endl;
    // cout<< "Second Generator: "<< endl;
    // game2.seed(123);
    // cout<< game2.generateNumber();
    // cout<< endl;
    // game2.seed(245);
    // cout<< game2.generateNumber();
    // cout<< endl;
    // game2.seed(123);
    // cout<< game2.generateNumber();

    game1.seed(123);
    game2.seed(123);

game1.generateNumber();
game1.generateNumber();
game1.generateNumber();

game2.generateNumber();

}