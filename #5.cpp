#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    cout << endl;
    int a[m][m];
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<m; j += 1)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for(int i = m-1; i>=0; i -= 1)
    {
        int s = 0;
        for(int j = 0; j<m-i; j += 1)
        {
            s += a[i+j][j];
        }
        cout << s << " ";
    }
    for(int j = 1; j<m; j += 1)
    {
        int s = 0;
        for(int i = 0; i<m-j; i += 1)
        {
            s += a[i][j+i];
        }
        cout << s << " ";
    }
}
