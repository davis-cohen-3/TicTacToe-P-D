#include <iostream>
#include <vector>

int *fillarr(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = 0;
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    return &arr[0][0];
}


int main(){
    int * arr = fillarr();
    return 0;
}