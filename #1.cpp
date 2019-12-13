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
    for(int i = 0; i<m; i += 1)
    {
        int min = 0, max = 0;
        for(int j = 0; j<n; j += 1)
        {
            if(a[i][j]<a[i][min])
            {
                min = j;
            }
            if(a[i][j]>a[i][max])
            {
                max = j;
            }
        }
        int t = a[i][min];
        a[i][min] = a[i][max];
        a[i][max] = t;
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
