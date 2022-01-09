#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1,2,1,-4};
    int target=1;

    sort(arr.begin(), arr.end());

    int closestSum = INT_MAX;
    for (int i = 0; i < arr.size()-2; i++) {
        int j = i+1, k = arr.size()-1;
        while (j<k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum==target) cout << sum << endl;
            if (abs(target - sum) < abs(target - closestSum)) closestSum = sum;
            if (sum > target) k--;
            else j++;
        }
    }
    cout << closestSum << endl;

    return 0;
}