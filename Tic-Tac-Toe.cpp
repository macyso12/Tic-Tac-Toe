// Tic-Tac-Toe

#include <iostream>
using namespace std;

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
int n;
void Draw(){
    cout << "Tic Tac Toe v1.0" << endl ;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j] << " " ;
        }
        cout << endl ;
    }
}

void Input(){
    int a;
    cout << "it's " << player << " turn. " << "Press the number of the field you want: " ;
    cin >> a;
    
    if (a == 1){
        if (matrix[0][0] == '1'){
            matrix[0][0] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 2){
        if (matrix[0][1] == '2'){
            matrix[0][1] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 3){
        if (matrix[0][2] == '3'){
            matrix[0][2] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 4){
        if (matrix[1][0] == '4'){
            matrix[1][0] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 5){
        if (matrix[1][1] == '5'){
            matrix[1][1] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 6){
        if (matrix[1][2] == '6'){
            matrix[1][2] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 7){
        if (matrix[2][0] == '7'){
            matrix[2][0] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 8){
        if (matrix[2][1] == '8'){
            matrix[2][1] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
    else if (a == 9){
        if (matrix[2][2] == '9'){
            matrix[2][2] = player ;
        }
        else {
            cout << "Field is already in used, Try Again" << endl;
            Input();
        }
    }
}
void toggleplayer(){
    if (player == 'x'){
        player ='0';
    }
    else{
        player = 'x' ;
    }
}

char Win(){
    
    //first player
    if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x'){
        return 'x' ;
    }
    if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x'){
        return 'x' ;
    }
    if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x'){
        return 'x' ;
    }
    if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x'){
        return 'x' ;
    }
    if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x'){
        return 'x' ;
    }
    if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x'){
        return 'x' ;
    }
    if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x'){
        return 'x' ;
    }
    if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x'){
        return 'x' ;
    }

    // second player
     if (matrix[0][0] == 'o' && matrix[0][1] == 'o' && matrix[0][2] == 'o'){
         return 'o' ;
     }
     if (matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o'){
         return 'o' ;
     }
     if (matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o'){
         return 'o' ;
     }
     if (matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o'){
         return 'o' ;
     }
     if (matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o'){
         return 'o' ;
     }
     if (matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o'){
         return 'o' ;
     }
     if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o'){
         return 'o' ;
     }
     if (matrix[0][2] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o'){
         return 'o' ;
     }
    
    return '/';
}

int main() {
    
    n = 0;
    Draw ();
    //system ("pause");
    while (1){
        n++;
        Input();
        Draw();
        if (Win() == 'x'){
            cout << "x wins!"<< endl ;
            break;
        }
        else if (Win() == 'o'){
            cout << "o wins!" << endl ;
            break ;
        }
        else if (Win() == '/' && n == 9){
            cout << "It's a draw!" << endl ;
            break ;
        }
        toggleplayer();
    }
    
    return 0;
}
