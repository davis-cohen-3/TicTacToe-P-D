#include <iostream>
#include <vector>

char arr[3][3];

struct Position {
	int row;
	int col;

	Position() {
		row = 0;
		col = 0;
	}

	Position(int r, int c) {
		row = r; 
		col = c;
	}

	// already implemented for you!
	bool operator==(const Position &other) {
		return row == other.row && col == other.col;
	}
};

void DisplayBoard() {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

void fillarr(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = '-';
        }
    }
}

void PlaceMarker(Position p, char marker) {
    arr[p.row][p.col] = marker;
}

int main(){
    fillarr();
    DisplayBoard();
    return 0;
}