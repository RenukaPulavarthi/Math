//https://codeforces.com/problemset/problem/630/C

#include<bits/stdc++.h>
using namespace std;
long long compute(int n){
	if(n==0) return 1;
	long long res=compute(n/2);
	if(n%2==0) return res*res;
	else return 2*res*res;
}
int main(){
	int n;
	cin>>n;
	cout<<compute(n+1)-2<<endl;
}
