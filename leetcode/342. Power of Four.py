#https://leetcode.com/problems/power-of-four/
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        for i in range(100000):
            if 4**i == n or n == 1:
                return True
            if 4**i > n:
                break    
        return False    
