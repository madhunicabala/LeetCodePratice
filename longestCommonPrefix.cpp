#include <iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string subarray = strs[0];
            vector<char> temp;
            int n = strs.size();
            for (int i = 1; i < n ; i ++){
                int j = 0;
                string curr = strs[i];
                while (j < subarray.size() && j < curr.size() && subarray[j] == curr[j]){
                    j++;
                }
                cout << "position is " << j << std::endl;
                subarray = subarray.substr(0,j);
                if (subarray.empty()) return "";
            }
            return subarray;
        }
    };

int main() {
        Solution s;
        string common_prefix;
        vector<string>arr = {"ab", "a"};

        common_prefix = s.longestCommonPrefix(arr);
        cout << "Common_Prefix is " << common_prefix << std::endl;
       
    }
