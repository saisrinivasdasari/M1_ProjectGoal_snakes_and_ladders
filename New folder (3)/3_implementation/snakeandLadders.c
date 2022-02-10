#include "headers.h"
#include "function.c"

int main ()
{
  char ch;

  int i,dice_num,player1=0,player2=0;

  struct SANDL snake[10]={{25,9},{43,4},{56,8},{65,40},{73,15},{84,58},{99,1}};

    struct SANDL ladder[10]={{5,23},{13,42},{20,59},{52,72},{60,83},{70,93}};

  printf
    (" -------------------------------------------------**WECOME TO SNAKES AND LADDERS**-------------------------------------------------\n");
                                   printf("     | 100 99 98 97 96 95 94 93 92 91 |     \n     ");
                                    printf("|  81 82 83 84 85 86 87 88 89 90 |     \n     ");
                                    printf("|  80 79 78 77 76 75 74 73 72 71 |     \n     ");
                                    printf("|  61 62 63 64 65 66 67 68 69 70 |     \n     ");
                                    printf("|  60 59 58 57 56 55 54 53 52 51 |     \n     ");
                                    printf("|  41 42 43 44 45 46 47 48 49 50 |     \n     ");
                                    printf("|  40 39 38 37 36 35 34 33 32 31 |     \n     ");
                                    printf("|  21 22 23 24 25 26 27 28 29 30 |     \n     ");
                                    printf("|  20 19 18 17 16 15 14 13 12 11 |     \n     ");
                                    printf("|   1  2  3  4  5  6  7  8  9 10 |     \n     ");

  printf ("\t\t\t\t **Instructions**                   \n\n");

  printf
    ("--> Snakes:-  |25 to 9|,\t  |43 to 4|,\t |56 to 8|,\t |65 to 40|,\t |73 to 15|,\t |84 to 58|,\t |99 to  1|.\n");

  printf
    ("--> Ladders:- |5 to 23|,\t |13 to 42|,\t |20 to 59|,\t |52 to 72|,\t |60 to 83|,\t |70 to 93|,\t |75 to 90|\n");

  printf
    ("--> Maximum of two players can play and the player reaching 100 first wins the game.\n");

  printf
    ("--> A player rolling a 6 will get an another chance\n\n");

  printf
    (" -------------------------------------------**START A GAME**-------------------------------------------\n\n");


  while(1)  
  { printf ("choose player1 or player2 :enter 1,2 or 3 to select the options\n");

    printf ("1.Player 1\n");

    printf ("2.Player 2\n");

    printf ("3.exit\n");

    printf
    ("---------------------------------------------------------------------------------------------------------------\n");

    scanf("%s",&ch);


    switch(ch)
    { 
        case '1':
            system("cls");

            dice_num = dice_output();

            if(dice_num==6)
            {
              dice_num_6();
            }

            player1=player1+dice_num;

            if(player1<101)
             {
               for(i=0;i<7;i++)
               {
                 if(player1==snake[i].initial_position)
                 {
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");

                    player1=snake[i].ending_position;
                 }
                 else if(player1==ladder[i].initial_position)
                 {
                   printf("BINGO! YOU GOT A LADDER\n\n");

                      player1=ladder[i].ending_position;
                 }
               }
             }
             else
             {
               player1=100;

               printf("Congratulations! Player1 wins.....\n\n");

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n", dice_num,player1,player2);

               return(0);
             }
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", dice_num,player1,player2);

             break;
        case '2':
             system("cls");

            dice_num = dice_output();

           if(dice_num==6)
           {
             dice_num_6();
           }
            player2=player2+dice_num;

            if(player2<101)
             {
               for(i=0;i<7;i++)
               {
                 if(player2==snake[i].initial_position)
                 {
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");

                    player2=snake[i].ending_position;
                 }
                 else if(player2==ladder[i].initial_position)
                 {
                   printf("BINGO! YOU GOT A LADDER\n\n");

                      player2=ladder[i].ending_position;
                 }
               }
             }
             else
             {
               player2=100;

               printf("Congratulations! Player2 wins.....\n\n");

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", dice_num,player1,player2);

               return(0);
             }
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", dice_num,player1,player2);
             break;
        case '3':
            exit(0);
            break;
        default:
            system("cls");
            printf("Incorrect choice!\n\n");
    }
  }
}