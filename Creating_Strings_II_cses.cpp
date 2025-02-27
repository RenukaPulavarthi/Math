//https://cses.fi/problemset/task/1715

#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int N=1000001;
vector<long long>fact(N,1);
vector<long long>Infact(N,1);
long long power(long long n, long long p) {
    long long res = 1;
    while (p > 0) {
        if (p % 2 == 1)  
            res = (res * n) % mod;  
        n = (n * n) % mod;
        p /= 2;  
    }
    return res;
}
void compute(){
	for(int i=2;i<N;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}
	Infact[N-1] = power(fact[N-1], mod-2);
    for (int i=N-2;i>=0;i--) {
        Infact[i] = (Infact[i+1] * (i+1)) % mod;
    }
}
int main(){
	compute();
	string s;
	cin>>s;
	int n=s.size();
	map<char,int>mp;
	for(char c:s){
		mp[c]++;
	}
	long long res=fact[n];
	for(auto &m:mp){
		res=(res*Infact[m.second]) %mod;
	}
	cout<<res%mod<<endl;
}
