//https://leetcode.com/problems/fruits-into-baskets-ii/
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        for(auto &i :fruits){
            for(int j = 0 ;j < baskets.size();j++){
                if(i <= baskets[j]){
                    baskets[j] = -1;
                    count++;break;
                }
            }
        }
        return fruits.size()- count;
        
    }
};
