class Solution{
    
    static int getRow(int num) {
        return num / 9;    
    }
    
    static int getCol(int num) {
        return num % 9;
    }
    
    static int getGrpRow(int row) {
        return row / 3;
    }
    
    static int getGrpCol(int col) {
        return col / 3;
    }
    
    static boolean solve(int pos, int arr[][], Set<Integer> group[][], Set<Integer> row[], Set<Integer> col[]) {
        if(pos == 81) return true;
        
        int r = getRow(pos), c = getCol(pos);
        
        if(arr[r][c] != 0) return solve(pos+1, arr, group, row, col);
        int gr = getGrpRow(r), gc = getGrpCol(c);
        
        for(int put=1;put<10;++put){
            if(!row[r].contains(put) && !col[c].contains(put) && !group[gr][gc].contains(put)) {
                row[r].add(put);
                col[c].add(put);
                group[gr][gc].add(put);
                boolean ans = solve(pos+1, arr, group, row, col);
                row[r].remove(put);
                col[c].remove(put);
                group[gr][gc].remove(put);
                if(ans == true) {
                    arr[r][c] = put;
                    return true;
                }
            }
        }
        
        return false;
    }
    static boolean SolveSudoku(int grid[][]){
        Set<Integer> group[][] = new Set[3][3];
        Set<Integer> row[] = new Set[9];
        Set<Integer> col[] = new Set[9];
        
        for(int i=0;i<group.length;++i){
           for(int j=0;j<group[0].length;++j) group[i][j] = new HashSet<Integer>();
        }
        
        for(int i=0;i<row.length;++i) row[i] = new HashSet<Integer>();
        for(int i=0;i<col.length;++i) col[i] = new HashSet<Integer>(); 
        
        for(int i=0;i<grid.length;++i){
            for(int j=0;j<grid[0].length;++j){
                if(grid[i][j] == 0) continue;
                group[i/3][j/3].add(grid[i][j]);
                row[i].add(grid[i][j]);
                col[j].add(grid[i][j]);
            }
        }
        
        boolean ans = solve(0, grid, group, row, col);
        
        if(ans){
            return true;
        }
        else{
            return false;
        }
    }
    
    static void printGrid (int grid[][]){
        for(int i=0;i<grid.length;++i){
            for(int j=0;j<grid[0].length;++j){
                System.out.print(grid[i][j]+" ");
            }
        }
    }
}