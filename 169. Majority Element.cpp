class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int index = -1;
        int ans = 0;
        int count = 0;

        if (nums.size() == 1 || nums.size() == 2) // for 1 or 2 element it's neccessory
            return nums[0];

        sort(nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); i++)
        {

            if (nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (count > ans)
            {
                ans = count;
                index = i;
            }
        }
        return nums[index];
    }
};

// Approach 1 by brute froce method has a drawback of Time Limit Exceeded
int index = -1;
int ans = 0;
for (int i = 0; i < nums.size(); i++)
{
    int count = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[i] == nums[j])
        {
            count++;
        }
    }
    if (count > ans)
    {
        ans = count;
        index = i;
    }
}

return nums[index];

// Approach 2 by sort all elemnet then store frequency in count
int majorityElement(vector<int> &nums)
{
    int index = -1;
    int ans = 0;
    int count = 0;

    if (nums.size() == 1 || nums.size() == 2) // for 1 or 2 element it's neccessory
        return nums[0];

    sort(nums.begin(), nums.end());
    for (int i = 1; i <= nums.size(); i++)
    {

        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count > ans)
        {
            ans = count;
            index = i;
        }
    }
    return nums[index];
}

// 3rd approach is by Hashing we can optimize
