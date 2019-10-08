#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define STRSIZE 40
#define FLAGSIZE 20
#define VLARGE 50000

int checkPass(char *pass){
	int permissible_indices[]={0,2,4,5,8,10,12,14,15,18,19,22,24,26,28,30,31,32,33,36};
	char soup[STRSIZE]="bry4t3t7_ib8yh_by2yt443k_nqn1m00d65b9";
	if(strlen(pass)!=FLAGSIZE){
		return 0;
	}
	for(int i=0;i<FLAGSIZE;i++){
		if(*(pass+i)!=soup[permissible_indices[i]]){
			return 0;
		}

		return 1;
	}

}

int main(void){
	char *myPass_temp=malloc(sizeof(char)*VLARGE);
	scanf("%s",myPass_temp);
	char *myPass=realloc(myPass_temp,strlen(myPass_temp));
	if(checkPass(myPass)==1){
		printf("Access Granted\n");
	}
	else{
		printf("Access Denied\n");
	}


	return 0;
}