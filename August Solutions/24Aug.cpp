string multiply(string &s1,int a){
        string ans;
        int carry=0;
        for(int i=s1.size()-1;i>=0;i--){
            int b=a*(s1[i]-'0')+carry;
            ans.push_back(b%10+'0');
            carry=b/10;
        }
        if(carry>0){
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    void sum(string &a, string &b){
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(j>=0){
            int t=(a[i]-'0')+(b[j]-'0')+carry;
            a[i]=t%10+'0';
            carry=t/10;
            j--;
            i--;
        }
        if(carry>0){
            a[i]=carry+'0';
        }
        return;
    }
    string multiplyStrings(string s1, string s2) {
       //Your code here
       string ans(2001,'0');
       int neg=0;
       if(s1[0]=='-' and s2[0]!='-'){
           s1.erase(0,1);
           neg=1;
       }else if(s2[0]=='-' and s1[0]!='-'){
           s2.erase(0,1);
           neg=1;
       }else if(s2[0]=='-' and s1[0]=='-'){
           s2.erase(0,1);
           s1.erase(0,1);
       }
       for(int i=s2.size()-1;i>=0;i--){
           string temp=multiply(s1,s2[i]-'0');
           for(int j=0;j<s2.size()-1-i;j++){
               temp.push_back('0');
           }
           sum(ans,temp);
       }
       reverse(ans.begin(),ans.end());
       int i=ans.size()-1;
       while(ans[i]=='0'){
           ans.pop_back();
           i--;
       }
       if(neg==1){
           ans.push_back('-');
       }
        reverse(ans.begin(),ans.end());
       return ans;
    }