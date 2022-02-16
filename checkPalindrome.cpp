#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){

    bool palindrome= true;

    for(int i=0 ;i<str.length()/2 ;i++){
        if(str[i]!=str[str.length()-1-i]){
            palindrome= false;
            break;
        }

    }
    return palindrome;
}

int main()
{
    string str="abbbac";
    if(checkPalindrome(str)){
        cout<<str<<" is a palindrome";
    }
    else{
        cout<<"nah";
    }
}
