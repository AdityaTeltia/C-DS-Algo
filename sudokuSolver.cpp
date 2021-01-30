#include<bits/stdc++.h>
using namespace std;

bool canPlace(int mat[][9],int i,int j,int n,int number){
    //In rows and column checking to place possible number
    for(int row=0;row<n;row++){
        if(mat[row][j]==number || mat[i][row]==number){
            return false;
        }
    }
    //Check Subgrid
    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (j/rn)*rn;

    for(int m = sx ;m<sx+rn;m++){
        for(int n = sy;n<sy+rn;n++){
            if(mat[m][n]==number){
                return false;
            }
        }
    }
    return true;
}


bool solveSudoku(int mat[][9],int i,int j,int n){
    //Base Case
    if(i==n){
        //Print Matrix
        for(int k =0;k<n;k++){
            for(int l=0;l<n;l++){
                cout<<mat[k][l]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //Some Cases to be taken care of
    //When we reach the point after last column we take the j pointer back to zero
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }
    //If the current cell is not empty we continue to the next cell
    if(mat[i][j] != 0){
        return solveSudoku(mat,i,j+1,n);
    }
    //Recursive case
    for(int number = 1;number<=9;number++){
        if(canPlace(mat,i,j,n,number)){
            mat[i][j] = number;
            bool canSolveSudoku = solveSudoku(mat,i,j+1,n);
            if(canSolveSudoku){
                return true;
            }
        }
    }
    mat[i][j] = 0;
    return false;
}

int main(){

    int mat[9][9] =
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    solveSudoku(mat,0,0,9);

}
