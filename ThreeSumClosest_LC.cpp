#include <iostream>
#include<vector>
using namespace std;


class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            int left = 0;
            int n = nums.size() - 1;
            int right = n;
            int final_sum = 0;
            int closest_sum = 0;
            int res = 0;
            std::sort(nums.begin(), nums.end());
            for (int i = 0; i < n ; i ++){
                left = i+1;
                right = n;
                while (left < right){
                    int curr_sum = nums[i] + nums[left] + nums[right];
                    if (curr_sum == target)
                            return curr_sum;
                    if (abs(curr_sum - target) < abs(res - target)){
                        res = curr_sum;
                    }
                    if (curr_sum < target){
                        left++;
                    }
                    else
                        right--;  
                }
            }
            return res;
            
        }
    };


int main() {
        Solution s;
        int target = 3;
        int closest_sum;
        vector<int>arr = {-1,2,1,-4};
        std::sort(arr.begin(), arr.end());
        closest_sum = s.threeSumClosest(arr, target);
        
            cout << "Closest Sum is " << closest_sum << std::endl;
       
    }
