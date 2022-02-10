
#include<bits/stdc++.h>
using namespace std;

int closestStrings(vector<string> &s,  string word1 , string word2){

   int flag1=0;
		int flag2=0;
		int diff=INT_MAX;
		int index1=0;
		int index2=0;
		for(int i=0;i<s.size();i++)
		{
		    if(s[i]== word1)
		    {
		        index1=i;
		        flag1=1;
		    }
		    if(s[i] == word2)
		    {
		        index2=i;
		        flag2=1;
		    }
		    if(flag1==1 && flag2==1)
		    {
		        if(abs(index1-index2)<diff)
		        {
		            diff=abs(index1-index2);
		        }
		    }
		    
		}
		return diff;




}

int main(){
    int n;
    cout<<"Enter num of words: ";
    cin>>n;
   vector<string> s(n);
    
   cout<<endl;
    for(int i=0 ;i<n ;i++){
    	cout<<"Enter string "<<i+1<<" : ";
		cin>>s[i];
	}
	cout<<endl;
	string word1 ,word2;
	cout<<"Enter word1 : ";
	cin>>word1;
	cout<<"Enter word2 : ";
	cin>>word2;
	
   int distance = closestStrings(s  , word1  , word2);
   cout<<"minimum distance between "<<word1<<" and "<<word2<<" is :"<<distance; 
}
