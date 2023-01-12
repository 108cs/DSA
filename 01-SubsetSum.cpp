
// #include <bits/stdc++.h>
// using namespace std;
// bool solve(int arr[] , int sum,int n){
// if(sum==0)return true;
// if(n==0)return false;
// if(arr[n-1]<=sum)return solve(arr,sum-arr[n-1],n-1)||solve(arr,sum,n-1);
// else return solve(arr,sum,n-1);
// }
// int main(){
// int arr[6]={3,1,4,5,6,9};
// int sum=28;
// cout<<solve(arr,sum,6);
// }

// Knapsack + Memoization
// #include <bits/stdc++.h>
// using namespace std;
// int t [6+1][28+1];
// bool solve(int arr[],int sum, int n){
//     if(sum==0)return true;
//     if(n==0)return false;
//     if(t[n][sum]!=-1)return t[n][sum];
//     if(arr[n-1]<=sum){
//         return t[n][sum]=solve(arr,sum-arr[n-1],n-1)||solve(arr,sum,n-1);
//     }
//     else return t[n][sum]=solve(arr,sum,n-1);
// }
// int main(){
// int arr[6]={3,1,4,5,6,9};
// int sum=3;
// memset(t,-1,sizeof(t));
// cout<<solve(arr,sum,6);
// }

// Top-Down DP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {3, 1, 4, 5, 6, 9};
    int sum = 9;
    bool dp[6 + 1][sum + 1];
    for (int i = 0; i <= 6 + 1; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    }
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;
    }
    cout << dp[6][sum];
}
