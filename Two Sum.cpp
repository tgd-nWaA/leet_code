#include <vector>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        std::vector<int> res;
        for (size_t i = 0; i < nums.size(); i++)
        {
            for (size_t j = 0; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    if (i != j)
                    {
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }
        }
        return res;
    }
};