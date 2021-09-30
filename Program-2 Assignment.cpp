 #include <iostream>
using namespace std;

// For iteration function .
int binarysearch(int a[ ], int size, int x)
{
  int low = 0;
  int high = size -1;

  while(low <= high) {
    int mid = (low+high)/2;

    if(x < a[mid]) 
      high = mid - 1;
    else if(x > a[mid]) 
      low = mid + 1;
    else 
      return a[mid];
  }
  return -1;
}

// For recursion function . 
int binarysearch_recursive(int a[ ], int low, int high, int x)
{
  if(low > high) return -1;

  int mid = (low + high)/2;

  if(x < a[mid])
    binarysearch_recursive(a, low, mid-1, x);
  else if(x > a[mid])
    binarysearch_recursive(a, mid+1, high, x);
  else
    return a[mid];
}

void print(int n)
{
  if(n == -1) {
    cout << "\nElement is not found in the array"<< endl;
  return;
  }
  cout << "\nElement is  found in the array" << endl;

}
int main()
{        
  int array[]={4, 7, 11, 15, 29, 37, 77, 85, 97};
  int arraySize = sizeof(array)/sizeof(int);
  int result;
  cout<< "The array is  : ";
  for(const  int & a : array){
      cout<<a<<" ";
  }

// searching elements by iteration .
  result = binarysearch(array, arraySize, 7); 
  print(result);
  result = binarysearch(array, arraySize, 97); 
  print(result);
  result = binarysearch(array, arraySize, 55); 
  print(result);

// searching elements by recursion  .
  result = binarysearch_recursive(array, 0, arraySize-1, 7); 
  print(result);
  result = binarysearch_recursive(array, 0, arraySize-1, 97); 
  print(result);
  result = binarysearch_recursive(array, 0, arraySize-1, 55); 
  print(result);

  return 0;
}
