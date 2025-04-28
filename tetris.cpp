#include <iostream>
#include <vector>

int main() {
  bool playBoard[20][10];

  bool gameOver = false;

  /*while(!gameOver) {*/
    for (int i = 0; i < 20; i++) {
      std::cout << "<!";
      for (int j = 0; j < 10; j++) {
        switch (playBoard[i][j]){
          case true:
            std::cout << "[]";
            break;
          case false:
            std::cout << " .";
            break;
        }
      }
      std::cout << "!>";
      std::cout << "\n";
    }

    std::cout << "<!";
    for (int i = 0; i < 10; i++) {
      std::cout << "==";
    }
    std::cout << "!>\n";

    std::cout << "  ";
    for (int i = 0; i < 10; i++) {
      std::cout << "\\/";
    }
  /*}*/

  return 0;
}


/*

<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                S_Tetronimo:   [][]
<! . . . . . . . . . .!>                             [][]
<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                I_Tetronimo: [][][][]
<! . . . . . . . . . .!>                
<! . . . . . . . . . .!>                
<! . . . . . . . . . .!>                J_Tetronimo: []
<! . . . . . . . . . .!>                             [][][]
<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                L_Tetronimo:     []
<! . . . . . . . . . .!>                             [][][]
<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                O_Tetronimo: [][]
<! . . . . . . . . . .!>                             [][]
<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                T_Tetronimo: [][][]
<! . . . . . . . . . .!>                               []
<! . . . . . . . . . .!>
<! . . . . . . . . . .!>                Z_Tetronimo: [][]
<!====================!>                               [][]
  \/\/\/\/\/\/\/\/\/\/

*/