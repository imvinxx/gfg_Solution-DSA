// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        std::vector<int> ans;
        int currency[]={2000,500,200,100,50,20,10,5,2,1};
        
        int i=0,notes=0;
        while(N!=0){
            notes = N/currency[i];
            while(notes!=0){
                ans.push_back(currency[i]);
                notes--;
            }
            N%=currency[i];
            i++;
        }
        return ans;
    }
};