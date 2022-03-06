
#include<bits/stdc++.h> 
using namespace std;

string multiply(string str1 ,string str2)
{ 
    
   int Alen=str1.length();
   int Blen=str2.length();
   bool minus = false;

   if(str1[0]=='-' and str2[0]=='-'){
       Blen--;
       Alen--;
       str1.erase(0 , 1);
       str2.erase(0 , 1);
   }
   else if(str1[0]=='-'){
       Alen--;
       str1.erase(0 , 1);
       minus = true;
   }
   else if(str2[0]=='-'){
       Blen--;
       str2.erase(0 , 1);
       minus=true;
   }


   int len= Alen +Blen +1;
   int res[len]={0};
   int carry=0;

   for(int i=0 ;i<Blen ; i++){

          string xx = str2.substr(Blen-1-i ,1);
          int x = xx[0] -'0';
          

        for(int j=0 ;j<Alen ;j++){

          string yy = str1.substr(Alen-1-j , 1);
          int y = yy[0]-'0';
         
          res[len-1-i-j]+= x*y + carry;
          carry = res[len-1-i-j]/10;
          res[len-1-i-j] = res[len-1-i-j]%10;

           }

           if(carry!=0){
               res[len-1-i-Alen]= carry;
               carry=0;
           }
           

   }


   cout<<endl;
   string result="";
  

   for(int i=0 ;i<len ;i++){
       result+= to_string(res[i]);
   }
  
  while(result[0]=='0' and result.length()>1){
      result.erase(0 , 1);
  }
  
  if(minus and result!="0"){
      result = '-'+ result;
  }

   return result;

}


int main(){
    string mul = multiply("0" , "-23");
    cout<<mul;
}
