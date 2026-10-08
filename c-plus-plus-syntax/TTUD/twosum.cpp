#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums;
    int target;
    unordered_map<int, int> unMap;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
        unMap.insert({x, i});
    }

    cin >> target;

    for (int i = 0; i < n; i++)
    {
        int value = target - nums[i];

        if (unMap.find(value) != unMap.end())
        {
            cout << i << " " << unMap[value];
            return 0;
        }

    }

    return 0;
}
