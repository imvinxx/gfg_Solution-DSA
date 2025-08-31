class Solution {

  public:
    int FindElement(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        vector<int> l_max(n);
        l_max[0] = arr[0];
        for (int i=1;i<n;i++){
            l_max[i] = max(l_max[i-1],arr[i]);
        }
        vector<int> r_min(n);
        r_min[n-1] = arr[n-1];
        for (int i=n-2;i>=0;i--){
            r_min[i] = min(r_min[i+1],arr[i]);
        }
        for (int i=0;i<n;i++){
            if ((i==0 || arr[i]>=l_max[i-1]) && (i==n-1 || arr[i] <= r_min[i+1])) return arr[i];
        }
        return -1;
    }
};
