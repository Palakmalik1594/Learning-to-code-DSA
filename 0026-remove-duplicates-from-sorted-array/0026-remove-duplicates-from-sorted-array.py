class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        s=set()
        n= len(nums)
        for i in range(0,n):
            s.add(nums[i])
        m=len(s)
        unique = sorted(s)   
        nums[:] = unique  
        return m
        