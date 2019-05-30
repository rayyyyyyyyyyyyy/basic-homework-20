#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{
   char brand[16],type[10];

   int year,price;
}; 

int main(void)

{
    int i;

    struct phone p[5]={  

    "APPLE", "Xs Max " ,2018, 40000,  

    "APPLE", "Xs     " ,2018, 36000,  

    "APPLE", "XR     " ,2018, 27000,

    "APPLE", "i8 plus" , 2018, 25500,

    "APPLE", "i8     " ,2018, 21500,

	};

    
    for (i=0; i<5; i++) 

    {
        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);
    }

    system("pause"); 

    return 0;

}
