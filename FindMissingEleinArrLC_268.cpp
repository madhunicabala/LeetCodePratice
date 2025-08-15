/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

*/
#include<iostream>
#include <vector>
using namespace std;
 
class Solution
{
    public:
            int missingElement(vector<int>&array);
};

int Solution::missingElement(vector<int>&array) {
    int xor_operation1 = 0;
    int xor_operation2 = 0;
    cout << "Capacity is " << array.capacity() << std::endl;
    cout << "Size is " << array.size() << std::endl;

    for (int j =0; j < array.size(); j++){
        xor_operation1^=array.at(j);
    }
    for (int k = 1; k <= 5 ; k++){
        xor_operation2^=k;
    }
    int missing_ele = 0;
    missing_ele = xor_operation1 ^ xor_operation2;
    return missing_ele;
}

int main() {
    Solution s;
    int num, element = 0;
    int missing_element = 0;
    cout << "Enter Number of elements " << std::endl;
    cin >> num;
    vector<int> arr;
    for (int i =0; i < num ; i++){
        cout << "Enter element " << i << std::endl;
        cin >> element;
        arr.push_back(element);
    }
    missing_element = s.missingElement(arr);
    cout << "Missing Element is " << missing_element << std::endl;

    return 0;
}

