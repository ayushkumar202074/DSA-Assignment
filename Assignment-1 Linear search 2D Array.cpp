 #include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the no. of rows and column"<<endl;
    cin >> a >> b;

    int mat[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    int input;
    cout<<"Enter the element to find "<<endl;
    cin >> input;
    bool found = false;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (mat[i][j] == input)
                found = true;
        }
    }
    if (found)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}