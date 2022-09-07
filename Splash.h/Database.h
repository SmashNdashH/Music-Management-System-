void addnewMusic(); // create or open existing file and add new/append to old
void viewMusic(); // create or open existing file to view
void editMusic(); // create or open existing file and change and/ or add
void searchMusic(); // create or open existing file and searches


void database(void){

    addnewMusic();
    viewMusic();
    editMusic();
    searchMusic();
    return 0;
}

void addnewMusic()
{
        struct Music
{
	char year[20];
	char name[30];
	char artist[30];
    float price;
}s;
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
		scanf("%s", &s.name);
		printf("\nEnter Music's Year of Release: ");
		fflush(stdin);
		scanf("%s", &s.year);
		printf("\nEnter Music's Artist: ");
		fflush(stdin);
		scanf("%s", &s.artist);
		printf("\nEnter Album Price: ");
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

void viewMusic()
{
        struct Music
{
	char year[20];
	char name[30];
	char artist[30];
    float price;
}s;
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

void editMusic()
{
        struct Music
{
	char year[20];
	char name[30];
	char artist[30];
    float price;
}s;
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
			scanf("%s",&s.name);
			printf("\n Enter the new Album Artist: ");
			fflush(stdin);
			scanf("%s",&s.artist);
			printf("\n Enter the new Album Price: ");
			fflush(stdin);
			scanf("%f",&s.price);

			fseek(Music,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,Music);
			fflush(stdin);
			system("cls");
			//break;

			printf("\n\n");
			printf("    *Music is Successfully edited. \n\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Press ESC to return back to < MAIN MENU >");
			test=getche();
			if(test==27)
         	break;
		}
	}
	fclose(Music);
}

void searchMusic()
{
        struct Music
{
	char year[20];
	char name[30];
	char artist[30];
    float price;
}s;
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
			printf("\n\n\nYear: %s\n\nName: %s\n\nArtist: %s\n\nPrice: Rs.%0.2f\n-----------------------------------",s.year,s.name,s.artist,s.price);
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
