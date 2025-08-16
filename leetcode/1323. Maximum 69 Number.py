#https://leetcode.com/problems/maximum-69-number/
class Solution:
    def maximum69Number (self, num: int) -> int:
        num = str(num).replace('6','9',1) 
        return int(num)        
        
