#include<stdio.h>
void gameon()
{
    system("cls");
    printf("\t\t\t\t||Welcome to Squid Game. So, play this game carefully||\n\n");
    printf("\t\t\t  If still you want to play this game press any key to continue=>> ");
    getch();
    printf("\n\n\t\t\t\t\t\t|||LEVEL 1|||\n\n");
    int i,d,e=0,guess,count=0;

    for(i=0; i<5; i++)
    {

        int a=rand(),b=rand();
        int c=a+b;
        printf("\n\n\n\t\t\t\t\t\t %d + %d= ",a,b);

        scanf("%d",&d);

        if(c==d)
        {
            e++;
            printf("\t\t\t\t\t\t Your Answer is Correct!!");
        }
        else printf("\t\t\t\t\t\t Wrong Answer\n");
    }
    printf("\n\t\t\t\t\t  Your score is %d out of 100\n",e*20);

    if(e>=3)
    {
        printf("\t\t\t\tCongratulations!!You are eligable to go to level 2\n");


        printf("Enter any key =>>\n");
        getch();
        system("cls");
        printf("\n\n\t\t\t\t\t\t|||LEVEL 2|||\n\n");
        int j,D,E=0;

        for(j=0; j<5; j++)
        {
            int A=rand(),B=rand();
            int C=A-B;
            printf("\n\n\n\t\t\t\t\t\t%d - %d= ",A,B);

            scanf("%d",&D);

            if(C==D)
            {
                E++;
                printf("\t\t\t\t\t\t Your Answer is Correct!!\n");
            }
            else printf("\t\t\t\t\t\t Wrong Answer\n");
        }
        if(E>=3)
        {
            printf("\t\t\t\tCongratulations!!You are eligable to go to level 3\n");
            printf("\t\t\t\t\t      You score is %d out of 100\n\n",E*20);

            printf("\nTHANK YOU SO MUCH\n");
            printf("\t\t\tYou have done great job. So, Prepare yourself two weeks to play level 3.\n");
            getch();
        }
        else
        {
            printf("\t\t\t You failed!! I want to give you one more chance to survive!!\n");
            printf("\t\t\t\t\t\tTry again\n");
            printf("Enter any key=>> ");
            getch();
            printf("\n");
            gameon();
        }
    }

    else
    {
        printf("\t\t\t You failed!! I want to give you one more chance to survive!!\n");
        printf("\t\t\t\t\t\tTry again\n");
        printf("Enter any key=>> ");
        getch();
        printf("\n");
        gameon();
    }

    /*
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

    */
}

void welcome(char *words)
{
    system("cls");
    printf("\n");
    printf("\n\t\t\t...............................................");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t--                                           --");
    printf("\n\t\t\t--          ||| Squid Game |||               --");
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
        opening();
}








