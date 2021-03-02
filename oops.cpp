#include<iostream>

using namespace std;

void readmatrix(int matrix[10][10], int &m, int &n)
{
	   
         for ( int i=0; i<m; i++)
        {
          for(int j=0;j<n;j++) 
          cin>>matrix[i][j];
        }
  return;
       
}

 void displaymatrix (int matrix[10][10], int &m, int &n ) 
     {
        for(int i=0; i<m; i++)
           { cout<<endl;
         for(int j=0;j<n;j++)
             cout<<matrix[i][j]<<" ";
            } return;
      }       

int main()
{
int  matrix[10][10];
int M,N;

cout<<"Enter the number of rows m = ";
cin>>M;
cout<<endl<<"Enter the number of columns n = ";
cin>>N;

readmatrix(matrix,M,N);
displaymatrix(matrix,M,N);
//delete [] matrix;
return 0;
}



