#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec;
	int hour, min, sec_2;
	
	printf("input the second : ");
	scanf("%i", &sec);
	
	hour = sec/3600;
	min = (sec - (hour*3600))/60;
	sec_2 = sec - (min*60) - (hour*3600);
	
	printf("The time or %i second is %i : %i : %i", sec, hour, min, sec_2);
	 
	return 0;
}
