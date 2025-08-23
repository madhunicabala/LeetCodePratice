#include<iostream>
using namespace std;


class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = nums.size();
            int k = 0;
            for (int i =0; i <n; i++){
                if (nums[i] != val){
                    nums[k] = nums[i];
                    k++;
                }
            }
                 
            cout <<"value of k is " << k << std::endl;
            return k;
        }
};


int main() {
    Solution s;
    vector<int>nums = { 1,1,3,4,1,1};
    int val = 1;
    int k = s.removeElement(nums,val);
    for (int x=0; x < k; x++)
        cout << " " << nums[x];
    return 0;
}
