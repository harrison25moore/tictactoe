#include <iostream>
using namespace std;
using std::cout;
using std:: cin;
bool gameDone;
int num = 0;
int board[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
char board2[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int squaresPlayed[9] = {-1,-1,-1,-1,-1,-1,-1,-1, -1};



void newGame(){
    

}
void Draw(int squareNum, char userTurn){
    int count = 0;
    int count2 = 0;
    
    
    for(int i = 0; i < 3; i++){
        count = 0;
        count2++;
        for(int j = 0; j < 3; j++){
            count++;
            
            
            if(squareNum == board[i][j]){
                
                board2[i][j] = userTurn;
                
            }
            
           

            if(count == 3 && count2 != 3){

                printf(" %c | %c | %c\n", board2[i][j-2], board2[i][j-1], board2[i][j]);
                printf("___|___|___\n");
                
                
            }
            else if(count == 3 && count2 == 3){
                printf(" %c | %c | %c\n", board2[i][j-2], board2[i][j-1], board2[i][j]);
                printf("   |   |   \n");
            }
                
             

            

        
        }
    }

    
    
    

   

}

void input(){
    char letter;
    int arrayhold;
    int x;
    
    if(num % 2 == 0){
        cout << "X's enter a number as shown!\n";            
        letter = 'X';
        arrayhold = 1;
    }
    else{
        cout << "O's enter a number as shown!\n";
        letter = 'O';
        arrayhold = 2;
    }
    
    
    
    

    cout << " 1 | 2 | 3 \n";
    cout << "___|___|___\n";
    cout << " 4 | 5 | 6 \n";
    cout << "___|___|___\n";
    cout << " 7 | 8 | 9 \n";
    cout << "   |   |   \n";


    
    


    cin>>x;
    if(squaresPlayed[x -1] != -1){
        cout << x +" Has already been played!\n";
        input();
        
    }
    else{
        squaresPlayed[x-1] = arrayhold;
        Draw(x, letter);
    }
    

}

void logic(){
    char letter2;


    if(num % 2 == 0){
        cout << "X's enter a number as shown!\n";            
        letter2 = 'X';
        
    }
    else{
        cout << "O's enter a number as shown!\n";
        letter2 = 'O';
        
    }


    if(squaresPlayed[0] == squaresPlayed[1] && squaresPlayed[0] == squaresPlayed[2] && squaresPlayed[0] != -1){

        gameDone = true;
        printf("%c 's win! 1", letter2);
    
    }
    else if(squaresPlayed[3] == squaresPlayed[4] && squaresPlayed[3] == squaresPlayed[5] && squaresPlayed[3] != -1){

        gameDone = true;
        
        printf("%c 's win! 2", letter2);
    
    }
    else if(squaresPlayed[6] == squaresPlayed[7] && squaresPlayed[6] == squaresPlayed[8] && squaresPlayed[6] != -1){

        gameDone = true;
        printf("%c 's win! 3", letter2);
    }
    else if(squaresPlayed[0] == squaresPlayed[3] && squaresPlayed[0] == squaresPlayed[6] && squaresPlayed[0] != -1){
    
        gameDone = true;
        printf("%c 's win! 4", letter2);
    
    }
    else if(squaresPlayed[1] == squaresPlayed[4] && squaresPlayed[1] == squaresPlayed[7] && squaresPlayed[1] != -1){
    
        gameDone = true;
        printf("%c 's win! 5", letter2);
    
    }
    else if(squaresPlayed[2] == squaresPlayed[4] && squaresPlayed[2] == squaresPlayed[8] && squaresPlayed[2] != -1){

        gameDone = true;
       printf("%c 's win! 6", letter2);
    
    }
    else if(squaresPlayed[0] == squaresPlayed[4] && squaresPlayed[0] == squaresPlayed[8] && squaresPlayed[0] != -1){

        gameDone = true;
        printf("%c 's win! 7", letter2);
    
    }
    else if(squaresPlayed[2] == squaresPlayed[4] && squaresPlayed[2] == squaresPlayed[6] && squaresPlayed[6] != -1){

        gameDone = true;
        printf("%c 's win! 8", letter2);
    
    }
}
int main(){
    char yesOrNo = 'y';
    
    newGame();
    while(yesOrNo == 'y' || yesOrNo == 'Y'){
        while(gameDone == false){
        
        
            input();
            logic();
            num++;
            if(num == 9){
            gameDone = true;
        }
        printf("num = %d\n", num);
        }
        if(gameDone == true){
        cout << "Play Again? enter Y to play again or N to exit\n";
        cin>> yesOrNo;
        
        }
    

    }
}