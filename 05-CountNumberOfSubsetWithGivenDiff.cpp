#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int> v={1};
    int diff=2;
    int range=0;
    int sum=accumulate(v.begin(),v.end(),range);

int sum1=(sum+diff)/2;
int n=v.size();
int dp[n+1][sum1+1];
	int count=0;
	for(int i=0;i<n+1;i++)
    for(int j=0;j<sum1+1;j++)
    {
        if(i==0)
        dp[i][j]=0;
        if(j==0)
        dp[i][j]=1;
    }
	  for(int i=1;i<n+1;i++)
    for(int j=1;j<sum1+1;j++)
    {
        if(v[i-1]>j)
        {
            dp[i][j]=dp[i-1][j];
        }
        else if(v[i-1]<=j)
        {
            dp[i][j]=dp[i-1][j] + dp[i-1][j-v[i-1]];
        }
    }

// cout<<count;
cout<<dp[n][sum1];


}