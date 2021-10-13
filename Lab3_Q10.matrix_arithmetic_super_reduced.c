#include<stdio.h>
void showMatrix(int m,int n,int matrix[m][n]){
        for(int row=0;row<m;row++){
        printf("\n");
        for(int column=0;column<n;column++){
            printf("%d\t",matrix[row][column]);
        }
    }
    printf("\n");
}
void matrix(int func,int m1row,int m1col,int m2row,int m2col,int m1[m1row][m1col],int m2[m2row][m2col]){
    
    int m=m1row;
    int n=m2col;
    int Matrix[m][n];
    
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            if(m1row == m2row && m2row == m2col)
            {
            if(func==1){
                Matrix[row][column]=m1[row][column]+m2[row][column];
            }
            else if(func==2){
                Matrix[row][column]=m1[row][column]-m2[row][column];
            }
            else {
            }
            }
            if(func==3 && m1col==m2row){
                int sums=0;
                for(int val=0;val<m1col;val++){
                    sums+=m1[row][val]*m2[val][column];
                }
                Matrix[row][column]=sums;
            }
        }
        
    }
    showMatrix(m,n,Matrix);
}

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
    //Attention Please
    //  func value will determine if it will go for addition ,subtraction or multiplication
    //      1.Addition
    //      2.Subtraction
    //      3.Multiplication
    int func=0;

    printf("The sum of two matricecs are :");
    matrix(1,m1row,m1col,m2row,m2col,matrix1,matrix2);
    printf("The difference of two matrices are: ");
    matrix(2,m1row,m1col,m2row,m2col,matrix1,matrix2);
    printf("The matrix multiplication : ");
    matrix(3,m1row,m1col,m2row,m2col,matrix1,matrix2);
}
