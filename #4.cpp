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
    for(int i = 0; i<m-1; i += 1)
    {
        for(int j = 0; j<m-1; j += 1)
        {
            if(a[j][0]>a[j+1][0])
            {
                for(int k = 0; k<n; k += 1)
                {
                    int t = a[j][k];
                    a[j][k] = a[j+1][k];
                    a[j+1][k] = t;
                }
            }
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
