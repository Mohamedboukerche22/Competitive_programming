#https://leetcode.com/problems/add-binary/
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        s = int(a,2)
        s = s +  int(b,2)
        s = bin(s)
        return s[2:]

        
