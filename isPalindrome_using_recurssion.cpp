#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str , int l ,int m){

    if(l>=m){
        return true;
    }
    if(str[l]!=str[m]){
        return false;
    }

    return isPalindrome(str , l+1 , m-1);
}

int main(){
    string str="abba";
    cout<<isPalindrome(str ,0 ,str.length()-1);
}
