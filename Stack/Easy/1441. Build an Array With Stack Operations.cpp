
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> v;
        int i=0, j=1;
        while(i<target.size()){
            if(j==target[i]){
                v.push_back("Push");
                j++;
                i++; }
            else{
               v.push_back("Push");
               v.push_back("Pop");
               j++; } }
        return v; }
};
