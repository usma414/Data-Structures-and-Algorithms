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

    for(auto it = m.begin(); it != m.end(); it++) {

            cout << "Found " << it->first << " " << it->second << endl;
        
    }

    return 0;

}