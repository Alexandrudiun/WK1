#include <csbootcamp.h>
#include <stdio.h>

int main(void)
{
long int n = get_long("nr\n");
long int ncpy = n;
int i, j, k, suma1=0, suma2=0, ultima_cifra_2,ultima_cifra_a_lui_n,impartitor=1;
bool ok =false;

//Find the lenght of n

i=0;
while(n){
        i++;
       n=n/10;
      
}

int numar_cifre_card=i;

//restore n's value
n=ncpy;

//validation algorithm
        for(i=0;i<numar_cifre_card;i++)
        {ultima_cifra_2=0;    
        
            ultima_cifra_a_lui_n=n%10;  //the last digit of n
            if(i%2==0)
            { 
                suma1=suma1+ultima_cifra_a_lui_n;  //make a sum of the digits which are not underlined;
         
            }
            else                    //this else calculates the sum of the underlined digits;
            {int produs=(n%10)*2;
                
                if(produs>=10)         //verify if the multiplied character is a two digit number;
                {
                    while(produs)        //if it is then it makes the sum of the two digits;
                    { 
                        ultima_cifra_2=ultima_cifra_2+(produs%10);
                        produs=produs/10;           
                    }
                    
                }
                else
                {//if the doubeld digit is not grater than 10 then it keeps it;
                    ultima_cifra_2=produs;
                    
                }

                //after that it calculates the sum of the underlined digits;
                suma2=suma2+ultima_cifra_2;
            }
            n=n/10; //going to the next digit of n by deleting the last one;
           
        }
    
int suma = suma1+suma2; //making the final sum


// -------------For debuging pourpouses----------

//print("\n");
// printf("%i\n",suma);
// printf("%i\n",numar_cifre_card);
//printf("\n");
//-----------------------------------------------


//testing if the card was valid
if (suma%10==0)
{
    ok=true;
}
else
{
    ok=false;
}

if(ok)
{
    //if the number is valid then we build a huge number that will help us to find the first digit of the card
for(i=0;i<numar_cifre_card-1;i++)
    {
        impartitor=impartitor*10;
    }
//we test if the special conditions of other cards are meet and then we print the output
    if(numar_cifre_card==13)
    {
        printf("VISA\n");
    }else if (numar_cifre_card==15)
    {
        printf("AMERICAN\n");
    }else if (numar_cifre_card==16)
    {
        if(ncpy/impartitor==4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("MASTER CARD\n"); //for master card i did not find a special condition that differeciate very much from the other brands so i leave it as it is
                                    // for better accuracy we sholud a more strictly algorithm that will cover all casese;
        }
    }
    
    

}

else
{
printf("INVALID\n");
}



}