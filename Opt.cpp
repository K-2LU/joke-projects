#include <bits/stdc++.h>
using namespace std;

void code();
void command();
void expiry();
void help();
void finit();
void welcome();
void dateX();

FILE *fout;

int main()
{
    fout = fopen("output.txt", "w+");

    code();
}

void code()
{
	finit();
    help();
}
// option for input file
void finit()
{
	int s;

	printf("Do you wish to load from file?(1=Yes|0=No)\n");
	printf("CAUTION!\nPre-adjust commands in input file \nfor the program to work properly\n");

	cin >> s;

	if(s==1)
    	freopen("input.txt", "r", stdin);
    else
		printf("\n\nThis is the help menu\n\n");
}
//Help menu
void help()
{
	printf("\n\nEnter 1 for customer's welcome note\n");
	printf("Enter 2 for customer's expiry date\n");
	printf("Enter 3 for date expired message\n");
	printf("Enter 0 to exit application\n");
	printf("Enter 11 to access the help menu\n\n");

    command();
}
// command
void command()
{
	while(1){
		int comm;
		printf("\nEnter a key to initiate a command: ");
		cin >> comm;
		switch(comm){
			case 1:
				fprintf(fout, "\n=====Welcome Note=====\n");
				welcome();
				break;
			case 2:
				fprintf(fout, "\n=====Expiry Date=====\n");
				expiry();
				break;
			case 3:
				fprintf(fout, "প্রিয় গ্রাহক, আপনার WiFiএর মেয়াদ শেষ।\n");
				break;
			case 0:
			    fclose(fout);
				exit(0);
				break;
			case 11:
				help();
				break;
			default:
				printf("Unknown command!\nEnter again! ");
				help();
		}
	}
}

void welcome()
{
	int x1, i=1;

	printf("How many customers? ");
	cin >> x1;

	while(x1--){
	fprintf(fout, "%d\n", i);
	i+=1;

	int x, p;
	char s1[80];

	printf("\nEnter customer ID: ");
	cin >> x;
	printf("\nEnter customer username: ");
	cin >> s1;

    printf("\n\nWelcome to SkyLove Cable Network\n");
	printf("\nYour ID: %d\n", x);
	printf("Your username: %s\n", s1);
	printf("Your password: 2020\n\n");

    fprintf(fout, "\n\nWelcome to SkyLove Cable Network\n");
	fprintf(fout, "\nYour ID: %d\n", x);
	fprintf(fout, "Your username: %s\n", s1);
	fprintf(fout, "Your password: 2020\n\n");

	fprintf(fout, "Thank you for choosing our service.\n\n");
	}
}

void expiry()
{
	int x, cID;
	printf("How many customers? ");
	cin >> x;

	char date[15];

    while(x--){
    	printf("Enter serial of the customer: ");

    	cin >> cID;

    	fprintf(fout, "Customer Serial: %d\n", cID);
        fprintf(fout, "\n\nDear customer");
        fprintf(fout, "\nYour WiFi will expire on: ");

    	printf("\nEnter expiry date: ");
    	scanf("%s", date);

    	int day=((date[0]-'0')*10)+(date[1]-'0');
    	int month=((date[2]-'0')*10)+(date[3]-'0');
    	int year=((date[4]-'0')*1000)+((date[5]-'0')*100)+((date[6]-'0')*10)+(date[7]-'0');

        printf("\n");

    	switch(month){
    		case 1:
    			printf("January");
    			fprintf(fout, "January");
    			break;
    		case 2:
    			printf("February");
    			fprintf(fout, "February");
    			break;
    		case 3:
    			printf("March");
    			fprintf(fout, "March");
    			break;
    		case 4:
    			printf("April");
    			fprintf(fout, "April");
    			break;
    		case 5:
    			printf("May");
    			fprintf(fout, "May");
    			break;
    		case 6:
    			printf("June");
    			fprintf(fout, "June");
    			break;
    		case 7:
    			printf("July");
    			fprintf(fout, "July");
    			break;
    		case 8:
    			printf("August");
    			fprintf(fout, "August");
    			break;
    		case 9:
    			printf("September");
    			fprintf(fout, "September");
    			break;
    		case 10:
    			printf("October");
    			fprintf(fout, "October");
    			break;
    		case 11:
    			printf("November");
    			fprintf(fout, "November");
    			break;
    		case 12:
    			printf("December");
    			fprintf(fout, "December");
    	}
    	printf(" %d", day);
    	printf(", %d\n", year);
    	fprintf(fout, " %d", day);
    	fprintf(fout, ", %d\n\n\n", year);
    }
}
