class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        idx = [0, 0, len(nums)-1]
        while idx[1] <= idx[2]:
            if nums[idx[1]] == 0:
                nums[idx[0]], nums[idx[1]] = nums[idx[1]], nums[idx[0]]
                idx[0] += 1
            if nums[idx[1]] == 2:
                nums[idx[2]], nums[idx[1]] = nums[idx[1]], nums[idx[2]]
                idx[2] -= 1
            else:
                idx[1] += 1
        
