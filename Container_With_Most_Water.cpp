/* 
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.*/

#include <iostream>
#include <unordered_map>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int n = height.size() - 1;
        int right = n;
        int final_area = 0;
        int curr_area = 0;
        while (left < right) {
            curr_area = min(height[left], height[right]) * (right - left);
            final_area = max(curr_area, final_area);
            if (height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return final_area;
    }
};

int main() {
    vector <int> arr = { 2, 7, 11, 50, 10}; // { 2,7,10,11,50};
    Solution s;
    int max_area = s.maxArea(arr);
    cout << "Max Area " << max_area << std::endl;
return 0;
}
