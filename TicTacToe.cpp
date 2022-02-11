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

char *fillarr(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = '-';
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

void PlaceMarker(Position p, char marker) {
    arr[p.row][p.col] = marker;
}

Position GetPlayerChoice(){
    std::string pos;
    Position pos_;
    std::string pos2;
    std::cout << "Enter a row coordinate (between 0-2): " << std::endl;
    std::cin >> pos;
    std::cout << "Enter a column coordinate (between 0-2): " << std::endl;
    std::cin >> pos2;
    int p1 = std::stoi(pos);
    int p2 = std::stoi(pos2);
    pos_.col = p2;
    pos_.row = p1;
    return pos_;
}

int main(){
    fillarr();
    for(int i = 0; i < 9; i++) {
        DisplayBoard();
        Position p = GetPlayerChoice();
        if(i % 2 == 0) {
            PlaceMarker(p, 'X');
        } else {
            PlaceMarker(p, 'O');
        }
    }
    DisplayBoard();
    return 0;
}