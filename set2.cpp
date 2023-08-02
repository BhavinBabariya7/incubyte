#include<iostream>
using namespace std;

void moveDown(char arr[], int coOrdinates[], char &direction) {
    direction = 'D';
}

void moveUp(char arr[], int coOrdinates[], char &direction) {
    direction = 'U';
}

void moveRight(char arr[], int coOrdinates[], char &direction) {
    switch (direction) {
    case 'N':
        direction = 'E';
        break;
    case 'S':
        direction = 'W';
        break;
    case 'E':
        direction = 'S';
        break;
    case 'W':
        direction = 'N';
        break;
    case 'U':
        direction = 'E';
        break;
    case 'D':
        direction = 'E';
        break;
    }
}

void moveLeft(char arr[], int coOrdinates[], char &direction) {
    switch (direction) {
    case 'N':
        direction = 'W';
        break;
    case 'S':
        direction = 'E';
        break;
    case 'E':
        direction = 'N';
        break;
    case 'W':
        direction = 'S';
        break;
    case 'U':
        direction = 'W';
        break;
    case 'D':
        direction = 'W';
        break;
    }
}

void moveBackward(char arr[], int coOrdinates[], char direction) {
    switch (direction) {
    case 'N':
        coOrdinates[1]--;
        break;
    case 'S':
        coOrdinates[1]++;
        break;
    case 'E':
        coOrdinates[0]++;
        break;
    case 'W':
        coOrdinates[0]--;
        break;
    case 'U':
        coOrdinates[2]--;
        break;
    case 'D':
        coOrdinates[2]++;
        break;
    }
}

void moveForward(char arr[], int coOrdinates[], char direction) {
    switch (direction) {
    case 'N':
        coOrdinates[1]++;
        break;
    case 'S':
        coOrdinates[1]--;
        break;
    case 'E':
        coOrdinates[0]--;
        break;
    case 'W':
        coOrdinates[0]++;
        break;
    case 'U':
        coOrdinates[2]++;
        break;
    case 'D':
        coOrdinates[2]--;
        break;
    }
}

void calculateCoordinate(char arr[], int coOrdinates[], char &direction) {
    for (int i = 0; i < 5; i++) {
        char ch = arr[i];
        switch (ch) {
        case 'f':
            moveForward(arr, coOrdinates, direction);
            break;
        case 'b':
            moveBackward(arr, coOrdinates, direction);
            break;
        case 'l':
            moveLeft(arr, coOrdinates, direction);
            break;
        case 'r':
            moveRight(arr, coOrdinates, direction);
            break;
        case 'u':
            moveUp(arr, coOrdinates, direction);
            break;
        case 'd':
            moveDown(arr, coOrdinates, direction);
            break;
        }
    }
}

int main() {
    int coOrdinates[] = { 0, 0, 0 };
    char direction = 'N';
    char arr[] = { 'f', 'r', 'u', 'b', 'l' };
    calculateCoordinate(arr, coOrdinates, direction);

    //print answer
    cout << "Co-ordinates : ";
    for (int i = 0; i < 3; i++) {
        cout << " " << coOrdinates[i];
    }
    cout << " Direction : " << direction << endl;
    return 0;
}
