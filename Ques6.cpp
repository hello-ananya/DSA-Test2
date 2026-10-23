//A student tracks the price of a study-planner app over several days. The student wants to buy the app at its lowest price on one day and sell it at a higher price on a later day. You are given an array prices, where prices[i] is the price on day i. Find the maximum profit possible by buying on one day and selling on a later day. If no profit is possible, return 0.
#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    cout << maxProfit;
    return 0;
}