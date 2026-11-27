class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(original.length != m*n)
        {
            return new int[0][0];
        }
        int result[][] = new int[m][n];
        int k = 0;
        for(int iRow = 0; iRow < m; iRow++)
        {
            for(int iCol = 0; iCol < n; iCol++)
            {
                result[iRow][iCol] = original[k];
                k++;
            }
        }
        return result;
    }
}