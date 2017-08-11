vector<int> Solution::prevSmaller(vector<int> &v) {
     stack<int > st;
            int n=v.size();
        int     i=n-1;
            vector<int > res(n,0);
            while(i>=0){
                if(st.empty()||v[i]>=v[st.top()]){
                    st.push(i);i--;
                }
                else{
                    res[st.top()]=v[i];
                    st.pop();
                    
                }
            }
            while(!st.empty()){
                res[st.top()]=-1;
                st.pop();
            }
  return res;
}
