class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxV = 0
        l = 0
        r = len(height)-1        
        while(r-l>0):
            maxV = max(maxV, (r-l)*min(height[r],height[l]))
            if height[r]<height[l]:
                r-=1
            else:
                l+=1
        return maxV
