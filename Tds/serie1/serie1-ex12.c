#include <stdio.h>

int main() {
    int n,i,j;
    
    printf("entrez la taille : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
          if(i==0||i==n-1||j==0||j==n-1)
          printf(" *");
          else {
		    if(i==j||i==n-j)
            printf(" +");
            else {
			 if(i==n/2) 
			  printf(" |");
			 else {
			  if(j==n/2)
			   printf(" -");
              else
               printf("  ");}}}
        }
        printf("\n");
        }

    return 0;
}
