#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost[][4]={
        {1,1,3,8},
        {2,1,1,9},
        {3,5,1,1},
        {4,8,6,1}
    };
int dp[10][10] = {0};
int n= 4, m=4;
for(int i= 0; i<n ;i++){
    for(int j =0; j<m ; j++){
        if(!i and!j){
            dp[i][j] = cost[i][j];
        }
        else{
            int op1 = (i-1 >=0)? dp[i-1][j]:INT_MAX;
            int op2 = (j-1>=0)? dp[i][j-1] :INT_MAX;
        
         dp[i][j] = min(op1 , op2) +cost[i][j];
        }
    }
}
for(int i= 0; i<n ;i++){
    for(int j =0; j<m ; j++){
        cout << dp[i][j] << " ";
    }
    cout << endl;
        }
 cout << " ans : " << dp[n-1][m-1] << endl;
 return 0;       
        
        
        

}
