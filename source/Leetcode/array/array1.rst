Array 1
=========

from: https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/21/


C++ Source Code
----------------

.. code:: cpp


    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
    
            int length = nums.size();
            if (length == 0) {
                return 0;
            }
            int pre = nums[0];
            for (int i = 1 ;i < length; i ++) {
                if (pre == nums[i]) {
                    nums.erase(nums.begin() + i);
                    # cout << i << ' ' << nums[i];
                    i --;
                    length --;
                } 
                else {
                    pre = nums[i];
                }
            }
            return nums.size();
        }
    };


Python Source Code
-------------------

.. code:: python

    class Solution:
        def removeDuplicates(self, nums):
            """
            :type nums: List[int]
            :rtype: int
            """
            if len(nums) == 0:
                return 0
            pre = nums[0]

            for i in nums[1:]:
                if i == pre:
                    nums.remove(i)
                else:
                    pre = i
            return len(nums)
