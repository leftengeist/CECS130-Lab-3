#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
This code is a multifunction calculator
Walton Levi
Section 1
*/
main()
{
    float fFirstNumber;
    float fSecondNumber;
    float fAnswer;

    int iMenuSelection;
    int iTestNumber;
    int iTestAnswer;
    int iModulusOne;
    int iModulusTwo;
    int iModulusAnswer;
    int iCheck;

    do
    {
        //Generate Menu
        printf("Calculator Menu:");
        printf("\n(1) Addition");
        printf("\n(2) Subtraction");
        printf("\n(3) Multiplication");
        printf("\n(4) Division");
        printf("\n(5) Modulus (integers only)");
        printf("\n(6) Test if Prime (integers only)");
        printf("\n(7) Exit");
        printf("\nPlease choose an operation: ");
        scanf("%d", &iMenuSelection);

        switch(iMenuSelection)
        {
        case 1:
            printf("Enter the First Number: ");
            scanf("%f", &fFirstNumber);
            printf("Enter the Second Number: ");
            scanf("%f", &fSecondNumber);
            fAnswer = fFirstNumber + fSecondNumber;
            printf("\n%.2f + %.2f = %.2f\n\n", fFirstNumber, fSecondNumber, fAnswer);
            break;


        case 2:
            printf("Enter the First Number: ");
            scanf("%f", &fFirstNumber);
            printf("Enter the Second Number: ");
            scanf("%f", &fSecondNumber);
            fAnswer = fFirstNumber - fSecondNumber;
            printf("\n%.2f - %.2f = %.2f\n\n", fFirstNumber, fSecondNumber, fAnswer);
            break;


        case 3:
            printf("Enter the First Number: ");
            scanf("%f", &fFirstNumber);
            printf("Enter the Second Number: ");
            scanf("%f", &fSecondNumber);
            fAnswer = fFirstNumber * fSecondNumber;
            printf("\n%.2f * %.2f = %.2f\n\n", fFirstNumber, fSecondNumber, fAnswer);
            break;

        case 4:
            printf("Enter the First Number: ");
            scanf("%f", &fFirstNumber);
            printf("Enter the Second Number: ");
            scanf("%f", &fSecondNumber);
            fAnswer = fFirstNumber / fSecondNumber;
            printf("\n%.2f / %.2f = %.2f\n\n", fFirstNumber, fSecondNumber, fAnswer);
            break;

        case 5:
            printf("Enter the First Number: ");
            scanf("%d", &iModulusOne);
            printf("Enter the Second Number: ");
            scanf("%d", &iModulusTwo);
            iModulusAnswer = iModulusOne % iModulusTwo;
            printf("\nthe remainder of %d and %d is %d\n\n", iModulusOne, iModulusTwo, iModulusAnswer);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d",&iTestNumber);
            iTestAnswer=0;
            for(iCheck=2;iCheck <= iTestNumber/2;iCheck++)
                {
                    if(iTestNumber%iCheck == 0)
                    {
                        iTestAnswer=1;
                        break;
                    }
                }
                if(iTestAnswer==0)
                    printf("\nPrime Number\n\n");
                else
                    printf("\nNot Prime Number\n%d / %d\n\n", iTestNumber, iCheck);
                break;
        }
    }while(iMenuSelection != 7);
}
