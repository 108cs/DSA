// RECURSIVE
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int arr[],int sum ,int n){   
// if(sum==0)return 1;
// if(n==0)return 0;
// if(arr[n-1]<=sum)return solve(arr,sum-arr[n-1],n-1)+solve(arr,sum,n-1);
// else return solve(arr,sum,n-1);
// }
// int main(){
// int arr[6]={2,3,5,6,8,10};
// int sum=18;
// cout<<solve(arr,sum,6);
// }
// RECURSIVE+MEMOIZED
// #include <bits/stdc++.h>
// using namespace std;
// int t[6+1][18+1];
// int solve(int arr[],int sum ,int n){   
// if(sum==0)return 1;
// if(n==0)return 0;
// if(t[n][sum]!=-1)return t[n][sum];
// if(arr[n-1]<=sum)return t[n][sum]= solve(arr,sum-arr[n-1],n-1)+solve(arr,sum,n-1);
// else return t[n][sum]= solve(arr,sum,n-1);
// }
// int main(){
// int arr[6]={2,3,5,6,8,10};
// int sum=18;
// memset(t,-1,sizeof(t));
// cout<<solve(arr,sum,6);
// }
// TOP-DOWN DP
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6]={2,3,5,6,8,10};
// int sum=18;
// int dp[6+1][sum+1];
// for(int i=0 ; i<=6 ; i++){
//     for(int j=0 ; j<=sum; j++){
//         if(i==0)dp[i][j]=0;
//         if(j==0)dp[i][j]=1;
//     }
// }
// for(int i=1 ; i<= 6 ; i++){
//     for(int j=1 ; j<=sum ; j++){
//         if(arr[i-1]<=j){
//             dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
//         }
//         else dp[i][j]=dp[i-1][j];
//     }
// }
// cout<<dp[6][sum];

// }
