#include<iostream>
#include<string.h>
using namespace std;

string lookandsay(int n){

   string res="1";
   string res2;
   int count=1;

   for(int i=2 ;i<=n ;i++){

     res2="";
     for(int j=0 ; j<res.length()-1 ; j++){

         if(res[j]==res[j+1]){
           count++;


         }
         else{
             res2 += to_string(count) + res[j];
             count=1;          
         }
         
   }
     res2 += to_string(count)+ res[res.length()-1];
     count=1;
     res = res2;



   }

   return res;




}

int main(){
    
    for(int i=1 ; i<=5 ;i++){
        cout<<lookandsay(i)<<endl;
    }



}
