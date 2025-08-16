#https://leetcode.com/problems/power-of-three/
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        for i in range(100000):
            if 2**i == n or n == 1:
                return True
            if 2**i > n:
                break    
        return False    
