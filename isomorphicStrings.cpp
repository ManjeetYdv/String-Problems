#include<bits/stdc++.h>
using namespace std;

  bool areIsomorphic(string str1, string str2)
    {
       if(str1.length() != str2.length()){
           return 0;
       }
         
        int count1[26]={0};
        int count2[26]={0};
        
        for(int i=0 ;i<str1.length() ;i++){
            count1[str1[i]-'a']++;
            count2[str2[i]-'a']++;
            
        }
        
        for(int i=0 ;i<str1.length() ; i++){
            if(count1[str1[i]-'a']!=count2[str2[i]-'a']){
                return false;
            }
        }
        return true;
       
    }


int main(){
     
     string str1 , str2 ;
     cout<<"Enter word1: ";
     cin>>str1;
     cout<<"Enter word2 : ";
     cin>>str2;

     if(areIsomorphic(str1 , str2)){
         cout<<str1<<" and  "<<str2<<" are isomorphic: ";
     }
     else{
          cout<<str1<<" and  "<<str2<<" are not isomorphic: ";
     }
return 0;
    
    
}
