/********************************************************

Dry Run :

S = "(()())(())"

			1. S[i] = "("  , flag = 1, result = "";
			2. S[i] = "("  , flag = 2, result = "(";
			3. S[i] = ")"  , flag = 1, result = "()";
			4. S[i] = "("  , flag = 2, result = "()(";
			5. S[i] = ")"  , flag = 1, result = "()()";
			6. S[i] = ")"  , flag = 0, result = "()()";
			7. S[i] = "("  , flag = 1, result = "()()";
			8. S[i] = "("  , flag = 2, result = "()()(";
			9. S[i] = ")"  , flag = 1, result = "()()()";
			10. S[i] = ")"  , flag = 0, result = "()()()";

			result = "()()()";
			return result;

*********************************************************/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int flag = 0;
        string result;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '('){
                flag += 1;
                result += flag > 1 ? "(" : ""; }
            else {
                flag -= 1;
                result += flag > 0 ? ")" : ""; } }
        return result;
    }
};
