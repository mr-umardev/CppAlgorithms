//Test():num(8){}
//Operator Overloading: Develop a C++ program to create a class called MATRIX using a two-dimensional array of integers. Illustrate == operator overloading which checks the compatibility of two matrices M1 and M2 for addition and subtraction. Find the sum and difference of matrices by overloading the operators + and – respectively. Display the results (sum matrix M3 and difference matrix M4).

#include<bits/stdc++.h>
using namespace std;

class Matrix{
    int rows,columns;
    int mat[100][100];
public:
    Matrix(){
        cout<<"Enter the number of rows in your matrix\n";
        cin>>rows;
        cout<<"Enter number of columns in your matrix\n";
        cin>>columns;
    }
    Matrix(int r,int c){
        rows=r;
        columns=c;
    }
    void getMatrix(){
        cout<<"Enter your matrix elements\n";
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                cin>>mat[i][j];
            }
        }
    }

    void displayMatrix(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    Matrix operator+(Matrix &mat1){
        Matrix m(rows,columns);
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                m.mat[i][j]=mat[i][j]+mat1.mat[i][j];
            }
        }
        return m;
    }
    Matrix operator-(Matrix &mat1){
        Matrix m(rows,columns);
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                m.mat[i][j]=mat[i][j]-mat1.mat[i][j];
            }
        }
        return m;
    }
    bool operator==(Matrix &mat1){
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(mat[i][j]!=mat1.mat[i][j]) return false;
            }
        }
        return true;
    }
};

int main(){
    Matrix m1(3,3),m2(3,3),m3(3,3),m4(3,3);
    m1.getMatrix();
    m2.getMatrix();
    m1.displayMatrix();
    m2.displayMatrix();
    m3=m2+m1;
    m4=m1-m2;
    m3.displayMatrix();
    m4.displayMatrix();
    cout<<(m1==m2);
}


