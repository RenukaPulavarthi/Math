//https://www.spoj.com/problems/HS08PAUL/

#include <bits/stdc++.h>
using namespace std;
vector<bool>seive(1e7,true);
vector<int>prefix(1e7,0);
void computeSeive(){
    seive[0]=false;
    seive[1]=false;
    for(int i=2;i*i<1e7;i++){
        if(seive[i]){
            for(int j=i*i;j<1e7;j+=i){
                seive[j]=false;
            }
        }
    }
}
void getPrefix(){
    for(int i=0;i*i<1e7;i++){
        for(int j=0;((i*i)+(j*j*j*j))<1e7;j++){
            if(seive[(i*i)+(j*j*j*j)]){
               prefix[(i*i)+(j*j*j*j)]=1;
            }
        }
    }
    for(int i=1;i<1e7;i++){
        prefix[i]+=prefix[i-1];
    }
}
int main() {
	long long t;
	cin>>t;
	computeSeive();
	getPrefix();
	while(t--){
	    long long n;
	    cin>>n;
	    cout<<prefix[n]<<endl;
	}

}
