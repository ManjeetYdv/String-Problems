#include<bits/stdc++.h>
using namespace std;


bool substring(string str1 , string str2){
   
  if(str1.find(str2)>=0 and str1.find(str2)<str1.length()){
    return true;
   }
   else{
     return false;
   }

}


int main(){
    
   string str="xyzzaaaaaa";
   string str2="xyzaz";
   if(substring(str , str2)){
       cout<<"str2 is a substring of str1";
   }
   else{
       cout<<"str2 is not a substring of str2";
   }


}
