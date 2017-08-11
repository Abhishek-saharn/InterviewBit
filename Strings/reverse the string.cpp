void Solution::reverseWords(string &s) {
   string res="";
   string word="";
   int n=s.size();
   int i=0;
   while(i<n){
       if(char(s[i])==' '&&word.empty()){
           i++;continue;
       }
       if(char(s[i])==' '&&!word.empty()){
           res=word+" "+res;
           word="";i++;continue;
       }
       if(char(s[i])!=' '){
           word=word+char(s[i]);
           i++;
           continue;
       }
   }
   if(!word.empty()){
       s=word+" "+res;
   }else{
       s=res;
   }
   s=s.substr(0,s.size()-1);
}
