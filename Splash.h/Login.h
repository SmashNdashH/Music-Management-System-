void username_password(void);
void login(void)
{
    system("color 5F");
        username_password();
        system("cls");
    system("color 2F");
        printf("\n\n\t\t\t\t\tWELCOME USER!");
 	    printf("\n                                                                                  ");
		printf("\n                                                                                         ");
		printf("\n\n\t\t\t\t\tPress any key to Continue...                                          ");
        printf("\n                                                                                  ");
		getch();
}

void username_password(void){

char user[50], pass[50];
    printf("\n");
	printf("\n");
	printf("\n");
	printf("\n                          *o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *                   WELCOME TO                    *     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *                | MUSIC MANAGER |                *     ");
    printf("\n                          *                                                 *     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *             Press ENTER to continue. .          *     ");
	printf("\n                          *                                                 *     ");
	printf("\n                          *o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*     ");
	printf("\n\n");

	getchar();
	system("cls");

 {
            system("color 3F");
        printf("\n\n\t\t\t\t\tPlease enter your User ID: ");
        scanf("%s", &user);
        printf("\t\t\t\t\tPlease enter your password: ");
        scanf("%s", &pass);

        if(strcmp(user, "Abrar")==0)
        {
           if(strcmp(pass, "abrar66")==0)
            {
            printf("\n\t\t\t\t\tYou are Logged in. ");
            sleep(1);
           }
           else{
            printf("\n\t\t\t\t\tThe User ID or Password maybe incorrect!");
            printf("\n\t\t\t\t\tPlease Try Again!");

            sleep(1);
            system("cls");
            username_password();
           }
        }
        else{
            printf("\n\t\t\t\t\tThe User ID or Password maybe incorrect!");
            printf("\n\t\t\t\t\tPlease Try Again!");

            sleep(1);
        	system("cls");
            username_password();
        }

}

return 0;
}






