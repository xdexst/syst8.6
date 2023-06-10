
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.6: OK.\n");
	srand(time(0));

	int i,j,a[5][3],first[5],second[5],third[5];
	
	printf("First array:\n");
	for(i=0;i<5;i++) {
		first[i]=rand()%9+1;
		if(i==4){printf("%d\n",first[i]);}
		else {printf("%d, ",first[i]);}
	}
	printf("\nSecond array:\n");
	for(i=0;i<5;i++) {
		second[i]=rand()%9+1;
		if(i==4){printf("%d\n",second[i]);}
		else {printf("%d, ",second[i]);}
	}
	printf("\nThird array:\n");
	for(i=0;i<5;i++) {
		third[i]=rand()%9+1;
		if(i==4){printf("%d\n",third[i]);}
		else {printf("%d, ",third[i]);}
	}
	
	for(i=0;i<3;i++) {
		for(j=0;j<5;j++) {
			if(i==0) a[j][i]=first[j];
			if(i==1) a[j][i]=second[j];
			if(i==2) a[j][i]=third[j];
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<5;i++) {
		for(j=0;j<3;j++) {
			if(j==2){printf("%d\n",a[i][j]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	return 0;
}
