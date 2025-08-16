//https://leetcode.com/problems/first-bad-version/
// not the best solution 1312 ms
class Solution {
public:
    int firstBadVersion(int n) {
        while(true){
            if(isBadVersion(n)){n--;}else{return n+1;}
        }
    }
};

//better 2ms

class Solution {
public:
    int firstBadVersion(int n) {
        while(true){
            if(isBadVersion(n)){n /=2;}else{n++;}
            if(isBadVersion(n)&&!isBadVersion(n-1)){return n;}
        }
        
    }
};

