// LC-121 : Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        // minPrice keeps track of the lowest price seen so far
        // (best day to buy before the current day)
        int minPrice = prices[0];

        // maxProfit stores the maximum profit achievable so far
        int maxProfit = 0;

        /*
            Single pass approach:
            At each day i, we decide:
            - Either update the minimum buying price
            - Or sell today and update maximum profit
        */

        for (int i = 1; i < n; i++) {

            // Update minimum price if a lower price is found
            minPrice = min(minPrice, prices[i]);

            // Check profit if we sell on day i
            // prices[i] - minPrice represents profit
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        // Maximum profit achievable with one buy and one sell
        return maxProfit;

        // Time Complexity: O(n) The array is traversed exactly once.
        // Space Complexity: O(1) Only constant extra variables are used.

    }
};
