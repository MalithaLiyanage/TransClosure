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

int nextIsEmpty()
{
    int m;
    
    for (m = 0; m < 7; m++)
    {
        if (next[m] > 0)
        {
            return 0;
        }
        
       
    }
    
    return 1;
}

int main()
{
    //printf("HI\n");
    
    int startCount = 1;
    int vertexCount = 0;
    
    while(startCount != 8)
    {
        
        
        // printf("%d\n",startCount);

        // printf("Go1");
        
        next[nextIndex] = startCount;
        nextIndex++;
        
        //findNeighbours(4);
        
        
        // int j;
        
        // for (j = 0; j < 7; j++)
        // {
        //     printf("%d\n",visited[j]);
        // }
        // printf("%d\n", count);
    
    
    
        while (nextIndex < 9)
        {
            //printf("Go2");
            findNeighbours(next[0]);
            visited[visitIndex] = next[0];
            visitIndex++;
            
            int j;
            
            // for (j = 0; j < 9; j++)
            // {
            //     printf("%d",next[j]);
            // }
            // printf("\n");
            
            int n;
            
            for (n = 1; n < 9; n++)
            {
                //printf("Go3");
                findNeighbours(next[n]);
                visited[visitIndex] = next[n];
                visitIndex++;
            }
            
            
            
        }
        
        int j;
        
        // for (j = 0; j < 9; j++)
        // {
        //     printf("%d",visited[j]);
        // }
        // printf("\n");
        
        // for (j = 0; j < 9; j++)
        // {
        //     printf("%d",next[j]);
        // }
        // printf("\n");
        
        int z;
        
        for (z = 1; z < 9; z++)
        {
            if (visited[z] != 0)
            {
                transClosure[startCount-1][visited[z]-1] = 1; 
            }
            
        }
        
        transClosure[startCount-1][startCount-1] = 1;
        
        startCount ++;
        
        visitIndex = 0;
        nextIndex = 0;
        
        
        
        for (j = 0; j < 9; j++)
        {
            visited[j] = 0;
        }
        //printf("\n");
        
        for (j = 0; j < 9; j++)
        {
            next[j] = 0;
        }
        //printf("\n");
    }
    
    int u;
    int t;
    
    
    for (u = 0; u < 7; u++)
    {
        for (t = 0; t < 7; t++)
        {
            printf("%d",transClosure[u][t]);
        }
        printf("\n");
    }
        

    return 0;
}


