#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



int main(){

    struct house {
        int number;
        int position;

    };

    auto sorting = [](const house &a, const house &b){
            return a.position < b.position;
        };

    struct house h[] = {{42, 90},
                        {7, 15},
                        {60, 23}};


    vector<house> houses;

    for(int i = 0; i< sizeof(h)/sizeof(h[0]); i++){
        houses.push_back(h[i]);
    }
    
    sort(houses.begin(), houses.end(), sorting);
    
    for(auto val: houses){
        cout<< "Number: " << val.number << " Position: "<<val.position<< endl;
    
    }

    if(houses.size()< 2){
        cout<< "Atleast Two houses should be there.."<< endl;
        return 0;
    }
    
    int maxDis = houses.back().position - houses.front().position;

    cout<<"Front: "<< houses.front().number << endl;
    cout<< "Back: "<< houses.back().number<< endl;
    cout<< "Max Dis: "<< maxDis<< endl;
}