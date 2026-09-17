

#include <iostream>
using namespace std;

int main() {

    bool validMove(string previousCity, string newCity) {

        return tolower(previousCity[previousCity.size() - 1]) == tolower(newCity[0]);

    }
}