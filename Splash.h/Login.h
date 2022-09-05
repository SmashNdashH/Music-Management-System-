#include <stdio.h>
#include <string.h>

int main (void)

{
printf("\t\t\t\t_______________________________\n");
printf("\t\t\t\t|********* LOG  IN ***********|\n");
printf("\t\t\t\t|_____________________________|\n");
char id[50];

User:

printf("\n\n\t\t\t\Please Enter Your id:");

scanf("%s", &id);

if (strcmp(id,"Abrar")==0)

{

printf("\n\n\t\t\tId is correct\n");

}

else

{

printf("\n\n\t\t\tYou have entered an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("\t\t\tPlease Enter Your Password: ");

scanf("%s", &pass);

if(strcmp(pass,"Abrar6677")==0)

{

printf("\t\t\tYou have successfully logged in into your account\n");

}

else

{

printf("\t\t\tYou have entered a wrong password\nEnter your password again\n");

goto pass;

}

return 0;

}

