#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    //ways to declare array
    // string str = "COPY THAT!!!";      //declares a string of same value
    //  string spr[10];
     
    // string sqr(10 , 'N');             //declares a string of size 10 and value as N
    // string abc(str);                  //declares a new copied string abc of str


   

    
    //STRINGS FUNCTIONS:

    //1.)getline() used to take string input 

    // string name ;
    // cout<<"Enter name : ";
    // getline(cin  ,name);
    // cout<<name;


   // 2.) append() function

//    string s1 ="first string ";
//    string s2 = "second string ";
//    s1.append(s2);             //s1 = s1+s2;
//    cout<<s1;
   

   // 3.)assign(): Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
    
    // string s ="Manjeet";
    // s.assign("Nitin");
    // cout<<s;



//4. begin(): Returns an iterator pointing to the first character. Its time
// complexity is O(1). 


    //5) clear(): Erases all the contents of the string and assign an empty string (“”)  of length zero. Its time complexity is O(1).

    // string s= "xyz";
    // cout<<s<<endl;
    // s.clear();
    // cout<<"AFter clear function s is :"<<s;  



//    6.)compare(): Compares the value of the string with the string passed in the
//        parameter and returns an integer accordingly. Its time complexity is O(N + 
//        M) where N is the size of the first string and M is the size of the second string.

    //  string s1 ="xyzpqr";
    //  string s2 ="xyz";

    //  if(s1.compare(s2)){
    //      cout<<"S1 is bigger ";
    //  }
    //  else{
    //      cout<<"s2 is bigger ";
    //  }
   

//    7) empty(): Returns a boolean value, true if the string is empty and false if the
//     string is not empty. Its time complexity is O(1).

    // string s1 ="Xya";
    // s1.clear();

    // if(s1.empty()){
    //     cout<<"s1 is empty"<<endl;
    // }


    // 8) end(): Returns an iterator pointing to a position which is next to the last
    //        character. Its time complexity is O(1).

    

    // 9) erase(): Deletes a substring of the string. Its time complexity is O(N) where   
    //     N is the size of the new string.

    // string s1 ="ABCDEF";
     
    // s1.erase(2 , 3);            //output :ABF    next 3 chars from s1[2] will be deleted (includes s1[2])
    // s1.erase(1);                //output : A     all charcter from s[1]will be deleted  (includes s1[1])
    // cout<<s1;



    // 10)find(): Searches the string and returns the first occurrence of the parameter
    //        in the string. Its time complexity is O(N) where N is the size of the string.   

    // string s1 ="helloworld";
    // cout<<s1.find("world");
      
    //  12.insert(): Inserts additional characters into the string at a particular position.
    //       Its time complexity is O(N) where N is the size of the new string.4

    // string s1 ="Hello";
    // s1.insert(1 , "EEEEE");
    // cout<<s1;

   
    //13.length(): Returns the length of the string. Its time complexity is O(1).

    // string s1 ="hello";
    // cout<<s1.length();

 
//     14.resize(): Resize the string to the new length which can be less than or
// greater than the current length. Its time complexity is O(N) where N is the
// size of the new string.

    //  string s1 ="HelloWorld";
    //  s1.resize(5);
    //  cout<<s1<<endl;

    //  s1.resize(10);
    //  s1.insert(5 ,"World");
    //  cout<<s1;


    // 15.size(): Returns the length of the string. Its time complexity is O(1).

    // string s1= "Hello";
    // cout<<s1.size()<<endl;
    // cout<<s1.length()<<endl;

//     16.substr(): Returns a string which is the copy of the substring. Its time
// complexity is O(N) where N is the size of the substring.

    // string s1 ="HelloWorld";
     
    // string s2 = s1.substr(5 , 4);  // means from 5th index 4 next chars
    // cout<<s2;
    //string str2 = s1.substr(5); ////meand all substring from index 5;
    

//    17.stoi(): Returns the strings converted to int datatype.

        //  string s1 ="23";
        //  int x = stoi(s1);
        //  cout<<x+1;



    // 18. To convert an integer to a string, we use to_string() function.

    // int x =1234;
    // string s1 = to_string(x);
    
    // s1 = s1 +" is now string";
    // cout<<s1;


//   19. Sorting a string: To sort a string, we need to include a header file known as
//      algorithm in our code like this

    //  string s1 ="AaCcasdfg";
    //  sort(s1.begin() , s1.end());
    //  cout<<s1;



// string str ="01234";

// string str1 = str.substr(0 , 2);
// string str2 = str.substr(2);

// cout<<str1<<"  "<<str2;

     

    //  for(int i=0 ;str.length() ;i++){
    //      cout<<str[i]-'a'<<endl;
    //  }
     string newstr ="abcdef";
    cout<<newstr[5]-'a';

return 0;
}
