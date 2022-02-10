#include<iostream>
#include<string.h>
using namespace std;

int value(char roman){
    switch(roman)
    {
      case 'I' : return 1;
      case 'V' : return 5;
      case 'X' : return 10;
      case 'L' : return 50;
      case 'C' : return 100;
      case 'D' : return 500;
      case 'M' : return 1000;  
    }
}

int romanToInt(string roman){
     
     int ans =0;
     int p=0;
     
     for(int i=roman.length()-1 ; i>=0 ;i--){

         if(value(roman[i])>=p){
             ans += value(roman[i]);
              p = value(roman[i]);
         }
         else {
             ans -= value(roman[i]);
              p = value(roman[i]);
         }
        
     }

     return ans;

}

int main()
{
    string roman ="IV";
    
    int integer =romanToInt(roman);
    cout<<roman <<" in decimal: "<<integer;
}
