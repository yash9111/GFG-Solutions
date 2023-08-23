bool solve(vector<vector<char>> &grid, int r, int c, string word, int index, int delr, int delc) {

        if(index == word.size()-1){

            return true;

        } 

        int nr = r + delr;

        int nc = c + delc;

        int n = grid.size(), m = grid[0].size();

        

        if(nr >= 0 and nr < n and nc >= 0 and nc < m and grid[nr][nc] == word[index+1]) {

            return solve(grid, nr, nc, word, index+1, delr, delc);

        }

        else return false;

        

    }

    

 vector<vector<int>>searchWord(vector<vector<char>>grid, string word){

     // Code here

     vector<vector<int>> ans;

     int n = grid.size();

     int m = grid[0].size();

     

     for(int i = 0; i < n; ++i) {

         for(int j = 0; j < m; ++j) {

             if(grid[i][j] == word[0]) {

                 bool found = false;

                 for(int delr = -1; delr <= 1; ++delr) {

                     for(int delc = -1; delc <= 1; ++delc) {

                         if(delr == 0 and delc == 0) continue;

                         if(solve(grid, i, j, word, 0, delr, delc)) {

                             ans.push_back({i, j});

                             found = true;

                         }

                         if(found) break;

                     }

                     if(found) break;

                 }

             }

         }

     }

     return ans;

 }