#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        int x = 0, y = 0;
        sort(a, a + n);
        string s = "";
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i].second >= y && a[i].first >= x)
            {
                for (int j = 0; j < a[i].first - x; j++)
                    s += 'R';
                for (int j = 0; j < a[i].second - y; j++)
                    s += 'U';
                x = a[i].first;
                y = a[i].second;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}
   			  	  	 	  		 	  			 		  	