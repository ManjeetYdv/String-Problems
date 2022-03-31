#include<bits/stdc++.h>
using namespace std;


string addBinary(string s1 , string s2){
    int carry=0;
    int i=0;
    string result="";
    int s1Len= s1.length();
    int s2Len= s2.length();

    while(i<s1Len || i<s2Len || carry!=0){
        int x=0;
        if(i<s1Len and s1.substr(s1Len-1-i , 1)=="1"){
            x=1;
        }

        int y=0;
        if(i<s2Len and s2.substr(s2Len-1-i , 1)=="1"){
            y=1;
        }

        result = to_string((x+y+carry)%2) + result;
        carry =(x+y+carry)/2;
        i++;
    }
    
   
    return result.substr(result.find('1'));

}

int main()
{

    string added = addBinary("00101" ,"0");
    cout<<added;
   
}
