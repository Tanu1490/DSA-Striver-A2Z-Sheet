#include <bits/stdc++.h>
using namespace std;

// CHARACTER HASHING

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    // PRE-STORING
    // use hash[256] when not exclusivily told about character like lower case (97-122)range
    // ascii total char = 256

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;

        // when 256 is used use hash[s[i]] as numbering will be same like a will be 97 and so on
    }

    int q;
    cout << "Enter no. of queries : ";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // FETCHING
        cout << c << " appears : " << hash[c - 'a'] << " times " << endl;
        // when 256 is used use hash[s[i]]
    };
    return 0;
}