// User function template for C++

class Solution {
public:
    bool isProduct(vector<int> arr, long long x) {
        int n = arr.size();
        if (n < 2) return false;
        int zero = 0;
        std::map<long long, int> freq;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) zero++;
            freq[arr[i]]++;
        }

        if (x == 0 && zero >= 1) return true;

        for (auto it = freq.begin(); it != freq.end(); it++) {
            long long a = it->first;
            if (a == 0) continue;
            if (x % a != 0) continue;
            long long b = x / a;
            if (a == b && freq[a] >= 2) return true;
            if (a != b && freq.count(b)) return true;
        }
        return false;
    }
};
