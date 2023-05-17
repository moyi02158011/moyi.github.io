#include <iostream>
#include <algorithm>
using namespace std;
int dp[1005][1005];
string s1, s2;
string a[1005], b[1005];
int n=0, m=0;
int main()
{
    cin >> s1 >> s2;
    int d1 = s1.length(), d2 = s2.length();
    for (int i = 0; i < d1;)
    {
        
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            a[n] += s1[i++];
            while (s1[i] >= 'a' && s1[i] <= 'z')
            {
                a[n] += s1[i++];
            }

        }
        n++;
    }
    for (int i = 0; i < d2;)
    {
       
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            b[m] += s2[i++];
            while (s2[i] >= 'a' && s2[i] <= 'z')
            {
                b[m] += s2[i++];
            }

        }
        m++;
    }   
     dp[0][0] = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {

            if (a[i] == b[j])
            {
                dp[i + 1][j + 1] = dp[i][j] + 1;

            }
            else
            {
                dp[i + 1][j + 1]=max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    cout << dp[n][m] << endl;
}
