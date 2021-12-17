#include<stdio.h>
void gameon()
{

    int i,num=rand(),comp=1,guess,count=0;

    printf("\n\nYou can win this game if you choose the correct number.\nYou 'll get hits to find out the desired number.\n");
    printf("\nGuess the desired number=>>\t");

    scanf("%d",&guess);
    do
    {
        if(num==guess)
        {
            comp=0;
        }
        else if(guess<num)
        {
            comp=1;
            printf("Your guess is lower than the number\n");
            count++;
        }
        else
        {
            comp=1;
            printf("Your guess is greater than the number\n");
            count++;
        }
        if(comp==1)
        {
            printf("It's wrong number! Try once more\n");
            scanf("%d",&guess);
        }
    }
    while(comp);
    printf("Congratulations! You guessed the correct number %d\n",num);
    printf("Total number of trails you attempted for guessing is: %d\n",count);
    printf("\nTHANK YOU SO MUCH\n");


    int select1;
    printf("\n\n\n\t\t\t1.Play again ");
    printf("\n\t\t\t2.Exit\n");
    printf("\n\n\n\t\t\tPress any key=>> ");
    scanf("%d", &select1);
    switch (select1)
    {
    case 1:
        gameon();
        break;
    case 2:
        break;
    default:
        printf("\n\n\n\t\t\tDUDE IT'S WRONG CHOICE !!! Try again...\n(Press 1 to start playing)");
    }


}

void welcome(char *words)
{
    system("cls");
    printf("\n");
    printf("\n\t\t\t...............................................");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t--                                           --");
    printf("\n\t\t\t--         ||| Guessing Game |||             --");
    printf("\n\t\t\t--                                           --");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t...............................................");
    printf("\n\t\t\t\t\t%s", words);
    printf("\n\t\t\t-----------------------------------------------\n");
}

void  devlopedby()
{
    welcome("   Devloper");
    printf("\n\n\n");
    printf("\n\t\t\t...............................................");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t--                                           --");
    printf("\n\t\t\t--      ||| Md. Mehedi Hasan Naim |||        --");
    printf("\n\t\t\t--                                           --");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t...............................................");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();

}
void opening()
{
    int select;
    welcome("Be Intelligent");
    printf("\n\n\n\t\t\t1.Start ");
    printf("\n\t\t\t2.Devloped by");
    printf("\n\t\t\t0.Exit");
    printf("\n\n\n\t\t\tEnter choice(Press 1 to play this game) =>> ");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        gameon();
        break;
    case 2:
        devlopedby();
        break;
    case 0:
        exit(1);
        break;
    default:
        printf("\n\n\n\t\t\tDUDE IT'S WRONG CHOICE !!! Try again...\n(Press 1 to start playing)");
    }
}

void main()
{
    while (1)
    {
        opening();
    }
}







