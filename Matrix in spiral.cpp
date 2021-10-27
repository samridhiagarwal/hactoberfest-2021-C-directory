#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<" Enter number of columns: ";
    cin>>columns;
    int a[rows][columns];
    cout<<"Enter the matrix "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cin>>a[i][j];
        }
    }
    // Consider this problem as a 4 wall problems it will become very easy...
    // Thanks for giving me this idea...

    int startrow = 0, startcolumn = 0, endcolumn = columns - 1, endrow = rows-1;
    while(startrow<=endrow && startcolumn<= endcolumn)
    {
        for(int i = startcolumn; i <= endcolumn;i++)
        {
            cout<<a[startrow][i]<<" ";
        }
        startrow++;
        
        for(int i = startrow; i <= endrow; i++)
        {
            cout<<a[i][endcolumn]<<" ";
        }
        endcolumn--;

        for(int i = endcolumn; i >= startcolumn;i--)
        {
            cout<<a[endrow][i]<<" ";
        }
        endrow--;
        for(int i = endrow; i >= startrow; i--)
        {
            cout<<a[i][startcolumn]<<" ";
        }
        startcolumn++;
    }
    return 0;

}