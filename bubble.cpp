#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    bool swaped=false;
    int a[] = {7, 3, 8, 9, 1};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swaped=true;

            }
        }
        if(swaped==false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
