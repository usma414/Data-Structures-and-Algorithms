#include <iostream>;
#include <vector>;
using namespace std;

int main() {

// vector <int> v;

// v.push_back(1);
// cout<< "Size: " << v.size() << endl;
// cout << "Capacity: " << v.capacity() << endl;

// v.push_back(2);
// cout<< "Size: " << v.size() << endl;
// cout << "Capacity: " << v.capacity() << endl;

// v.push_back(3);
// cout<< "Size: " << v.size() << endl;
// cout << "Capacity: " << v.capacity() << endl;

// v.pop_back();
// cout<< "Size: " << v.size() << endl;
// cout << "Capacity: " << v.capacity() << endl;


// vector<int> v;

// for (int i = 0; i < 5; i++) {
//     int element;
//     cin>> element;
//     v.push_back(element);
// }


// for (int i : v) {
//     cout << i << " ";
// }

// vector <string> dogs;


// for (int i = 0; i < 5; i++) {
//     string name;
//     cout << "Enter dog: ";
//     cin>> name;
//     dogs.push_back(name);
// }

// cout << "\nDogs in house: \n" << endl;
// for (string ele: dogs) {
//     cout << ele << endl;
// }




// Finding Last Occurence of element x

vector <int> nums;

for(int i = 0; i < 5; i++ ) {
    cout << "Enter num: ";
    int number;
    cin>>number;
    nums.push_back(number);
}


cout << "Enter x: "<< endl;
int x;
cin>> x;

int index = -1;
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == x) {
        index = i;
    }
}

cout << "Last occurence is: " << index << endl;

}
