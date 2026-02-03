// LC-11 : Container with most water

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxArea = 0;

        // Core idea:
        // Area is determined by:
        // width = right - left
        // height = min(height[left], height[right])
        //
        // To maximize area, we use two pointers and
        // move the pointer with the smaller height.
        // Moving the taller pointer cannot increase area
        // because height is limited by the smaller one.

        while(left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);

            // Calculate current area
            maxArea = max(maxArea, h * width);

            // Move the pointer pointing to the smaller height
            // This is the only move that might increase the area
            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;

        // Time Complexity: O(n) Each pointer moves at most n times.
        // Space Complexity: O(1) Only constant extra variables are used
    }
};
