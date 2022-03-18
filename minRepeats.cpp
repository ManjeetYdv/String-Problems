#include<bits/stdc++.h>
using namespace std;


int minRepeat(string s1 , string s2){
    
    if(s1.find(s2)>=0 and s1.find(s2)<s1.length()){
        return 1;
    } 

    int a = s1.length();
    int b = s2.length();
    int k =  max(b/a , a/b);

    for(int i=0 ; i<k ;i++){
      s1+= s1.substr(0 , a);
      



      if(s1.find(s2)>=0 and s1.find(s2)<s1.length()){
        
          return i+2;
      }

    }

return -1;
}

int main(){
 

 string str1 ="abc";
 string str2 ="cabc";


    cout<< minRepeat("xxyyyyxx", "xxxx");
}
