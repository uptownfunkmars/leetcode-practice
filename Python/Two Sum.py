class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        rtype = []
        dict = {}
        for i in range(len(nums)):
            dict[nums[i]] = i
        
        for i in range(len(nums)):
            if target-nums[i] in dict:
                if dict[target-nums[i]] != i:
                    return [i, dict[target-nums[i]]]
            
        
