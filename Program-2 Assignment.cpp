[9:24 am, 30/09/2021] Ashish Sinha CSE: #include <iostream>
using namespace std;

//  The iteration function 
int bsearch(int a[ ], int size, int x)
{
  int first = 0;
  int last = size -1;

  while(first<= last) {
    int mid = (first + last)/2;

    if(x < a[mid]) 
      last = mid - 1;
    else if(x > a[mid]) 
      first = mid + 1;
    else 
      return a[mid];
  }
  return -1;
}
//  The recursion function
int bsearch_recursive(int a[ ], int first, int last, int x)
{
  if(first > last) return -1;

  int mid = (first + last)/2;

  if(x < a[mid])
    bsearch_recursive(a, first, mid-1, x);
  else if(x > a[mid])
    bsearch_recursive(a, mid+1, last, x);
  else
    return a[mid];
}

void print(int n)
{
  if(n == -1) {
    cout << "\nNumber not found" << endl;
  return;
  }
  cout << "\nNumber found" << endl;

}
int main()
{        
  int array[]={5, 7, 13, 15, 25, 47, 67, 73, 80, 99};
  int arraySize = sizeof(array)/sizeof(int);
  int result;
  cout<< "The array is  : ";
  for(const  int & a : array){
      cout<<a<<" ";
  }

// Finding  elements by using iteration.
  result = bsearch(array, arraySize, 7); 
  print(result);
  result = bsearch(array, arraySize, 99); 
  print(result);
  result = bsearch(array, arraySize, 56); 
  print(result);

// Finding elements  by  using recursion.
  result = bsearch_recursive(array, 0, arraySize-1, 7); 
  print(result);
  result = bsearch_recursive(array, 0, arraySize-1, 99); 
  print(result);
  result = bsearch_recursive(array, 0, arraySize-1, 56); 
  print(result);

  return 0;
}
[9:24 am, 30/09/2021] Ashish Sinha CSE: yeh lo karo enjoy