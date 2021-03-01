#include<stdio.h>

typedef struct{//first

int hours,minutes,seconds;

}time;
 time T1,T2;
 time convertS( int s){//third

 T1.hours=s/3600;
 T1.minutes=(s-(T1.hours*3600))/60;
 T1.seconds=s-(T1.hours*3600)-(T1.minutes*60);
 //printf("H:M:S %d:%d:%d \n",T1.hours,T1.minutes,T1.seconds);

 return T1;
 }
   int convertT1(time T1){//second

   int Tseconds1=T1.seconds+(T1.hours*3600)+(T1.minutes*60);
   return Tseconds1;

 	 }
 	  int convertT2(time T2){
          int Tseconds2=T2.seconds+(T2.hours*3600)+(T2.minutes*60);
          return Tseconds2;
 	 }
        int sum(int Tseconds1, time T1){
 	int sumS=Tseconds1+T1.seconds+(T1.hours*3600)+(T1.minutes*60);
 	return sumS;
 	}
 	void fullTime(int sumS){
 	int Thours=sumS/3600;
 	int Tminutes=(sumS-(Thours*3600))/60;
        int Tseconds=sumS-(Thours*3600)-(Tminutes*60);
	printf("New H:M:S %d:%d:%d \n",Thours,Tminutes,Tseconds);
int main(){
int time,hours,minutes,seconds;

	printf("enter time frame(H,M,S)\n");
	printf("Hours:");
	scanf("%d",&T1.hours);
	printf("Minutes:");
	scanf("%d",&T1.minutes);
	printf("seconds:");
	scanf("%d",&T1.seconds);
        int Tseconds1=convertT1(T1);
	printf("Total seconds =%d\n",Tseconds1);

	printf("enter a number of seconds:\n");
	scanf("%d",&seconds);
        T1= convertS(seconds);//third
        printf("H:M:S %d:%d:%d \n",T1.hours,T1.minutes,T1.seconds);

       int sumS=sum( Tseconds1,T1);
       printf("sum=%d\n",sumS);
	fullTime(sumS);
	return 0;
	}
