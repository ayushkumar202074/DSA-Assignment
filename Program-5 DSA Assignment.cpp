 #include <iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

int main () {
    
   char str1[10] = "Ayush";
   char str2[10] = "Kumar";
   char str3[10];
   int  len ;
   
   //  lenghth of String
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
   
   // concatenation of String
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
   
   // reverse a string
   string str = "Ayush Kumar";
   cout << "Before Reverse : "<< str<< endl;
   reverse(str.begin(),str.end());
   cout <<"After Reverse  : " << str << endl; 

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
    
   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
   
   return 0;
}
