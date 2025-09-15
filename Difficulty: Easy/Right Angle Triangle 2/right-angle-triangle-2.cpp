class Solution {
  public:
    void printPattern(int n) {
        // Code here
        for (int i=1; i<=n; i++){
            if (i <=2 || i==n){
                for(int j=1; j<=i; j++){
                    cout << "* ";
                }
            }
            else{
                for (int j=1; j<=i; j++){
                    if (j==1) 
                        cout << "* ";
                    else if (j==i)
                        cout << "*";
                    
                    else  
                        cout << "  ";
                }
                
            }
            cout << endl;
        }
    }
};


