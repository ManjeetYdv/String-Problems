#include<bits/stdc++.h>
using namespace std;
 int numofSimilar(string str1, string str2) {
        
        
       int count =0;
        
       
        int countstr1[26]={0};
        int countstr2[26]={0};


        for(int i=0 ;i<str1.length() ;i++){
            countstr1[str1[i]-'a']++;
        }
          for(int i=0 ;i<str2.length() ;i++){
            countstr2[str2[i]-'a']++;
        }
        for(int i=0 ;i<str1.length() ;i++){
            for(int j=i ;j<str2.length() ;j++){
                if(str1[i]==str2[j] and countstr1[str1[i]-'a']>0 and countstr2[str2[i]-'a']>0){
                    count++;
                    countstr1[str1[i]-'a']-=1;
                    countstr2[str2[i]-'a']-=1;
                    break;
                    
                }
            }
            
        }
        return count;
    }


    int main(){
        string str1 ="bonk";
        string str2 ="bboonnkkboom";

        int x =numofSimilar(str1 , str2);
        cout<<x;

    }
