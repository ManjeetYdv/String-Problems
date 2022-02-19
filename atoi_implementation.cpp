#include<iostream>
using namespace std;


int strToInt(string str){
 
   int integer = 0;

   if(str[0]!='-'){
   for(int i=0 ; i<str.length() ; i++){
     

       if(int(str[i])>=48 and int(str[i])<=57){
           int x = int(str[i]) -'0';
           integer = integer*10 + x;
       }
       else{
           return -1;
       }
   }
 }
 else{
     for(int i=1; i<str.length() ; i++){
     

       if(int(str[i])>=48 and int(str[i])<=57){
           int x = int(str[i]) -'0';
           integer = integer*10 + x;
       }
       else{
           return -1;
       }
   }

 }

  
   if(str[0]=='-'){
       return integer - 2*integer;
   }
   else{
       return integer;
   }

}

int main(){
    string str="-1";

    cout<<"int: "<<strToInt(str);
}
