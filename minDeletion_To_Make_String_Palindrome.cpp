
//Recursion 
#include<bits/stdc++.h>
using namespace std;

int longestCommomSubsequence(string s1 , string s2 , int m , int n){

    if(m==0 || n==0){
        return 0;
    }

    if(s1[m-1]==s2[n-1]){
        return 1+ longestCommomSubsequence(s1 ,s2, m-1,  n-1);
    }
    else{
        return max(longestCommomSubsequence(s1 , s2 , m ,n-1) , longestCommomSubsequence(s1 ,s2 ,m-1 , n));
    }
}


int minimumNumberOfDeletions(string str){
    
    int length= str.length();
    
    string s2= str;
    reverse(s2.begin() , s2.end());

    int lcs =longestCommomSubsequence(str , s2 , length , length);

    return length-lcs;
  


}


// Optimized using dp

class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
         
        int[][]dp = new int[text1.length()+1][text2.length()+1];
        
        for(int i=1 ;i<=text1.length() ;i++){
            for(int j=1; j<=text2.length() ;j++){
               
                if(text1.charAt(i-1) == text2.charAt(j-1)){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j] , dp[i][j-1]);
                }
                
            }
        }
        
        return dp[text1.length()][text2.length()];
    }
}
