#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int copy = n;
    int sum = 0;
    int cnt=(int)(log10(n)+1);
    while (n > 0)
    {
        int ld = n % 10;
        sum += pow(ld,cnt);
        n = n / 10;
    }
    if (sum == copy)
        cout << "It is armstong number." << endl;
    else
        cout << "It is not armstong number." << endl;
    return 0;
}