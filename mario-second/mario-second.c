#include <csbootcamp.h>
#include <stdio.h>

int main(void)
{
    int i,j,n,c;
    //get input from the user
   n=get_int("Enter a valid value for SIZE:");
    while(n<1)
         {
          n=get_int("Enter a valid value for SIZE:");
         }

for(i=1;i<=n;i++)//this for is just counting lines
    {
    
           j=0;
     while(j<=n-i-1)//this while is printing the spaces
          {
           printf(" ");
           j++;
          }

     for(int k=0;k<n-j;k++)// after that the difference between "space" and absolute nothing will be filled by "#";
        {
         printf("#");
        }

    printf("  ");//printing the space between the 2 pyramids

     for(c=0;c<i;c++) //printing the second pyramid
        {
         printf("#");
        }

    
    printf("\n");
    }
}
