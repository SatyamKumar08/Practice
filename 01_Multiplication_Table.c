// Multiplication Table


#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("\n*****Multiplication Table for a given number*****\n");
    int num;                    // local variable for user multiplication table
    char d;                     // local variable for switch case

    while(1){
        printf("\nEnter 's' to start multiplication table.\nEnter 'c' to close multiplication table.\n");
        scanf("%c",&d);        // user input to start table

        switch(d){             
            case 's':
                printf("Enter your number for multiplication: ");
                scanf("%d",&num);
                
                for(int i = 1; i <= 10; i++){
                    printf("%d X %d  = %d\n", num, i, num * i);
                }
                break;

            case 'c':
                exit(0);
        }

    }

    return 0;
}