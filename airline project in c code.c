#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct mufti_airline
{
char DateOfJourney [10];
char bordingpoint [20];
char destinationpoint [20];
char passport[6];
char name[15];
int seat_num;
char email[15];
struct mufti_airline *following;
}
*begin, *stream;
struct mufti_airline *dummy;
int main()
{
void reserve(int x), cancel(), display(), savefile();
//function prototypes
int choice;
begin = stream = NULL; //initialize the struct pointers to

int num = 1;
do
{
printf("\n\n\t\t********************************************************************");
printf("\n\t\t welcome to mufti'sairline system ");
printf("\n\t\t*******************************************************************");
printf("\n\n\n\t\t Please enter your choice from below(1-4):");
printf("\n\n\t\t 1. Reservation");
printf("\n\n\t\t 2. Cancel");
printf("\n\n\t\t 3. DISPLAY RECORDS");
printf("\n\n\t\t 4. EXIT");
printf("\n\n\t\t feel free to ask us");
printf("\n\n\t\t Enter your choose ");
scanf("%d", &choice); fflush(stdin);
system("cls");
switch (choice)
{
case 1:
reserve(num);
num++;
break;
case 2:
cancel();
break;
case 3:
display();
break;
case 4:
{
 savefile();
 break;
}
Default:
printf("\n\n\t SORRY INVALID CHOICE!");
printf("\n\n\t PLEASE CHOOSE FROM 1-4");
printf("\n\n\t Do not forget to chose from 1-4");
}
getch();
} while (choice != 4);
}
// ************************GOOD LUCKMUFTI*****************************
void details()
{ printf("\n\t Enter DateOfJourney(DDMMYY) ");
gets(stream->DateOfJourney);
printf("\n\t Enter bording point");
gets(stream->bordingpoint);
printf("\n\t Enter destination point");
gets(stream->destinationpoint);
printf("\n\t Enter your passport number:");
gets(stream->passport); //reads a line from stdin andstores it into the string pointed
printf("\n\t Enter your name:");
gets(stream->name);
printf("\n\t Enter your email address:");
gets(stream->email);
}
// ************************************GOOD LUCKMUFTI************************************
void details();
void reserve(int x)
{
stream = begin;
if (begin == NULL)
{
// first user
begin = stream = (struct
mufti_airline*)malloc(sizeof(struct mufti_airline));
details();
stream->following = NULL;
printf("\n\t Seat booking successful!");
printf("\n\t your seat number is: Seat A-%d", x);
stream->seat_num = x;
return;
}
else if (x > 15) // FULL SEATS
{
printf("\n\t\t Seat Full.");
return;
}
else
{
// next user
while (stream->following)
stream = stream->following;
stream->following = (struct mufti_airline
*)malloc(sizeof(struct mufti_airline));
stream = stream->following;
details();
stream->following = NULL;
printf("\n\t Seat booking succesful!");
printf("\n\t your seat number is: Seat A-%d", x);
stream->seat_num = x;
return;
}
}
// ************************GOOD LUCKMUFTI********************************
void savefile()
{
FILE *fpointer = fopen("mufti records", "w");
if (!fpointer)
{
printf("\n Error in opening file!");
return;
}
stream = begin;
while (stream)
{
fprintf(fpointer, "%-6s", stream->passport);
fprintf(fpointer, "%-15s", stream->name);
fprintf(fpointer, "%-15s", stream->email);
stream = stream->following;
}
printf("\n\n\t Details have been saved to a file (muftirecords)");
fclose(fpointer);
}
//********************************GOOD LUCKMUFTI***************************************
void display()
{
stream = begin;
while (stream)
{
printf("\n\n Passport Number : %-6s", stream->passport);
printf("\n name : %-15s", stream->name);
printf("\n email address: %-15s", stream->email);
printf("\n Seat number: A-%d", stream->seat_num);
printf("\n\n++*=====================================================*++");
stream = stream->following;
}
}
//*****************************GOOD LUCKMUFTI*************************************
void cancel()
{
stream = begin;
system("cls");
char passport[6];
printf("\n\n Enter your passort number to delete record?:");
gets(passport); fflush(stdin);
if (strcmp(begin->passport, passport) == 0)
{
dummy = begin;
begin = begin->following;
free(dummy);
printf(" booking has been deleted");
return;
}
while (stream->following)
{
if (strcmp(stream->following->passport, passport) ==0)
{
dummy = stream->following;
stream->following = stream->following->following;
free(dummy);
printf("has been deleted ");
getch();
return;
}
stream = stream->following;
}
printf("passport number is wrong please check your passport");
}
