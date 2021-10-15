 #include<iostream> 
using namespace std;
#define max 100 
int a[max],n,i,h,l; 
int main() 
{ 
void input(void); 
input();  
return 0;
} 
void input(void) 
{ 
void quicksort(int a[],int l,int h); 
void output(int a[],int n); 
cout<<"How many elements : "; 
cin>>n; 
cout<<"\n"; 
cout<<"Enter the elements : \n"; 
for(i=0;i<n;i++) 
{ 
cin>>a[i]; 
} 
l=0; 
h=n-1; 
quicksort(a,l,h); 
cout<<"The sorted array is : \n"; 
output(a,n); 
} 
void quicksort(int a[],int l,int h) 
{ 
int temp,key,low,high; 
low=l; 
high=h; 
key=a[(low+high)/2]; 
do{ 
while(key>a[low]) 
{
low++; 
} 
while(key<a[high]) 
{ 
high--; 
} 
if(low<=high) 
{ 
temp=a[low]; 
a[low++]=a[high]; 
a[high--]=temp; 
} 
} 
while(low<=high); 
if(l<high) 
quicksort(a,l,high); 
if(low<h) 
quicksort(a,low,h); 
} 
void output(int a[],int n) 
{ 
for(i=0;i<n;i++) 
{ 
cout<<a[i]<<"\t";
}
}
