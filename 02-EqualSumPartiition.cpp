


// KNAPSACK


#include <bits/stdc++.h>
using namespace std;
bool subsetSum(vector<int>arr,int n,int sum){
if(sum==0)return true;
if(n==0)return false;


if(arr[n-1]<=sum){
    return(subsetSum(arr,n-1,sum-arr[n-1])||subsetSum(arr,n-1,sum));
}
return subsetSum(arr,n-1,sum);
}

int main()
{
vector<int>arr={7,2,5};
	int n=arr.size();
    int sum=0;
for(int i=0 ; i<n ; i++){
    sum+=arr[i];
}    
if(sum%2!=0){cout<<false;return 0;}
    cout<<subsetSum(arr,n,sum/2);
    
}





// DP



// #include <bits/stdc++.h>
// using namespace std;


// int main(){

// int arr[4]={1,11,5,5};
// 	int n=4;
//     int sum=0;
// for(int i=0 ; i<n ; i++){
//     sum+=arr[i];
// }    

// if(sum%2!=0){cout<<false;return 0;}
// // cout<<subSetSum(arr,n,sum/2);

//  sum=sum/2;
        
        
//         bool dp[n+1][sum+1];
// 	for (int i = 0; i <= n; i++)
//         dp[i][0] = true;
// 	for (int i = 0; i <= sum; i++)
//         dp[0][i] = false;
	
// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=sum ; j++){
// 			if(arr[i-1]<=j)dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
// 			if (j < arr[i - 1]) dp[i][j]=dp[i-1][j];
// 		}
// 	}
// 	cout<<dp[n][sum];

// }