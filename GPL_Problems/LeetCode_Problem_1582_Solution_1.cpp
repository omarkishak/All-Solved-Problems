class Solution {
    public int numSpecial(int[][] mat) {
        int result = 0;

        int r = mat.length;
        int c = mat[0].length;

        int[] rows = new int[r];
        int[] columns = new int[c];

        // first, count how many 1s in each row and column O(m * n)
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (mat[i][j] == 1) {
                    rows[i]++;
                    columns[j]++;
                }
            }
        }

        /* loop over them again to judge if it's special position or not 
        O(m *n), results in complexity O(m * n) */
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (mat[i][j] == 1 && rows[i] == 1 && columns[j] == 1) {
                    result++;
                    
                    //save few operations if we find a special position.
                    break;
                }
            }
        }

        return result;
    }
}