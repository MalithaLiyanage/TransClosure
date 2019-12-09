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




void findNeighbours(int x)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        if (adMatrix[x-1][i] == 1)
        {
            next[nextIndex] = i+1;
            nextIndex++;
            count++;
        }
        
        if (nextIndex >9)
        {
            return;
        }
        
        //printf("Next is %d\n", nextIndex);
    }
}

int main()
{
	
	return 0;
}