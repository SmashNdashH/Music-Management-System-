struct Music
{
	char year[20];
	char name[30];
	char artist[30];
    float price;
}s;
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
		printf("\n\n                       Press  5 :  >> PLAY MUSIC FROM LIST                           ");
		printf("\n\n                       Press  6 :  >> EXIT.                                   ");
		printf("\n\n");


		choice=getch();

		switch(choice)

		{
			case '1': // create or open existing file and add new/append to old
{
		system("COLOR 8F");

    char test;
	FILE *Music;
	Music = fopen("MusicList.txt","a");
    system("cls");
	if(Music==0)
	{
		Music=fopen("MusicList.txt","w");
		getch();
	}
	while(1)
	{
        system("cls");
		printf("\nEnter Music's Name: ");
		fflush(stdin);
		scanf("%[^\n]", &s.name);
		printf("\nEnter Music's Year of Release: ");
		fflush(stdin);
		scanf("%s", &s.year);
		printf("\nEnter Music's Artist: ");
		fflush(stdin);
		scanf("%[^\n]", &s.artist);
		printf("\nEnter Music's Price: ");
		fflush(stdin);
		scanf("%f", &s.price);

		fwrite(&s,sizeof(s),1,Music);
		fflush(stdin);
		system("cls");

		printf("\n\n");
		printf("     The Music is successfully recorded. \n\n");
		printf("\n        Press any Key to Continue ");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Press ESC to return back to < MAIN MENU >");
		test=getche();
		if(test==27)
			break;
	}
	fclose(Music);
}
break;
			case '2':// create or open existing file and change and/ or add
{
		system("COLOR 9F");

	FILE *Music;
	char test;
	char year[20];
	long int size=sizeof(s);
	if((Music=fopen("MusicList.txt","r+"))==NULL)
        exit(0);
	system("cls");
	printf("Enter the existing Music' Year of Release to EDIT :");
	scanf("%[^\n]",year);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,Music)==1)
	{
		if(strcmp(s.year,year)==00)
		{
			system("cls");
			printf("\n Enter the new Music's Year of Release : ");
            fflush(stdin);
			scanf("%s",&s.year);
			printf("\n Enter the new Music's Name: ");
			fflush(stdin);
			scanf("%[^\n]",&s.name);
			printf("\n Enter the new Music's Artist: ");
			fflush(stdin);
			scanf("%[^\n]",&s.artist);
			printf("\n Enter the new Music's Price: ");
			fflush(stdin);
			scanf("%f",&s.price);

			fseek(Music,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,Music);
			fflush(stdin);
			system("cls");
			//break;

			printf("\n\n");
			printf("     Music Directory is successfully updated! \n\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Press ESC to return back to < MAIN MENU >");
			test=getche();
			if(test==27)
         	break;
		}
	}
	fclose(Music);
}
				break;
			case '3':// create or open existing file to view
{
		system("COLOR 4F");

	FILE *Music;

	if((Music=fopen("MusicList.txt","r"))==NULL)
		exit(0);
	system("cls");
    printf("  Music's Year of Release   \t Music's Name \t     Music's Artist   \t  Music's Price\n");

	while(fread(&s,sizeof(s),1,Music)==1)
	{
		printf("\n  %-28s   %-17s   %-18s   Tk.%.2f/-",s.year,s.name,s.artist,s.price);
	}
	printf("\n");


fclose(Music);
getch();
}
				break;
            case '4':// create or open existing file and searches
				{
		system("COLOR 2D");

	FILE *Music;
	char year[20];
	int flag=1;
	Music=fopen("MusicList.txt","r+");
	if(Music==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("SEARCH ");
	printf("\nEnter Music's Year of Release :");
	scanf("%s", year);
	while(fread(&s,sizeof(s),1,Music)==1)
	{
		if(strcmp(s.year,year)==0)
		{	system("cls");
			printf("SEARCH RESULTS  ");
			printf("\n-----------------------------------");
			printf("\nYear: %s\n\nName: %s\n\nArtist: %s\n\nPrice: Tk.%0.2f\n-----------------------------------",s.year,s.name,s.artist,s.price);
			printf("\n\n\n\n\n\n\n\n\n\nPress any key to Return Back to < MAIN MENU >");
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("OoopS! No Results Found.");
			printf("Please Try Again. ");
		}
	}
	getch();
	fclose(Music);
}

				break;
				case '5':// plays  song
		{
		    		system("COLOR 2E");

				char song;
    FILE *Music;
	if((Music=fopen("MusicList.txt","r"))==NULL)
		exit(0);
	system("cls");
    printf("  Music's Year of Release   \t Music's Name \t     Music's Artist   \t  Music's Price\n");

	while(fread(&s,sizeof(s),1,Music)==1)
	{
		printf("\n  %-28s   %-17s   %-18s   Tk.%.2f/-",s.year,s.name,s.artist,s.price);
	}
	    printf("\n");
        printf("\n\n                       Press  1 :  >> to play FIRST MUSIC                       ");
		printf("\n\n                       Press  2 :  >> to play SECOND MUSIC                       ");
		printf("\n\n                       Press  3 :  >> to play THIRD MUSIC                       ");
        song=getch();

		switch(song)
		{
			case '1':
				system("C:\\Users\\abrar\\Downloads\\EdgeOfSeventeen.mp3");
				break;
			case '2':
				system("C:\\Users\\abrar\\Downloads\\AviciiWakeMeUp.mp3");
				break;
			case '3':
				system("C:\\Users\\abrar\\Downloads\\ChrisBrownRosesTurnBlue.mp3");
				break;
            default:
 				system("cls");
				printf("INVALID KEYWORD.\nPLEASE ENTER A VALID KEYWORD TO CHOOSE.");
				printf("\nPRESS ANY KEY TO CONTINUE..........");
				getch();
				system("cls");
		}

fclose(Music);
getch();
		}
		break;

			case '6': //exit out of the program
			    		system("COLOR 5F");

				system("cls");
				printf("\n\n                            THANK YOU FOR USING THIS SERVICE!                            ");
                printf("\n");
				sleep(20);
				exit(0);
				break;
			default:
			    		system("COLOR 2F");

 				system("cls");
				printf("INVALID KEYWORD.\nPLEASE ENTER A VALID KEYWORD TO CHOOSE.");
				printf("\nPRESS ANY KEY TO CONTINUE..........");
				getch();
				system("cls");
		}
	}

}
