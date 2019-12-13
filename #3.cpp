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
    for(int i = 0; i<m/2; i += 1)
    {
        for(int j = 0; j<n/2; j += 1)
        {
            int t = a[i][j];
            a[i][j] = a[i+m/2][j+n/2];
            a[i+m/2][j+n/2] = t;
        }
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
