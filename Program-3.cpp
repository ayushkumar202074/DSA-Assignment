 //Write a program to perform operations on table - add,sub,mul,transpose//
  #include<iostream>
   using namespace std;
   const int MAX=2;
 class matrix{
    private:
      int mat[MAX][MAX];
    public: matrix();
      void create(); void display();
      void add_mat(matrix &mat1,matrix &mat2); void sub_mat(matrix &mat1,matrix &mat2); void mul_mat(matrix &mat1,matrix &mat2);
      void transpose(matrix &m1);
 };
  matrix :: matrix(){
  for(int m=0;m<MAX;m++)
    for(int n=0;n<MAX;n++)
        mat[m][n]=0;
   }
   void matrix :: create(){
    for(int m=0;m<MAX;m++)
     for(int n=0;n<MAX;n++)
      cin>>mat[m][n];
   }
  void matrix :: add_mat(matrix &mat1,matrix &mat2){
   for(int m=0;m<MAX;m++)
     for(int n=0;n<MAX;n++){
        mat[m][n]=mat1.mat[m][n]+mat2.mat[m][n];
   }
}
void matrix :: sub_mat(matrix &mat1,matrix &mat2){
  for(int m=0;m<MAX;m++)
    for(int n=0;n<MAX;n++){
           mat[m][n]=mat1.mat[m][n]-mat2.mat[m][n];
   }
}
  void matrix :: mul_mat(matrix &mat1,matrix &mat2){
  for (int k=0;k<MAX;k++)
    for(int m=0;m<MAX;m++)
      for(int n=0;n<MAX;n++){
           mat[m][n]=mat1.mat[m][n]*mat2.mat[m][n];
        }
}
    void matrix :: transpose(matrix &m1){
    for(int m=0;m<MAX;m++)
      for(int n=0;n<MAX;n++){
          mat[m][n]=m1.mat[n][m];
      }
}
   void matrix :: display(){
     for(int m=0;m<MAX;m++){
       for(int n=0;n<MAX;n++){
         cout<<mat[m][n]<<" ";
        }
        cout<<endl;
        }
}
  int main(){
  matrix mat1,mat2,mat3;
  cout<<"Enter 1st matrix: "; mat1.create();
  cout<<"\nEnter 2nd matrix: "; mat2.create();
  cout<<"\n1st matrix: "<<endl; mat1.display();
  cout<<"\n2nd matrix: "<<endl; mat2.display(); mat3.add_mat(mat1,mat2);
  cout<<"\nAddition of 2 matrix: "<<endl; mat3.display();
  cout<<"\nSubtraction of 2 matrix: "<<endl; mat3.sub_mat(mat1,mat2); mat3.display();
  cout<<"\nMultiplication of 2 matrix: "<<endl; mat3.mul_mat(mat1,mat2); mat3.display();
  cout<<"\nTranspose of 1st matrix: "<<endl; mat3.transpose(mat1); mat3.display();
  cout<<"\nTranspose of 2nd matrix: "<<endl; mat3.transpose(mat2); mat3.display();
  return 0;
}