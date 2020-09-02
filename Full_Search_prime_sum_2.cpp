#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<bool> check(n+1);
	vector<int> prime;
	for(int i=2;i<=n;i++){
		if(check[i]==false){
			prime.push_back(i);
			for(int j=i*2;j<=n;j=j+i)check[j]=true;
		}
	}
	int left=0;int right=0;int sum=prime.empty()?0:prime[0]; int ans=0;
	while(left<=right && right<prime.size()){
		if(sum<=n){
			if(sum==n)ans++;
			sum+=prime[++right];
		}
		else{
			sum-=prime[left++];
		}
	}
	cout<<ans<<endl;	
	return 0;
}
