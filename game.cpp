#include <iostream>
#include <cstdlib>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;

enum eDirection{
    STOP = 0,
    LEFT,
    UP,
    RIGHT,
    DOWN
};

eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("clear");
    for (int i = 0; i < width + 1; i++) {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1) {
                cout << "#";
            }

            if (i == y && j == x) {
                cout << "0";
            } else if(i == fruitY && j == fruitX) {
                cout << "F";
            } else {
                cout << " ";   
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 1; i++) {
        cout << "#";
    }
    cout << endl;
}

void Input() {

}

void Logic() {

}

int main () {
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
    }
    return 0;
}