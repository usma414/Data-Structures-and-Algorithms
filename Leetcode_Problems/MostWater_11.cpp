
// #Using 2 Pointer Approach

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int containerWater(vector<int> heights) {

        int lp = 0;
        int rp = heights.size() - 1;
        int maxWater = 0;

        while(lp < rp) {
            int width = rp - lp;
            int conHeight = min(heights[rp], heights[lp]);
            int currWater = width * conHeight;

            maxWater = max(maxWater, currWater);

            heights[lp] < heights[rp] ? lp++ : rp--;
        }

        return maxWater;
    }

};

int main() {
    Solution obj;
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout << obj.containerWater(heights);
}