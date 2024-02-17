#include<stdio.h>

int main(){
	int month,days,year;
	printf("Enter a month(in numeric order):");
	scanf("%d",&month);
	printf("Enter a year : ");
	scanf("%d",&year);
	if(year%4==0||year%100==0&&year%400==0)
	    days=29;
	else
	    days=28;
	switch(month){
		case 1:
			printf("Janaury-31 days");
			break;
		case 2:
			if(days==29)
			printf("February-%d days",days);
			else
			printf("February-28 days");
			break;
		case 3:
			printf("March-31 days");
			break;
		case 4:
			printf("April-30 days");
			break;
		case 5:
			printf("May-31 days");
			break;
		case 6:
			printf("June-30 days");
			break;
		case 7:
			printf("July-31 days");
			break;
		case 8:
			printf("August-31 days");
			break;
		case 9:
			printf("Semptember-30 days");
			break;
		case 10:
			printf("Octobar-31 days");
			break;
		case 11:
			printf("November-30 days");
			break;
		case 12:
			printf("December-31 days");
			break;
		default:
			printf("Try again");
	}
	return 0;
}
