#include "stdc++.h"

using namespace std;

int main()
{
    int n, LOC;
    cout << "Enter number of elements to input in array :-";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter array elements :- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int target;

    cout << "Enter target element to find in array :-";
    cin >> target;

    // Binary serach

    int BEG = 0;
    int END = n - 1;

    int MID = (BEG + END) / 2;

    while (BEG <= END && vec[MID] != target)
    {
        if (target < vec[MID])
        {
            END = MID - 1;
        }
        else
        {
            BEG = MID + 1;
        }
        MID = (BEG + END) / 2;
    }

    if (vec[MID] == target)
    {
        LOC = MID+1;
        cout << "Target element is found at position" << LOC ;
    }else{
        cout << "Target element is not present in our array";
    }
}