#include<bits/stdc++.h>
using namespace std;

 bool areKAnagrams(string s1, string s2, int k) {
        
  
        if(s1.length()!=s2.length())
       {
           return false;
       }
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0 ;i<s1.length() ;i++)
       {
           count1[s1[i]-'a']++;
       }
       for(int i=0 ; i<s2.length() ;i++)
       {
           count2[s2[i]-'a']++;
       }
       int diff=0;
       for(int i=0;i<26;i++)
       {
           if(count2[i]!=0&&count1[i]==0)
           {
               diff+=(count2[i]);
           }
           else if(count2[i]>count1[i])
           {
               diff+=(count2[i]-count1[i]);
           }
       }
       
       if(diff>k)
       {
           return false;
       }
       
       return true;
        
    }

    int main()
    {
        string str1="fodr";
        string str2 ="gork";
       
        if(areKAnagrams(str1 , str2 , 2)){
            cout<<str1<<" and "<<str2<<" can be maade same with almost 2 changes ";

        }
        else{
            cout<<"or maybe not";
        }
    }
