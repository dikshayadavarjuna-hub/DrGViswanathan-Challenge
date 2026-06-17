class Solution {
public:
    bool isPalindrome(int x) {
        string old = to_string(x);
        reverse(old.begin(),old.end());
        string neww = old;
        reverse(old.begin(),old.end());
        
        if(old==neww){
            return true;
        }
        else{
            return false;
        }
    }
};