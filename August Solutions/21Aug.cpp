int Count(vector<vector<int> >& matrix) {
        // All the allowed directions
        int dx[] = {1, -1, 0, 0, -1, 1, -1, 1};
        int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
        
        int m = matrix.size(), n = matrix[0].size();
        int a = 0;
        
        // i -> keeps track of rows
        for(int i = 0; i < m; i++) {
            // j -> keeps track of columns
            for(int j = 0; j < n; j++) {
                // if curr element is 1, then I need to check all allowed directions
                if(matrix[i][j] == 1) {
                    int cnt = 0;
                    // Move in all the directions and keep count of the 0's encountered.
                    for(int k = 0; k < 8; k++) {
                        int newx=i+dx[k];
                        int newy=j+dy[k];
                        
                        // Check if coordinates are valid, for boundary cases
                        if(newx >= 0 and newy >= 0 and newx < m and newy < n and matrix[newx][newy] == 0)
                            cnt++;
                    }
                    
                    // If encountered 0's are even, add 1 to the answer
                    if(cnt > 0 and cnt%2 == 0)
                        a++;
                }
            }
        }
        
        return a;
    }