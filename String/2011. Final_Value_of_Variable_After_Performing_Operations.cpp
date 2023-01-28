class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int op = 0 ; op< operations.size();op++){
            if(operations[op][1] == '+') ans++;
            else ans--;
        }
        return ans;
        
    }
};
