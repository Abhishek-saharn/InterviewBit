string Solution::reverseString(string A) {
   stack<char> st;
   string res="";
   for(int i=0;i<A.length();i++){
       st.push(A[i]);
   }
   while(!st.empty()){
       
       res=res+st.top();
       st.pop();
       
   }
   return res;
}
