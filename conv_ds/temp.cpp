#include<iostream>
using namespace std;

int main()
{
    int arr[4][4];
    int arr2[4][4];
    int multi[4][4];

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
            cin>>arr[i][j];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> arr2[i][j];
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            multi[i][j] = 0;
            for(int k = 0; k<4; k++)
                multi[i][j] += arr[i][k] * arr[j][k];
        }
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
            cout<<multi[i][j]<<" ";
        cout<<endl;
    }
}