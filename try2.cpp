#include <stdio.h> 
int main() 
{
  
    int a, b,i,j,k; 
    a = 5; // Number of processes 
    b = 3; // Number of resources 
    int allocated[5][3] = { { 1, 1, 0 }, // P0 
                        { 0, 2, 0 }, // P1 
                        { 1, 0, 3 }, // P2 
                        { 2, 3, 1 }, // P3 
                        { 4, 0, 0 } }; // P4 
  
    int maximum[5][3] = { { 5, 7, 3 }, // P0   
                      { 3, 4, 4 }, // P1 
                      { 9, 3, 3 }, // P2 
                      { 2, 7, 2 }, // P3 
                      { 4, 3, 5 } }; // P4 
  
    int available[3] = { 2, 3, 2 };
    int f[a], answer[a], index = 0; 
    for (k = 0; k < a; k++) { 
        f[k] = 0; 
    } 
    int need[a][b]; 
    for (i = 0; i < a; i++) { 
        for (j = 0; j < b; j++) 
            need[i][j] = maximum[i][j] - allocated[i][j]; 
    }
}
