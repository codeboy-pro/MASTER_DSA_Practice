#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  cout << "Enter the values:";
  cin >> a >> b >> c >> d;
  // create a 4d array
  int ****ptr = new int ***[a];
  // create a 3d array and stores its address in ptr
  for (int i = 0; i < a; i++)
  {
    ptr[i] = new int **[b];
    for (int j = 0; j < b; j++)
    {
      ptr[i][j] = new int *[c];

      for (int k = 0; k < c; k++)
      {
        ptr[i][j][k] = new int[d];
      }
    }
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      for (int k = 0; k < c; k++)
      {
        for (int l = 0; l < d; l++)
        {
          ptr[i][j][k][l] = i + j + k + l;
        }
      }
    }
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      for (int k = 0; k < c; k++)
      {
        for (int l = 0; l < d; l++)
        {
          cout << ptr[i][j][k][l] << " ";
        }
      }
    }
  }

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      for (int k = 0; k < c; k++)
      {
        delete[] ptr[i][j][k];
      }
      delete[] ptr[i][j];
    }
    delete[] ptr[i];
  }
  delete[] ptr;
  return 0;
}