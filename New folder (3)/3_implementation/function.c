#include "headers.h"

#ifndef _DICE_H_
#define _DICE_H_
/**
 * @brief Function to find the output of a dice roll
 * @return int result of dice_output operation
 * 
 */
int dice_output();
/**
 * @brief Function to check if output of dice is 6
 * @param[in] dice_num Number whose value is to be checked for 6
 * @return int result after checking
 */
char *dice_num_6();
#endif/*_DICE_H_*/



int dice_output()
{
    int upper = 6, lower = 1, dice;
    srand (time (0));
    A:dice = (rand () % (upper - lower + 1)) + lower;
    if (dice == 0)
      goto A;
    else
      return dice;
}

char *dice_num_6()
{
	char print[100]="Roll=6: You have earned a chance to play one more time.";
	
	printf("%s\n\n",print);
	char *cp=print;
	return cp;
}



struct SANDL
{
    int initial_position;
    int ending_position;
};

