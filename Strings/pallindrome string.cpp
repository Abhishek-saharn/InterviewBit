https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string s) {
    
    	int n=s.length();
    	if(n==1) return 1;
    	if(n==0) return 0;
	int i=0,j=n-1;
	while(i<j){
		if(!((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))){
			i++;
		}
		else if(!((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)||(s[j]>=48&&s[j]<=57))){
			j--;
		}
		else if((toupper(s[i])==toupper(s[j]))){
			i++;j--;
		}
		else{
			
			return 0;
		}
	}
    return 1;
  
}
