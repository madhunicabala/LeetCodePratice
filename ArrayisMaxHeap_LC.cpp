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
