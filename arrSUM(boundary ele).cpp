#include<iostream>
using namespace std;
int main()
{


     int m = 4;
     int n = 5;


    int arr[m][n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }


    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
            {
                sum += arr[i][j];
            }
        }
    }


    cout << "Summation is: " << sum << endl;

    return 0;


}
