recursion
#include<bits/stdc++.h>
using namespace std;
int solve(int price[],int length[],int n,int len){
if(n==0 || len==0)return 0;
if(length[n-1]<=len){
    return max(price[n-1]+solve(price,length,n,len-length[n-1]),solve(price,length,n-1,len));
}
else return solve(price,length,n-1,len);
}
int main(){
int n=8;
int length[n]={1,2,3,4,5,6,7,8};
int price[]={1,5,8,9,10,17,17,20};
cout<<solve(price,length,n,8);
}

recursion +memoization
#include<bits/stdc++.h>
using namespace std;
int t[9][9];
int solve(int price[],int length[],int n,int len){
if(n==0 || len==0)return 0;
if(t[n][len]!=-1)return t[n][len];
if(length[n-1]<=len){
    return t[n][len]=max(price[n-1]+solve(price,length,n,len-length[n-1]),solve(price,length,n-1,len));
}
else return t[n][len] =solve(price,length,n-1,len);
}
int main(){
int n=8;
int length[n]={1,2,3,4,5,6,7,8};
int price[]={1,5,8,9,10,17,17,20};
memset(t,-1,sizeof(t));
cout<<solve(price,length,n,8);
}

top down dp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int len=8;
int length[n]={1,2,3,4,5,6,7,8};
int price[]={1,5,8,9,10,17,17,20};
int dp[n+1][len+1];
memset(dp,0,sizeof(dp));
for(int i=1 ; i<=n ; i++){
    for(int j=1 ; j<=len ; j++){
        if(length[i-1]<=j){
            dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
        }
        else dp[i][j]=dp[i-1][j];
    }
}
cout<< dp[n][len];
}