#include <stdio.h>
 
int main()
{
  char a;
  for (a = 1; a <=26; a++)
  {
    printf("=");
  }
  printf("\n");
  printf("=    Segitiga Berundak   =");
  printf("\n");
  for (a = 1; a <=26; a++)
  {
    printf("=");
  }
  
  printf("\n");
  printf("\n");

  int i,j,k,l;
  int p=1;
  
  printf("Masukkan tinggi segitiga : ");
  scanf("%d",&p);
    for(i=1;i<=p; i++)
    {
        for (l=0;l<=p;l++)
        {
            for (j=i;j<=p;j++)
            {
                printf(" ");   
            }
            for (k=1;k<=i-l;k++)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    } 
}
