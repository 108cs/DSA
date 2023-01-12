// #include <bits/stdc++.h>
// using namespace std;
// int knapsack(int wt[], int val[], int W, int n)
// {

//     if (n == 0 || W == 0)
//         return 0;
//     if (wt[n - 1] > W)
//         return knapsack(wt, val, W, n - 1);
//     else
//         return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int W;
//     cin >> W;
//     int val[n], wt[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> wt[i];
//     }

//     cout << knapsack(wt, val, W, n);
//     return 0;
// }

// TC=2T(n-1)+theta(1);
// O(2^n)

// Knapsack + Memoization
// #include<bits/stdc++.h>
// using namespace std;
// int t[4+1][7+1];
// int solve(int wt[],int val[],int n , int W){
// if(n==0||W==0)return 0;
// if(t[n][W]!=-1)return t[n][W];
// if(wt[n-1]<=W)return t[n][W]=max(val[n-1]+solve(wt,val,n-1,W-wt[n-1]),solve(wt,val,n-1,W));
// else return t[n][W]= solve(wt,val,n-1,W);
// }
// int main(){
// int n;
// cin>>n;
// int W;cin>>W;
// int val[n],wt[n];
// for(int i=0 ; i<n ; i++) cin>>val[i];
// for(int i=0 ; i<n ; i++)cin>>wt[i];
// memset(t,-1,sizeof(t));
// cout<<solve(wt,val,n,W);
// }
// Complexity Analysis:

// Time Complexity: O(N*W).
// As redundant calculations of states are avoided.
// Auxiliary Space: O(N*W).
// The use of 2D array data structure for storing intermediate states-:

// Top-Down DP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int W;
    cin >> W;
    int val[n], wt[n];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    int dp[n + 1][W + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][W];
}

// Complexity Analysis:

// Time Complexity: O(N*W).
// where ‘N’ is the number of weight element and ‘W’ is capacity. As for every weight element we traverse through all weight capacities 1<=w<=W.
// Auxiliary Space: O(N*W).
// The use of 2-D array of size ‘N*W’