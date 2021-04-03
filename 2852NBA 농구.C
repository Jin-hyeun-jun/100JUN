#include<stdio.h>
int main()
{
    int goal_num1 = 0, goal_num2 = 0, goal_num;
    int team, min, sec, i = 0;
    int winning_min1 = 0, winning_sec1 = 0, winning_min2 = 0, winning_sec2 = 0;
    int last_min1, last_sec1, last_min2, last_sec2;
    int minarr[100] = {}, secarr[100] = {};
    char h;
    scanf("%d", &goal_num);

    while (goal_num > i)
    {
        scanf("%d %02d%c%02d", &team, &minarr[i], &h, &secarr[i]);
        if (i > 0)
        {
            min = minarr[i] - minarr[i - 1];
            sec = secarr[i] - secarr[i - 1];
        }
        if (team == 1)
        {
            goal_num1 = goal_num1 + 1;
            last_min1 = minarr[i];
            last_sec1 = secarr[i];
        }
        if (team == 2)
        {
            goal_num2 = goal_num2 + 1;
            last_min2 = minarr[i];
            last_sec2 = secarr[i];
        }
        if (i > 0 && goal_num1 > goal_num2)
        {
            if (team == 1)
            {
                if (goal_num1 - goal_num2 > 1)
                {
                    winning_min1 = winning_min1 + min;
                    winning_sec1 = winning_sec1 + sec;
                }
            }
            if (team == 2)
            {
                winning_min1 = winning_min1 + min;
                winning_sec1 = winning_sec1 + sec;
            }
        }
        if (i > 0 && goal_num1 == goal_num2)
        {
            if (team == 1)
            {
                winning_min2 = winning_min2 + min;
                winning_sec2 = winning_sec2 + sec;
            }
            if (team == 2)
            {
                winning_min1 = winning_min1 + min;
                winning_sec1 = winning_sec1 + sec;
            }
        }
        if (i > 0 && goal_num1 < goal_num2)
        {
            if (team == 2)
            {
                if (goal_num2 - goal_num1 > 1)
                {
                    winning_min2 = winning_min2 + min;
                    winning_sec2 = winning_sec2 + sec;
                }
            }
            if (team == 1)
            {
                winning_min2 = winning_min2 + min;
                winning_sec2 = winning_sec2 + sec;
            }
        }
        if (goal_num - 1 == i)
        {
            if (goal_num1 > goal_num2)
            {
                winning_min1 = winning_min1 + (47 - minarr[i]);
                winning_sec1 = winning_sec1 + (60 - secarr[i]);
                break;
            }
            if (goal_num1 < goal_num2)
            {
                winning_min2 = winning_min2 + (47 - minarr[i]);
                winning_sec2 = winning_sec2 + (60 - secarr[i]);
                break;
            }
        }
        i++;
    }
    if (winning_sec1 >= 60)
    {
        winning_min1 = winning_min1 + winning_sec1 / 60;
        winning_sec1 = winning_sec1 % 60;

    }
    if (winning_sec1 < 0)
    {
        if (-1 * winning_sec1 % 60 == 0)
        {
            winning_min1 = winning_min1 - (-1 * winning_sec1 / 60);
            winning_sec1 = 0;
        }
        else
        {
            winning_min1 = winning_min1 - (-1 * winning_sec1 / 60 + 1);
            winning_sec1 = 60 - (-1 * winning_sec1 % 60);
        }
    }

    if (winning_sec2 >= 60)
    {
        winning_min2 = winning_min2 + winning_sec2 / 60;
        winning_sec2 = winning_sec2 % 60;
    }

    if (winning_sec2 < 0)
    {
        if (-1 * winning_sec2 % 60 == 0)
        {
            winning_min2 = winning_min2 - (-1 * winning_sec1 / 60);
            winning_sec2 = 0;
        }
        else
        {
            winning_min2 = winning_min2 - (-1 * winning_sec2 / 60 + 1);
            winning_sec2 = 60 - (-1 * winning_sec2 % 60);
        }
    }
    printf("%02d:%02d\n", winning_min1, winning_sec1);
    printf("%02d:%02d\n", winning_min2, winning_sec2);
    return 0;
}