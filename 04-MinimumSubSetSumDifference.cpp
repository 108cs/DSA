#include<bits/stdc++.h>
using namespace std;

int main()

{
	int arr[3]={1,2,7};
    int n=3;


    int range=0;
    for(int i=0 ;i<n ; i++){
        range+=arr[i];
    }


    bool dp[n+1][range+1];

	for (int i = 0; i <= range; i++)
        dp[0][i] = false;
	for (int i = 0; i <= n; i++)
        dp[i][0] = true;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=range ; j++){
			if(arr[i-1]<=j)dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
			if (j < arr[i - 1]) dp[i][j]=dp[i-1][j];
		}
	}

vector<int>vec;

    
        for(int j=0 ; j<=range/2 ; j++){
            if(dp[n][j]==true)vec.push_back(j);
        }
    
    int mini=INT_MAX;
    for(auto it:vec){
        mini=min(mini,range-(2*it));
    }
    cout<<mini;
	return 0;
}