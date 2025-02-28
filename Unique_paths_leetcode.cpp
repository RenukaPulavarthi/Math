//https://leetcode.com/problems/unique-paths/?envType=problem-list-v2&envId=combinatorics

class Solution {
public:
    int uniquePaths(int m, int n) {
        m=m-1;
        n=n-1;
        int r=min(m,n);
        long long ans=1;
        for(int i=0;i<r;i++){
            ans=ans*(n+m-i)/(i+1);
        }
        return ans;
    }
};
