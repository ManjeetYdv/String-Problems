#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num){
    
    // check for these values and add corrseponding 
    // char of the string

    // 1000-M
    // 900-CM 
    // 500-D 
    // 400-CD 
    // 100-C 
    // 90-XC 
    // 50-L
    // 40-XL 
    // 10-X 
    // 9-IX 
    // 5-V 
    // 4-IV 
    // 1
    
   string roman="";

    while(num>=1000){
        num-=1000;
        roman+="M";
    }
    if(num>=900){
        num-=900;
        roman+="CM";

    }
    while(num>=500){
        num-=500;
        roman+="D";
    }
    if(num>=400){
        num-=400;
        roman+="CD";
    }
    while(num>=100){
        num-=100;
        roman+="C";
    }
    if(num>=90){
        num-=90;
        roman+="XC";

    }
    while(num>=50){
        num-=50;
        roman+="L";
    }
    if(num>=40){
        num-=40;
        roman+="XL";
    }
    while(num>=10){
        num-=10;
        roman+="X";
    }
    if(num>=9){
        num-=9;
        roman+="IX";

    }
    if(num>=5){
        num-=5;
        roman+="V";
    }
    if(num>=4){
        num-=4;
        roman+="IV";
    }
    while(num>=1){
        num-=1;
        roman+="I";
    }


    return roman;

    

}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n ;
    string roman =intToRoman(n);
    cout<<n<<" in roman: "<<roman;
}
