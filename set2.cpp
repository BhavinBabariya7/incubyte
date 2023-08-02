#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveForward(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                
                break;
            case 'S':
                break;
            case 'E':
                break;
            case 'W':
                break;
            case 'U':
                break;
            case 'D':
                break;
        }
}
void moveUp(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                
                break;
            case 'S':
                break;
            case 'E':
                break;
            case 'W':
                break;
            case 'U':
                break;
            case 'D':
                break;
        }
}
void moveRight(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                direction = 'E';
                break;
            case 'S':
                direction = 'E';
                break;
            case 'E':
                direction = 'N';
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
void moveLeft(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                direction = 'W';
                break;
            case 'S':
                direction = 'W';
                break;
            case 'E':
                direction = 'S';
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
void moveBackward(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                arr[1]--;
                break;
            case 'S':
                arr[1]--;
                break;
            case 'E':
                arr[1]--;
                break;
            case 'W':
                arr[1]--;
                break;
            case 'U':
                arr[2]--;
                break;
            case 'D':
                arr[2]--;
                break;
        }
}

void moveForward(char arr[],int &coOrdinates[],char direction) {
    switch(direction) {
            case 'N':
                arr[1]++;
                break;
            case 'S':
                arr[1]++;
                break;
            case 'E':
                arr[1]++;
                break;
            case 'W':
                arr[1]++;
                break;
            case 'U':
                arr[2]++;
                break;
            case 'D':
                arr[2]++;
                break;
        }
}

void calculateCoordinate(char arr[],int &coOrdinates[],char direction) {
    for(char a : arr ) {
        char ch;
        switch(ch) {
            case 'f':
                moveForward(arr,coOrdinates,direction);
                break;
            case 'b':
                moveBackward(arr,coOrdinates,direction);
                break;
            case 'l':
                moveLeft(arr,coOrdinates,direction);
                break;
            case 'r':
                moveRight(arr,coOrdinates,direction);
                break;
            case 'u':
                moveUp(arr,coOrdinates,direction);
                break;
            case 'd':
                break;
        }

    }
}

int main() {
    int coOrdinates[] = {0,0,0}; 
    char direction = "N";
    char arr[] = {'f','b'};
    calculateCoordinate(arr,coOrdinates,direction);

    //print answer

    return 0;
}
