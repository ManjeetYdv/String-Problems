#include<bits/stdc++.h>
using namespace std;

int distinct(string str){
   
  
   int arr[str.length()+1];
   arr[0]=1;
 
   for(int i=0 ;i<str.length() ;i++){
     
      if(str.find(str[i])!=i )
      
       {  int j;
       
         for(j= i-1 ;j>=0 ;j--){
            if(str[j]==str[i]){
               break;
            }
         }
            arr[i+1]= arr[i]*2 - arr[j];

         }
   
       else if(str.find(str[i])==i){
          arr[i+1] = arr[i]*2;
       }

   }
   
 

    return arr[str.length()];
}


int main(){
   
   string str="ggg";
   int dis = distinct(str);
   
   cout<<"Number of distinct subsequence "<<str<<" is: "<<dis;


   return 0;
}
