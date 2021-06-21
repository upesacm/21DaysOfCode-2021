class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> sStack;
        for(auto s : S){
            if(s != '#'){
                sStack.push(s);
            } else if (!sStack.empty()){
                cout << sStack.top();
                sStack.pop();
            }
        }
        
        stack<char> tStack;
        for(auto t : T){
            if(t != '#'){
                tStack.push(t);
            } else if (!tStack.empty()){
                tStack.pop();
            }
        }
        while(!sStack.empty()){
            char ch = sStack.top();
            if(tStack.empty() || tStack.top() != ch ){
                return false;
            }
            sStack.pop();
            tStack.pop();
        }
        return sStack.empty() && tStack.empty();   
    }
};