#include <stdio.h>

int main()
{
    char c;
    printf("Enter Any Character: ");
    scanf("%c", &c);

    // If One Of The Condition Is True, The Rest Will Not Be Evaluated.

    if (c <= 47)
    {
        printf("The Character Entered Is A Special Character.\n");
    }
    else if (c <= 57)
    {
        printf("The Character Entered Is A Digit.\n");
    }
    else if (c <= 64)
    {
        printf("The Character Entered Is A Special Character.\n");
    }
    else if (c <= 90)
    {
        printf("The Character Entered Is A Capital Letter.\n");
    }
    else if (c <= 96)
    {
        printf("The Character Entered Is A Special Character.\n");
    }
    else if (c <= 122)
    {
        printf("The Character Entered Is A Small Letter.\n");
    }
    else if (c <= 127)
    {
        printf("The Character Entered Is A Special Character.\n");
    }
}