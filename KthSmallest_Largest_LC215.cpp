#include<iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {

    public:
        int findKthSmallestElement(vector<int>&arr, int k){
            //using minHeap logic.
            priority_queue<int, vector<int> , greater<int> > minHeap; 
            // greater <int> - this means smallest element will be at the top of the heap.
            for (int x: arr){
                minHeap.push(x);
            }
            //Now top of the heap will have smallest element.
            int f = k -1; 
            // k = 3, we need to find 3rd smallest element - top of the heap will be smallest,
            // we keep popping and new smallest will come at the top. Pop 2 times and element at the
            // top will be 3rd smallest element.
            while (f > 0){
                minHeap.pop();
                f--;
            }
            return minHeap.top();
        }
        int findKthLargestElement(vector<int>&arr, int k){
            // using maxHeap logic
            priority_queue<int, vector<int> , less<int> > maxHeap;
            for (int x:arr){
                maxHeap.push(x);
            }
            int f = k -1;
            while (f > 0){
                maxHeap.pop();
                f--;
            }
            return maxHeap.top();

        }

};

int main(){
    int n = 6;
    vector<int> arr (6);
    for (int i =0; i < n; i++){
        cout << "Enter element " << i << std::endl;
        cin >> arr.at(i);
    }
    Solution s;
    int ele = s.findKthSmallestElement(arr, 3);
    cout << "Kth smallest element is " << ele << std::endl;
    ele = s.findKthLargestElement(arr, 3);
    cout << "Kth largest Element is " << ele << std::endl;
    return 0;
}
