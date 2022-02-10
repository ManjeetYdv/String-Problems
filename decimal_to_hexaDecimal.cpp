#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the decimal number : ";
    cin>>n;

    stringstream s ;
    s<<hex<<n;
    cout<<n<<" in hexaDecimal: "<<s.str();

  
}
