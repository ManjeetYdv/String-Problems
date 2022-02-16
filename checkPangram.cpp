#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string str){
      bool count[26]={false};
      bool pang = true;
      for(int i=0 ;i<str.length() ;i++){

          if(str[i]>='a' and str[i]<='z' ){
              count[str[i]-'a'] =true;
          }
          else if(str[i]>='A' and str[i]<='Z'){
              count[str[i]-'A'] =true;
          }
      }

      for(int i=0 ;i<26 ;i++){
          if(!count[i]){
              pang =false;
              break;
          }
      }
      return pang;
}

int main(){

    string str;
    cout<<"enter a word: ";
    getline(cin ,str);

    if(checkPangram(str)){
        cout<<str<<" is a pangram";
    }
    else{
        cout<<str<<" is not a pangram";
    }

    return 0;
}
