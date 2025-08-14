/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int xor_operation1 = 0;
    int xor_operation2 = 0;


    for (int j =0; j < nums.size(); j++){
        xor_operation1^=nums.at(j);
    }
    for (int k = 0; k <= nums.size() ; k++){
        xor_operation2^=k;
    }
    int missing_ele = 0;
    missing_ele = xor_operation1 ^ xor_operation2;
    return missing_ele;
        
    }
};
