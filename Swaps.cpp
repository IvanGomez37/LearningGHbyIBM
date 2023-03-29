#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n), p(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
        p[v[i]] = i;
    }

    

    int r = 0;
    for(int i = 0; i < n-1; ++i)
    {
        if(v[i] != i)
        {
            int aux = p[i], aux2 = v[i];

            swap(v[i], v[p[i]]);

            p[i] = i;
            p[aux2] = aux;

            r++;
        }
    }

    cout << r << endl;

    return 0;
}