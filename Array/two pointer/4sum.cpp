class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i]
                                  + nums[j]
                                  + nums[left]
                                  + nums[right];

                    if (sum == target) {
                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });
                        while (left < right &&
                               nums[left] == nums[left + 1])
                            left++;

                        while (left < right &&
                               nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};

// time complexity O(n^3)
// space complexity O(1) (excluding the output array)   

input: nums = [1,0,-1,0,-2,2], target = 0
output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]