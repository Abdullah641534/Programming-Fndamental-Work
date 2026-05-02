#include<iostream>
using namespace std;
void printsum(int arr[][3],int rows);
main()
{
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;
    int matrix[100][3];
    cout<<"Enter the element of the matrix: \n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element at position "<<"["<<i<<"]"<<" ["<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }
    printsum(matrix,rows);
    return 0;
}
void printsum(int arr[][3],int rows)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The sum of the element in the matrix is: \n";
    cout<<sum;
}