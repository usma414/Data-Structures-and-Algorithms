
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int buyAndSell (vector<int> prices) {

        int maxProfit = 0;
        int bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }

return maxProfit;
    }

};

int main() {

    Solution obj;
    vector<int> prices = {1,3,11,5,6};

    cout << obj.buyAndSell(prices);
}

