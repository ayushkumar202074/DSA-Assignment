#include<iostream>
using namespace std;
int StringLen(char str[]){
 int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }  
    return count; 
}

void Reverse(char str[],int len)
{
    int i=0;
    int j=len;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
void concatenation(char str1[],char str2[],int len2,int len1)
{
    int j=0;
   for(int i=len2;i<=len2+len1;i++)
   {
        
        str1[i]=str2[j];
        j++;
   }
}
void copy(char str1[],char str2[],int len1,int len2)
{
    int j=0;
    for(int i=0;i<=len2;i++)
    {
        str1[i]=str2[j];
        j++;
    }  
}
void printArray(char str[],int len)
{
        for(int i=0;i<=len;i++)
        {
            cout<<str[i];
        }
        cout<<endl;
}
int main()
{
    char str1[50];
    int len1;
    cout<<"Enter your first string"<<endl;
    gets(str1);

    char str2[50];
    int len2;
    cout<<"Enter your second string"<<endl;
    gets(str2);
    char temp[50];

    len1=StringLen(str1);
    len2=StringLen(str2);
    cout<<"Length of first array is:"<<len1<<endl<<"Length of 2nd array is:"<<len2<<endl;

    concatenation(str1,str2,len1,len2);
    cout<<"Concatenating array 2 to array 1:printing array 1"<<endl;
    printArray(str1,len1+len2);

    copy(str1,str2,len1,len2);
    cout<<"printing array 1 after copying array 2 in array 1"<<endl;
    printArray(str1,len2);

    Reverse(str1,len2);
    cout<<"Reverse of 1st character Array after 2-1 operation is:"<<endl;
    printArray(str1,len2);
    return 0;
}
