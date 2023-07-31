//C++ code

 char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n = S.length();
       map<char,int>mpp;
       for(int i = 0; i< n; i++){
          mpp[S[i]]++;
       }
       for(auto it: S){
           if(mpp[it] == 1){
               return it;
           }
       }
       
       return '$';
    
    }