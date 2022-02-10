#include<bits/stdc++.h>
using namespace std;

 string longestCommonPrefix (string arr[], int n)
    {
     int mini =arr[0].length();

     for(int i=0 ;i<n ;i++){
        if(arr[i].length()<mini){
            mini = arr[i].length();

        }
     string pre="";
   

     for(int i= 0 ;i<mini ;i++){
        
        bool prefix ;
         for(int j=0 ;j<n-1 ;j++){
            
            if(arr[j][i]==arr[j+1][i]){
            prefix = true;
            }
            else{
                prefix = false;
                break;

            }

         }
         if(prefix==true){
             pre+=arr[0][i];
             

         }
         else{
             break;
         }

     }
     if(pre.length()!=0){
         return pre;

     }
     else{
         return "-1";
     }


      }

    }

int main(){
      
      string arr[]={"geeks" , "geeks" , "geek" , "geeksforgeeks"};
      int n = sizeof(arr)/sizeof(arr[0]);

      string prefix =longestCommonPrefix(arr , n);

      cout<<"longest common prefix: "<<prefix;
}
