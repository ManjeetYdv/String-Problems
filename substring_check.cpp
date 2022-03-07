#include<bits/stdc++.h>
using namespace std;


bool substring(string s1 , string s2){
   
   bool substr= false;
    for(int i=0;  i<s1.size() ;i++){

        for(int j=1 ; j<=s1.size()-i ;j++){
             string str = s1.substr(i , j);
             if(str.compare(s2)==0){
                 return true;
             }
          
        }
    }

    return substr;

}


int main(){
    
   string str="xyzzaaaaaa";
   string str2="xyzz";
   if(substring(str , str2)){
       cout<<"yes";
   }
   else{
       cout<<"no";
   }


}
