
class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        stack<char> v;
        for(int i=0;i<s.length();i++){
            if(v.empty()) v.push(s[i]);
            else if(v.top() ==s[i]) v.pop();
            else v.push(s[i]); }
        while(!v.empty()){
            result.push_back(v.top());
            v.pop(); }
        reverse(result.begin(), result.end());
        return result; }
};
