#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];

            if (hash.find(temp) != hash.end()) {
                return {hash[temp], i};
            }

            hash[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No two numbers found." << endl;
    }

    return 0;
}

//Example
// nums =[2,7,11,15]
// target =9
// output=[0,1]
//Time Complexity O(n)
//space Complexity O(n)