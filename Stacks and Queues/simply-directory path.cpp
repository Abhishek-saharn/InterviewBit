#include <sstream>
string Solution::simplifyPath(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   string res, tmp;
    vector<string> stk;
    stringstream ss(A);
    while(getline(ss,tmp,'/')) {            // here getline() is working as a split function in c++. 
        if (tmp == "" or tmp == ".") continue;
        if (tmp == ".." && !stk.empty()) stk.pop_back();
        else if (tmp != "..") stk.push_back(tmp);
    }
    for(auto str : stk) res += "/"+str;
    return res.empty() ? "/" : res;
}
