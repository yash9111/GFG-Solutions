int isPalindrome(string s)
    {
        int i=0;
        int j=s.length()-1; // finding length of string
        if(j==0 || j==1){   // if the string length is 0 or 1 no need to check
            return 0;
        }
        for(; i<=j; i++,j--){
            if(s[i]!=s[j]){    // matching the elements of the string
                return 0;
            }
            else{
                continue;
            }
        }
        return 1;
    }