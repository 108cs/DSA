// Recursive 
// #include <bits/stdc++.h>
// using namespace std;
//  int solve(int coin[],int sum ,int n){
//      if(sum==0)return 1; 
//      if(n==0)return 0;
//      if(coin[n-1]<=sum)return (solve(coin,sum-coin[n-1],n)+solve(coin,sum,n-1));
//      else return solve(coin,sum,n-1);
//  }
//  int main(){
// int coin[]={1,2,3};
// int sum=4 ;
// int n=3;
// cout<<solve(coin,sum,n);
// }


// Recursive +memoized
// #include <bits/stdc++.h>
// int t[4][5];
// using namespace std;
//  int solve(int coin[],int sum ,int n){
//      if(sum==0)return 1; 
//      if(n==0)return 0;
//      if(t[n][sum]!=-1)return t[n][sum];
//      if(coin[n-1]<=sum)return t[n][sum]=solve(coin,sum-coin[n-1],n)+solve(coin,sum,n-1);
//      else return t[n][sum]= solve(coin,sum,n-1);
//  }
//  int main(){
// int coin[]={1,2,3};
// int sum=4 ;
// int n=3;
// memset(t,-1,sizeof(t));
// cout<<solve(coin,sum,n);
// }

// to down dp
// # include<bits/stdc++.h>
// using namespace std;

// int main(){
// int coin[]={1,2,3};

// int sum=4 ;
// // if(sum==0)return 0;
// int n=sizeof(coin)/sizeof(coin[0]);

//        int dp[n+1][sum+1];
//        for(int i=0;i<sum+1;i++){
//            dp[0][i]=0;
//        }
//        for(int i=0;i<n+1;i++){
//            dp[i][0]=1;
//        }
//        for(int i=1;i<n+1;i++){
//            for(int j=1;j<sum+1;j++){
//                if(coin[i-1]<=j){
//                    dp[i][j]=dp[i-1][j]+dp[i][j-coin[i-1]];
//                }else{
//                    dp[i][j]=dp[i-1][j];
//                }
//            }
//        }
//        cout<< dp[n][sum];


// }