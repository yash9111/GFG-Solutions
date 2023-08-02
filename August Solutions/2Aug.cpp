class Solution {
  public:
      int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
       if(X==0&&Y==0){
           if(A[0][0]==1){
               return 0;
           }
           else{
               return -1;
           }
       }
       int ans= INT_MAX;
       // creating the queue for the storing the distance and the row and coloum
       queue<pair<int, pair<int, int>>>q;
       vector<vector<int>>visited(N,vector<int>(M,0));
       q.push({0,{0,0}});
       visited[0][0]=true;
       while(!q.empty()){
           pair<int , pair<int, int>>front = q.front();
           q.pop();
           int dist = front.first;
           int row = front.second.first;
           int col = front.second.second;
           if(row == X && col == Y){
               ans = min(ans, dist);
           }
           // top 
            if(row-1>=0&&A[row-1][col]==1&&!visited[row-1][col]){
                visited[row-1][col]=true;
                q.push({dist+1,{row-1 ,col}});
            }
           // down 
            if(row+1<N&&A[row+1][col]==1&&!visited[row+1][col]){
                  visited[row+1][col]=true;
                q.push({dist+1,{row+1 ,col}});
            }
             // left 
            if(col-1>=0&&A[row][col-1]==1&&!visited[row][col-1]){
                  visited[row][col-1]=true;
                q.push({dist+1,{row ,col-1}});
            }
              // right
            if(col+1<M&&A[row][col+1]==1&&!visited[row][col+1]){
                  visited[row][col+1]=true;
                q.push({dist+1,{row ,col+1}});
            }
       }
            return ans==INT_MAX?-1:ans;

}
};