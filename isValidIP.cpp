#include<bits/stdc++.h>
using namespace std;

int isValid(string str){

   int count=0;
   for(int i=0 ;i<str.length() ;i++){
       if(int(str[i])==46){
         count+=1;
       }
   }

   if(count!=3){
      return 0;
   }
  

   stack<string> st;

   for(int i=0 ;i<str.length() ;i++){
       string s="";
      
      while(str[i]!='.' and i<str.length()){
          s+=str[i];
          i++;
      }
      st.push(s);

   }
  
   while(!st.empty()){
         if(stoi(st.top())>=0 and stoi(st.top())<=255){
            
            st.pop();
         }
         else{
             return 0;
         }
   }

  return 1;



}

int main(){
    string str="22.22.1.25";
    cout<<isValid(str);
}
