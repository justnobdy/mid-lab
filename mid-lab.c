#include <stdio.h>
#include <stdlib.h>

int main()
{




    char color[20];
    char plol[20];
    char celebrtiyF[30];
    char celebrtiyL[30];



    printf("enter a color : ");
    scanf("%s," ,&color);

    printf("enter a plol : ");
    scanf("%s," ,&plol);

    printf("enter a celebrity : ");
    scanf("%s,%s" ,&celebrtiyF , &celebrtiyL);




    printf("roses are %s\n", color );
    printf("%s %s are blue\n" ,plol );
    printf("i love %s %s\n" ,celebrtiyF,celebrtiyL );




    return 0;
}
