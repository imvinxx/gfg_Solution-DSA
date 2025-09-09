class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int n = mices.size();
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        int i=0, ans=0;
        while(i<n){
            ans = max(ans,(abs(holes[i]-mices[i])));
            i++;
        }
        return ans;
    }
};