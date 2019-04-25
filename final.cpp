#include <stdio.h>
int main()
{
	int a,b,raw=0,i,j,k;
	b=3;
	printf("\t\t\t\t\t\t\t\t\t\t#############################################################################\n");
	printf("Ener number of processes:: ");
	scanf("%d",&a);
	printf("\t\t\t\t\t\t\t\t\t\t#############################################################################\n");
	int allocated[a][b];
	printf("Enter amount of allocated resource for each Process::\n");
	int c=a;
	for(a=0;a<=c-1;a++)
	{
		for(b=0;b<=2;b++)
		{
			scanf("%d",&allocated[a][b]);
		}
	}
	printf("\t\t\t\t\t\t\t\t\t\t#############################################################################\n");
	int maximum[a][b];
	printf("Enter maximum amount of each process that can be allocated::\n");
	for(a=0;a<=c-1;a++)
	{
		for(b=0;b<=2;b++)
		{
			scanf("%d",&maximum[a][b]);
		}
	}
	printf("\t\t\t\t\t\t\t\t\t\t#############################################################################\n");
	int available[3];
	printf("Enter available amount for each process::\n");
	for(int p=0;p<=2;p++)
	{
		scanf("%d",&available[p]);
	}
    int f[a], answer[a], index = 0; 
    for (k = 0; k < a; k++) { 
        f[k] = 0; 
    } 
    int need[a][b]; 
    for (i = 0; i < a; i++) { 
        for (j = 0; j < b; j++) 
            need[i][j] = maximum[i][j] - allocated[i][j]; 
    }
    int y = 0; 
    for (k = 0; k < 5; k++) { 
        for (i = 0; i < a; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < b; j++) { 
                    if (need[i][j] > available[j]) 
                        flag = 1; 
                    break; 
                } 
  
                if (flag == 0) { 
                    answer[index++] = i; 
                    for (y = 0; y < b; y++) 
                        available[y] += allocated[i][y]; 
                    f[i] = 1; 
                } 
            } 
        } 
    } 
  printf("\t\t\t\t\t\t\t\t\t\t#############################################################################\n");
    printf("Sequence for Process execution is::\n"); 
    for (i = 0; i < a - 1; i++) 
        printf(" P%d ->", answer[i]); 
    printf(" P%d", answer[a - 1]); 
  
    return (0);
	
}
