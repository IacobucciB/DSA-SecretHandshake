#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> nums, int target) {
	int i, j;
	for (i = 0; i < nums.size(); ++i) {
	    for (j = i + 1; j < nums.size(); ++j) {
		if (nums[i] + nums[j] == target) {
		    return {i, j};
		}
	    }
	}
	return {};
    }
};

int main(void)
{
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> res = sol.twoSum(nums, target);
    std::cout << res[0] << ", "<< res[1] << std::endl;
    return 0;
}
