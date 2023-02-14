/* Example 4.1: The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as per the
following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail */
#include <stdio.h>
int main()
{
    int P, C, M, E, H;
        printf("Physics marks: ");
        scanf("%d", &P);
        if (P>100 || P<0){
    do
    {
        printf("Enter Physics marks again: ");
        scanf("%d", &P);
    } while (P < 0 || P > 100);
        }
    do
    {
        printf("Chemistry marks: ");
        scanf("%d", &C);
    } while (C < 0 || C > 100);
    do
    {
        printf("Maths marks: ");
        scanf("%d", &M);
    } while (M < 0 || M > 100);
    do
    {
        printf("English marks: ");
        scanf("%d", &E);
    } while (E < 0 || E > 100);
    do
    {
        printf("Hindi marks: ");
        scanf("%d", &H);
    } while (H < 0 || H > 100);

    printf("Total marks is %d\n", P + C + M + E + H);
    int percen;
    percen = (P + C + M + E + H) / 5;
    printf("And your percentage is %d percent\n", percen);

    if (percen >= 60)
    {
        printf("You got First division");
    }
    else if (percen >= 50 && percen <= 59)
    {
        printf("You got Second division");
    }
    else if (percen >= 40 && percen <= 49)
    {
        printf("You got Third division");
    }
    else
    {
        printf("You FAILED!");
    }
    return 0;
}