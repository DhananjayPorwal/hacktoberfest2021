//LCS of three strings
//GFG ACCEPTED
//427. Dynamic Programming


#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}


//Extending LCS to 3 dimensions
int LCSof3 (string A, string B, string C, int m, int n, int p)
{
    int dp[m+1][n+1][p+1];
    
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            for(int k=0; k<=p; k++)
            {
                if(i==0 || j==0 || k==0)
                {
                    dp[i][j][k] = 0;
                }
                else if(A[i-1] == B[j-1] && B[j-1] == C[k-1])
                {
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                }
                else 
                {
                    dp[i][j][k] = max( dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
                }
            }
        }
    }
    
    return dp[m][n][p];
}