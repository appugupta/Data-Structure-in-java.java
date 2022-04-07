

  #include <stdio.h>

  int rows, columns;
  void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10]) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++)
                {
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
        return;
  }

  int main() {
        int matrix1[10][10], matrix2[10][10];
        int matrix3[10][10], i, j;

       printf("Enter the no of rows and columns(<=10):");
        scanf("%d%d", &rows, &columns);

        if (rows > 10 || columns > 10) {
                printf("No of rows/columns is greater than 10\n");
                return 0;
       
        }

       
        printf("Enter the input for first matrix:");
        for (i = 0; i < rows; i++)
               { 
                for (j = 0; j < columns; j++) {
                  scanf("%d", &matrix1[i][j]);
                }
        }

        
        printf("Enter the input for second matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        scanf("%d", &matrix2[i][j]);
                }
        }

     
        matrixAddition(matrix1, matrix2, matrix3);

       
        printf("\nResult of Matrix Addition:\n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        printf("%5d", matrix3[i][j]);
                }
                printf("\n");
        }
        return 0;
  }