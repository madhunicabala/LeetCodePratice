#include<iostream>
using namespace std;

class Solution {
    public:
        vector<vector<int> > threeSum(vector<int>& nums) {
            vector<vector<int> > triplets;
            int n = nums.size() - 1;
            int target = 0;
            int left = 0;
            int right = n;
            int sum = 0;
            
            cout << "array size " << n << std::endl;
                for (int i = 0; i < n ; i++){
                    //cout << "Left and right " << i << left << right << std::endl;
                    if (i > 0 && nums[i] == nums[i-1]) continue; // skip duplicate here as well.
                    left = i + 1;
                    right = n;
                    while (left < right){
                        sum = nums[i] + nums[left] + nums[right];
                        if (sum == target){
                            triplets.push_back({nums[i], nums[left], nums[right]});
                            while (left < right && nums[left] == nums[left+1]) 
                                left++;
                            while (left < right && nums[right] == nums[right-1])
                                right--;

                            left++; right--;
                            cout << "Now triplet size is " << triplets.size() << std::endl;
                        }
                        else if (sum < target)
                            left++;
                        else
                            right --;       
                }
            }
            return triplets;
            
        }
    };

    int main() {
        Solution s;
        vector<vector<int> > triplets;
        vector<int>arr = {-1,0,1,2,-1,-4};
        std::sort(arr.begin(), arr.end());
        triplets = s.threeSum(arr);
        // Print everything
        for (int i = 0; i < triplets.size(); i++) {
        cout << "Triplet " << i << " : ";
        for (int j = 0; j < triplets[i].size(); j++) {
            cout << triplets[i][j] << " ";
        }
        cout << endl;
    }
       
    }
