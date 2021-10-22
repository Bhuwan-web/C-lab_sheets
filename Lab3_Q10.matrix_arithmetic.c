#include<stdio.h>
void showMatrix(int m,int n,int matrix[m][n]);
void sum_matrix(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]);
void diff_matrix(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]);
void matrix_multiplication(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]);


int main(){
    int m1row,m1col,m2row,m2col;
    printf("Enter the size of first matrix \
    \nRows(m): ");
    scanf("%d",&m1row);
    printf("Columns(n): ");
    scanf("%d",&m1col);
    int matrix1[m1row][m1col];


    printf("Enter the size of second matrix \
    \nRows(m): ");
    scanf("%d",&m2row);
    printf("Columns(n): ");
    scanf("%d",&m2col);
    int matrix2[m2row][m2col];


    printf("For 1st matrix: ");
    for(int row=0;row<m1row;row++){
        printf("\n");
        for(int column=0;column<m1col;column++){
            scanf("%d",&matrix1[row][column]);
        }
    }
    printf("\n\n");
    printf("For 2nd matrix: ");
    for(int row=0;row<m1row;row++){
        printf("\n");
        for(int column=0;column<m1col;column++){
            scanf("%d",&matrix2[row][column]);
        }
    }

    printf("\n\n");

    printf("The sum of two matricecs are :");
    sum_matrix(m1row,m1col,m2row,m2col,matrix1,matrix2);
    printf("The difference of two matrices are: ");
    diff_matrix(m1row,m1col,m2row,m2col,matrix1,matrix2);
    printf("The matrix multiplication : ");
    matrix_multiplication(m1row,m1col,m2row,m2col,matrix1,matrix2);
}


void showMatrix(int m,int n,int matrix[m][n]){
        for(int row=0;row<m;row++){
        printf("\n");
        for(int column=0;column<n;column++){
            printf("%d\t",matrix[row][column]);
        }
    }
    printf("\n");
}
void sum_matrix(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]){
    if(m1row == m2row && m2row == m2col)
    {
    int m=m1row;
    int n=m1col;
    int sumMatrix[m][n];
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            sumMatrix[row][column]=m1[row][column]+m2[row][column];
        }
    }
    showMatrix(m,n,sumMatrix);
    }
}
void diff_matrix(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]){
    if(m1row == m2row && m2row == m2col)
    {
    int m=m1row;
    int n=m1col;
    int diffMatrix[m][n];
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            diffMatrix[row][column]=m1[row][column]-m2[row][column];
        }
    }
    showMatrix(m,n,diffMatrix);
    }
}
void matrix_multiplication(int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]){
    if(m1col==m2row){
        int m=m1row,n=m2col;
        int muxMatrix[m1row][m2col];
        for(int row=0;row<m1row;row++){
            for(int column=0;column<m1col;column++){
                int sums=0;
                for(int val=0;val<m1col;val++){
                    sums+=m1[row][val]*m2[val][column];
                }
                muxMatrix[row][column]=sums;
            }
        }
        showMatrix(m,n,muxMatrix);
    } 
}



