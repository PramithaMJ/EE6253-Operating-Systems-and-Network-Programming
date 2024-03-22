#include <stdio.h>

void display_gender(char gender)
{
    if (gender == 'f' || gender == 'F')
    {
        printf("You are a Female\n");
    }
    else if (gender == 'm' || gender == 'M')
    {
        printf("You are a Male\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    char gender;
    printf("Please enter your gender (F or M): ");
    scanf(" %c", &gender); 

    display_gender(gender);

    return 0;
}
