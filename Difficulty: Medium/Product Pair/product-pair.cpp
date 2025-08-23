// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        int n = arr.size();
        if (n<2) return false;
        std::sort(arr.begin(), arr.end());
        int i=0, j=n-1;
        if ((1ll*arr[j]*arr[j-1])<x) return false;
        if ((1ll*arr[i]*arr[i+1])>x) return false;
        while(i<j){
            if ((1ll*arr[i]*arr[j])==x) return true;
            else if ((1ll*arr[i]*arr[j])<x) i++;
            else j--;
            
        }
        return false;
    }
};