#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() == 0){
            cout << "Array is Empty " << std::endl;
            return{};
        }
        unordered_map<int, int> seen;
        for (int i =0; i < (nums.size()); i++){
            int val = target - nums.at(i);
            if (seen.find(val) != seen.end()){
                return {seen.at(val) , i};
            }
            seen.emplace(nums[i],i);
        } 
        return {};
    }
    vector<int> twoSum_Method2(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end()); 
        int left = 0;
        int right = nums.size() -1;
        while (left < right) {
            int value = nums[left] + nums[right];
            if ( value == target){
                cout << "target found " << value << std::endl;
                return {left, right};
            }
            else if (value > target){
                right--;
            }
            else{
                left++;
            }

        }

        return {};
    }
};

int main() {
    vector <int> arr = { 2, 7, 11, 50, 10};
    int target = 60;
    Solution s;
    vector <int> pos = s.twoSum(arr,target);
    for (int x: pos){
    cout << "Positions are " << x << std::endl;
    }
return 0;
}
