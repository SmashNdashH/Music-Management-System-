void menu(void)
{
	time_t t;
	time(&t);
	int Password;
	char choice;
	system("cls");
	while(1)
	{
		system("COLOR 5F");
		system("cls");
		printf("\n");
		printf("-");
		printf("\n");
		printf("\n                             MUSIC MANAGEMENT                         ");
		printf("\n");
		printf("\n                                 ||MENU||               ");
		printf("\n\n                       Press  1 :  >> ADD NEW MUSIC                           ");
		printf("\n\n                       Press  2 :  >> EDIT EXISTING MUSIC                     ");
		printf("\n\n                       Press  3 :  >> VIEW MUSICS LIST                             ");
		printf("\n\n                       Press  4 :  >> SEARCH MUSIC LIST                           ");
		printf("\n\n                       Press  5 :  >> DELETE MUSIC                            ");
		printf("\n\n                       Press  6 :  >> EXIT.                                   ");
		printf("\n\n");


	    printf("\nCurrent date and time : %s",ctime(&t));


		choice=getch();
		choice=toupper(choice);
		switch(choice)

		{
			case '1':
				addnewMusic();
				break;
			case '2':
				editMusic();
				break;
			case '3':
				viewMusic();
				break;
            case '4':
				searchMusic();
				break;
			case '5':
				deleteMusic();
				break;
			case '6':
				system("cls");
				printf("\n\n                      :-)  THANK YOU !!                                     ");
				Sleep(2000);
				exit(0);
				break;
			default:
 				system("cls");
				printf("INVALID KEYWORD. \NPLEASE ENTER A VALID KEYWORD TO CHOOSE. ");
				printf("\nPRESS ANY KEY TO CONTINUE..........");
				getch();
		}
	}
}

