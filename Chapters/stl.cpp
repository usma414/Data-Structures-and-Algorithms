#include <iostream>
#include <map>
using namespace std;

int main(){

 map<string, int> m;

    m["Laptop"] = 100;
    m["Tv"] = 120;
    m["Radio"] = 130;
    m["Watch"] = 110;

    // m.insert({"Mobile", 95});

    // for(auto p : m) {
    //     cout << p.first  << " " << p.second << endl;
    // }

    // if(m.find("Laptop") != m.end()) {
    //     cout << "Found" << endl;
    // } else {
    //     cout <<"Not Found" << endl;
    // }

    //This is for Looping
    // for(auto it = m.begin(); it != m.end(); it++) {

    //         cout << it->first << " " << it->second << endl;
    // }

    // // for searching

    // auto it = m.find("Watch");

    // if(it != m.end()){
    //     cout<< it->first << " costs " << it->second << endl;
    // } else {
    //     cout<< "Not Found" << endl;
    // }





    // Searching/Finding

    auto it = m.find("Headphones");

    if(it != m.end()) {
        cout<< it->first << " costs " << it->second<<endl;
    } else {
        cout << "Not Found" << endl;
    }


    // Traversing 

    for(auto it = m.begin(); it != m.end(); it++) {

        cout<< it->first << " costs " << it->second<<endl;
    }

    return 0;

}