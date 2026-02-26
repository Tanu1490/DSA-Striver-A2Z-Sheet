#include <bits/stdc++.h>
using namespace std;

// FIND THE HIGHEST & LOWEST FREQUENCY ELEMENT

void withoutMap(int arr[], int n)
{
    vector<bool> visited(n, false);

    int maxfreq = 0, minfreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }

            if (count > maxfreq)
            {
                maxfreq = count;
                maxEle = arr[i];
            }
            
             if (count < minfreq)
            {
                minfreq = count;
                minEle = arr[i];
            }

        }
    }

    cout << "Highest Freq. no : " << maxEle << " Lowest Freq. no: " << minEle;
}

void withMap(int arr[], int n)
{

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    int maxfreq = 0, minfreq = n;
    int maxEle = 0, minEle = 0;
    for (auto it : m)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxfreq)
        {
            maxfreq = count;
            maxEle = element;
        }
        if (count < minfreq)
        {
            minfreq = count;
            minEle = element;
        }
    }

    cout << "Biggest : " << maxEle << " Lowest: " << minEle;
}
int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    withoutMap(arr, n);
    // withMap(arr, n);
    return 0;
}
