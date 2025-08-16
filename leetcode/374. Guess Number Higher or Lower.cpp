//https://leetcode.com/problems/guess-number-higher-or-lower/
// intractive problem
class Solution {
public:
    int guessNumber(int num) 
    {
        int n = num;
        while(true)
        {
            n /=2;
            int h = guess(n);
            if( h == 0){return n;}
            else if(h == 1){n++;}
            else {n--;}
            
        }
        
    }
};
