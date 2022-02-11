#include <iostream>
#include <vector>

int arr[3][3];

int *fillarr(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = 0;
        }
    }
    return &arr[0][0];
}

void DisplayBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

int main(){
    int * arr = fillarr();
    DisplayBoard();
    return 0;
}