#include <stdio.h>

int visited[9];
int next[9];

int visitIndex = 0;
int nextIndex = 0;

int adMatrix[7][7] = {
    {0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0}
}; 

int transClosure[7][7];

int count = 0;