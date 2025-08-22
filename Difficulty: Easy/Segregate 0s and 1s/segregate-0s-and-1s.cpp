// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n-1;
        while (left<right){
            if (arr[left] == 0) left++;
            if (arr[right] == 1) right--;
            else {
                std::swap(arr[left], arr[right]);
            }
        }
        return ;
    }
};