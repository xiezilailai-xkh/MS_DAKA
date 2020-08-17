class Solution {
public:
    int dfs(vector<string>& board,int p){
        if(board[0]=="   "&&board[1]=="   "&&board[2]=="   ")return true;
        int cnt = 0;
        int x = 0;
        int o = 0;
        int flag = 0;
        for(string s: board){
            if(s == "OOO"||s=="XXX")flag++;
            for(int i = 0; i < 3; i++){
                if(s[i]=='X')x++;
                if(s[i]=='O')o++;
            }
        }
        if(o > x||abs(o-x)>1)return false;
        for(int j = 0; j < 3; j++){
            string s;
            for(int i = 0; i < 3; i++){
                s += board[i][j];
            }
            if(s == "OOO"||s=="XXX")flag++;
        }
        if(board[0][0]!=' '&&board[0][0]==board[1][1]&&board[0][0]==board[2][2])flag++;
        if(board[0][2]!=' '&&board[0][2]==board[1][1]&&board[0][2]==board[2][0])flag++;
        char c;
        if(o==x)c='O';
        else c='X';
        if(p!=0&&flag>0)return false;
        bool ff = false;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(board[i][j]==c){
                    board[i][j] = ' ';
                    if(dfs(board,p+1))ff = true;
                    board[i][j] = c;
                }
                
            }
        }
        return ff;
    }
    bool validTicTacToe(vector<string>& board) {
        return dfs(board, 0);
    }
};