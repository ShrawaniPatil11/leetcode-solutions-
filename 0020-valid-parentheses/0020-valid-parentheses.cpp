class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stk;
        
        for (char c : s) {
            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } 
            // If it's a closing bracket, check for a valid match
            else {
                // If the stack is empty, there's no matching opening bracket
                if (stk.empty()) return false;
                
                char top = stk.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    stk.pop(); // Found a match, remove the opening bracket
                } else {
                    return false; // Mismatched bracket type
                }
            }
        }
        
        // If the stack is empty, all brackets were properly matched and closed
        return stk.empty();
    }
};