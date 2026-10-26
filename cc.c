#include<stdio.h>
int main ()
{
    // Switch variable 
    int var = 3;

    // Switch statement
    switch (var)
    {
    case 1:
        printf("Case 1 is matched.");
        break;
    
    case 2:
    printf("case 2 is matched.");
        break;
    case 3:
    printf("casse 3 is matched.");
        break;
     default :
        printf("Default case is matched.");
        break;
    }
    return 0;

}