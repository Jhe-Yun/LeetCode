#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    void bubbleSort(vector<int> &nums)
    {
        for (int i = nums.size() - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }

    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        bubbleSort(nums3);

        if (nums3.size() % 2 != 0)
        {
            return nums3[nums3.size() / 2];
        }
        else
        {
            int index = nums3.size() / 2;
            double value = (nums3[index - 1] + nums3[index]) / 2.0;
            return value;
        }
    }
};

int main()
{
    return 0;
}