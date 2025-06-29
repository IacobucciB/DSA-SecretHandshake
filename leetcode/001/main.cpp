#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target) {
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
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = sol.twoSum(nums, target);
    cout << res[0] << ", "<< res[1] << endl;
    return 0;
}
