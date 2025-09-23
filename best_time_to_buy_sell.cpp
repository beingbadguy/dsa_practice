#include <iostream>
#include <vector>
using namespace std;

void bestBuy(vector<int> &prices)
{
    int maxProfit = 0;
    int currPrice = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        currPrice = min(prices[i], currPrice);
        maxProfit = max(maxProfit,prices[i] - currPrice);
    }
    cout << "the max profit is : " << maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    bestBuy(prices);
    return 0;
}