
class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for(auto var:s) {
            if(var=='(' or var=='{' or var=='[') v.push(var); 
            else {
                if(v.empty() || (v.top()=='(' && var!=')') ||
                (v.top()=='{' && var!='}') || (v.top()=='['
                && var!=']')) return false;
                v.pop(); } }
        return v.empty(); }
};
