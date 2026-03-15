1class Solution {
2public:
3    bool isSafe(int row,int col,vector<int> &rowHash,vector<int> &firstHash,vector<int> &secondHash,int n){
4        if(rowHash[row]==1||firstHash[row+col]==1||secondHash[n+row-col-1]==1)
5            return false;
6        return true;
7    }
8    void nqueens(int col,vector<vector<string>> &mat,vector<int> &rowHash,vector<int> &firstHash,vector<int> &secondHash,int n,vector<string> board){
9        if(col==n){
10        mat.push_back(board);
11            return ;
12        }
13        for(int row=0;row<n;row++){
14            if(isSafe(row,col,rowHash,firstHash,secondHash,n)){
15                board[row][col]='Q';
16                rowHash[row]=1;
17                firstHash[row+col]=1;
18                secondHash[n+row-col-1]=1;
19                nqueens(col+1,mat,rowHash,firstHash,secondHash,n,board);
20                rowHash[row]=0;
21                firstHash[row+col]=0;
22                secondHash[n+row-col-1]=0;
23                board[row][col]='.';
24        }
25    }
26    }
27    vector<vector<string>> solveNQueens(int n) {
28        vector<vector<string>> mat;
29        int col=n;
30        vector<string> board(n);
31        string s(n,'.');
32        for(int i=0;i<n;i++){
33        board[i]=s;     
34        }
35        vector<int> row(n,0);
36        vector<int> firstHash(2*n-1,0);
37        vector<int> secondHash(2*n-1,0);
38        nqueens(0,mat,row,firstHash,secondHash,n,board);
39        return mat;
40        
41    }
42};