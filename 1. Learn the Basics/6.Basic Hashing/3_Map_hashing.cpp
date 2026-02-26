#include<bits/stdc++.h>
using namespace std;
 
// HASHING USING MAP TO USE LESS SPACE

int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :  ";
    //also can pre store them here 

    //unordered_map<int, int> m; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // m[arr[i]]++;
    }

    // PREPROCESSING

    // first preference should be unordered map for less tc like it gives avg and best tc O(1) worst (rare) O(n) for storing and fetching

    unordered_map<int, int> m;  
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    int q;
    cout << "Enter no. of queries : ";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // FETCHING
        cout << number << " appears : " << m[number] << " times " << endl;
    };
    return 0;
}


/* ⏱ Time Complexity
Step	                         Best / Average	          Worst (rare hash collision)
Build frequency map(n inserts)	    O(n)	                      O(n²)
Each query lookup	                O(1)	                      O(n)
q queries total	                    O(q)	                      O(n × q)
-----------------------------------------------------------------------------------------
Overall	                            O(n + q)	                  O(n + n × q)


💾 Space Complexity

unordered_map stores up to n key–value pairs → O(n) extra space.

Input array itself → O(n), but usually we count only the extra space → O(n).

*/