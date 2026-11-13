#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<string>
#include<map>
#include <unordered_set>
#include <set>
using namespace std;

int main(){

    // vector<int> nums = {1,2,3,4,5,6,7,8,9};

    // int target = 11;

    // reverse(nums.begin(), nums.end());

    // cout <<"Max Element: "<< *max_element(nums.begin(), nums.end()) << " ";
    // cout<< endl;
    // cout<< "Min Element: "<< *min_element(nums.begin(), nums.end()) << " ";
    // cout<< endl;

    // for(int val: nums){
    //     cout<< val << " ";
    // }


    // if(find(nums.begin(), nums.end(), target) != nums.end()){
    //     cout << "Vector contains "<< target;
    // } else {
    //     cout<< "not found" << endl;
    // }

    // if(binary_search(nums.begin(), nums.end(), target)){
    //     cout<< "data contains "<< target;
    // } else {
    //     cout<<"Not found"<< endl;
    // }



    // unordered_map<int, string> countries;

    // countries.insert({1, "Pakistan"});
    // countries.insert({2, "UK"});
    // countries.insert({3, "US"});
    // countries.insert({4, "Australia"});

    // for(auto it = countries.begin(); it != countries.end(); it++){
    //     cout<< it->first <<" : " << it->second << " ";
    // }

    // cout<<endl;
    
    vector<string> cities = {"Lahore", "Faisalabad", "Multan", "Lahore", "Islamabad", "Karachi"};

    unordered_map<int, string> cit;

    cout<<"Note the difference between Unordered Map and Map" << endl;;

    for(int i = 0; i < cities.size(); i++){
        cit.insert({i + 1, cities[i]});
    }

    cout<< "Unordered Map: "<< endl;

    for(auto it = cit.begin(); it != cit.end(); it++){
        cout<<it->first << " : " << it->second << endl;
    }

    
    cout<<"Map: "<< endl;
    map<int, string> mapcities;

    for(int i = 0; i < cities.size(); i++){
        mapcities.insert({i + 1, cities[i]});
    }

    for(auto it = mapcities.begin(); it != mapcities.end(); it++){
        cout<<it->first << " : " << it->second << endl;   
    }

    
    auto it = mapcities.find(3);

    if(it != mapcities.end()){
        cout<< it->second << endl;
    } else {
        cout<<"City Not Found" << endl;
    }


    unordered_set<string> uniqueCities;

    for(int i = 0; i < cities.size(); i++){

        uniqueCities.insert(cities[i]);

    }


    for(auto it = uniqueCities.begin(); it != uniqueCities.end(); it++){

        cout << (*it) << " " ;
    }

    cout <<  endl;
    set<string> uniqsetCities;

    for(int i = 0; i < cities.size(); i++){

        uniqsetCities.insert(cities[i]);

    }


    for(auto it = uniqsetCities.begin(); it != uniqsetCities.end(); it++){

        cout << (*it) << " " ;
    }


}





