class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //创建一个二维数组
        vector<vector<int>> matrix = vector(n, vector<int>(n,0));
        //创建每一次赋给数组元素的值
        int val = 1;
        //数组的行列起始index
        int startI = 0;
        int startJ = 0;
        //根据不同的圈，需要减去的会变化的值
        int offset = 1;
        int loop = n/2;
        int i,j;
        
        while(loop != 0){
            i = startI;
            j = startJ;

            //赋值给第0行的每一列，所以for循环里面是j
            for(j = startJ; j < n - offset; j++ ){
                matrix[i][j] = val++;
            }
            //赋值给第j列的每一行，所以for循环里面是i
            for(i = startI; i < n - offset; i++ ){
                matrix[i][j] = val++;
            }
            //赋值给第i行的每一列，所以for循环里面是j，这回往回走，要变成减法了
            for( j = j; j > startJ; j-- ){
                matrix[i][j] = val++;
            }
            //赋值给第j列的每一行，所以for循环里面是i
            for(i = i; i > startI; i-- ){
                matrix[i][j] = val++;
            }
            startI++;
            startJ++;
            offset++;
            loop--;

        }
        if(n%2 == 1){
            matrix[n/2][n/2] = n*n;
        }
        return matrix;

    }
};
