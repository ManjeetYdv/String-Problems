#include<bits/stdc++.h>
using namespace std;


int main(){
   string str ;
   cout<<"Enter the hexadecimal value : ";
   cin>>str;

   int x ;
   stringstream st;
   st<<str;
   st>>hex>>x;
   cout<<str<<" in decimal : "<<x;


}
