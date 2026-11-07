bool isValidSudoku(List<List<String>> board){
            List<List<bool>> row = List.generate(9, (_) => List.filled(9,false));
            List<List<bool>> col = List.generate(9, (_) => List.filled(9,false));
            List<List<bool>> Box = List.generate(9, (_) => List.filled(9,false));
      for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                  if(board[i][j] != '.'){
                        int num = board[i][j].codeUnitAt(0) - '1'.codeUnitAt(0);
                          int bos = (i ~/ 3) * 3 +(j ~/ 3) ;
                        if(row[i][num] || col[j][num] || Box[bos][num]){
                              return false ;
                        }
                        row[i][num]  = true ;
                        col[j][num]  = true ;
                        Box[bos][num] = true ;
      }
            }
      }
      return  true ;
}
void main() {
    //                                             0
                                //    0   1   2   3   4   5   6   7   8
       List<List<String>> board =    [[".",".",".",".","5",".",".","1","."],
                                    [".","4",".","3",".",".",".",".","."],
                                    [".",".",".",".",".","3",".",".","1"],
                                    ["8",".",".",".",".",".",".","2","."],
                                    [".",".","2",".","7",".",".",".","."],
                                    [".","1","5",".",".",".",".",".","."],
                                    [".",".",".",".",".","2",".",".","."],
                                    [".","2",".","9",".",".",".",".","."],
                                    [".",".","4",".",".",".",".",".","."]];
      print(isValidSudoku(board));
                  
      
}
