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


int main(){
   string str="aebcbda";
   
   int minDelete =minimumNumberOfDeletions(str);

   cout<<"Minimum number of deletion to make "<<str<<" a palindrome string is: "<<minDelete;


}
