#include<bits/stdc++.h>
using namespace std;

string bigSum(string X , string Y)
{
        string result="";
        int xLen= X.length();
        int yLen =Y.length();
        int carry=0;
        int i=0;
        
        while(i<xLen || i<yLen || carry!=0){
            
            int x=0;
            int y=0;
            if(i<xLen){
               x= stoi(X.substr(xLen-1-i , 1));
            }
            if(i<yLen){
               y= stoi(Y.substr(yLen-1-i ,1));
            }
           
          
           
            
            result = to_string( (x+y+carry)%10)+ result;
            carry = (x+y+carry)/10;
            i++;
            }
            
           while(result[0]=='0' and  result.length()>1){
                 result.erase(0 , 1);
           }
           return result;
            
}

int main(){
   string added = bigSum("000000" , "000000000");
   cout<<"added string us : "<<added;

}
