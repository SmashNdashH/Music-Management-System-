void menu(void)
{

	char choice;
	system("cls");
	while(1)
	{
		system("COLOR 5F");
		system("cls");
		printf("\n");
		printf("-");
		printf("\n");
		printf("\n                             ||MUSIC MANAGEMENT||                        ");
		printf("\n");
		printf("\n                                 ||MENU||               ");
		printf("\n\n                       Press  1 :  >> ADD NEW MUSIC                           ");
		printf("\n\n                       Press  2 :  >> EDIT EXISTING MUSIC                     ");
		printf("\n\n                       Press  3 :  >> VIEW MUSICS LIST                             ");
		printf("\n\n                       Press  4 :  >> SEARCH MUSIC LIST                           ");
		printf("\n\n                       Press  5 :  >> EXIT.                                   ");
		printf("\n\n");


		choice=getch();

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
				system("cls");
				printf("\n\n                            THANK YOU FOR USING THIS SERVICE!                            ");
                printf("\n");
				sleep(20);
				exit(0);
				break;
			default:
 				system("cls");
				printf("INVALID KEYWORD.\nPLEASE ENTER A VALID KEYWORD TO CHOOSE.");
				printf("\nPRESS ANY KEY TO CONTINUE..........");
				getch();
				system("cls");
		}
	}
}

