class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int area = 0;
        int i=0, j=n-1;
        while (i<=j){
            int m1n = min(arr[i], arr[j]);
            area = max(area, (m1n*(j-i)));
            if (arr[i] < arr[j]) i++;
            else j--;
        }
        
        return area;
    }
};