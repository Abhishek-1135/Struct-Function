#include <stdio.h>

int main() {
    
    int a,b,choice;

    printf("enter two number :");
    scanf("%d" "%d" , &a,&b );

    printf("\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
    printf("enter your choice :");
    scanf("%d" , &choice);

    switch (choice) {

        case 1:
        printf("result : %d" , a+b);
        break;

        case 2:
        printf("result : %d"  , a-b);
        break;

        case 3:
        printf("result : %d" , a*b);
        break;

        case 4:

            if(b!=0)                        // in division denominator = 0 is not defined
            printf("result : %d" , a/b ); 

            else
            printf("division by 0 is not allowed");
            break;

        default:
        printf("invalid choice");
        
        
    }

    return 0;
}
