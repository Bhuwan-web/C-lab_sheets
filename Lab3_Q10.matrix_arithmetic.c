#include<stdio.h>
void sum_matrix(int m1[3][3],int m2[3][3]){
    int sumMatrix[3][3];
    for(int row=0;row<3;row++){
        for(int column=0;column<3;column++){
            sumMatrix[row][column]=m1[row][column]+m2[row][column];
        }
    }
    for(int row=0;row<3;row++){
        printf("\n");
        for(int column=0;column<3;column++){
            printf("%d\t",sumMatrix[row][column]);
        }
    }
    printf("\n");

    
}
void diff_matrix(int m1[3][3],int m2[3][3]){
    int sumMatrix[3][3];
    for(int row=0;row<3;row++){
        for(int column=0;column<3;column++){
            sumMatrix[row][column]=m1[row][column]-m2[row][column];
        }
    }
    for(int row=0;row<3;row++){
        printf("\n");
        for(int column=0;column<3;column++){
            printf("%d\t",sumMatrix[row][column]);
        }
    }
    printf("\n");
    
}

int main(){
    int m,n;
    printf("Enter the size of matrix \
    \nRows(m): ");
    scanf("%d",&m);
    printf("Columns(n): ");
    scanf("%d",&n);
    int matrix1[m][n];
    int matrix2[m][n];
    printf("For 1st matrix: ");
    for(int row=0;row<m;row++){
        printf("\n");
        for(int column=0;column<n;column++){
            scanf("%d",&matrix1[row][column]);
        }
    }
    printf("\n\n");
    printf("For 2nd matrix: ");
    for(int row=0;row<m;row++){
        printf("\n");
        for(int column=0;column<n;column++){
            scanf("%d",&matrix2[row][column]);
        }
    }
    printf("\n\n");
    for(int row=0;row<3;row++){
        printf("\n");
        for(int column=0;column<3;column++){
            printf("%d\t",matrix1[row][column]);
        }
    }
    printf("\n\n");
    for(int row=0;row<3;row++){
        printf("\n");
        for(int column=0;column<3;column++){
            printf("%d\t",matrix2[row][column]);
        }
    }
    printf("\n\n");

    printf("The sum of two matricecs are :");
    sum_matrix(matrix1,matrix2);
    printf("The difference of two matrices are: ");
    diff_matrix(matrix1,matrix2);
}
