#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << endl;
    int a[m][n];
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<n; j += 1)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    int mini = 0, minj = 0, maxi = 0, maxj = 0;
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<n; j += 1)
        {
            if(a[i][j]<a[mini][minj])
            {
                mini = i;
                minj = j;
            }
            if(a[i][j]>a[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
        }
    }
    for(int i = 0; i<m; i += 1)
    {
        int t = a[i][minj];
        a[i][minj] = a[i][maxj];
        a[i][maxj] = t;
    }
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<n; j += 1)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
