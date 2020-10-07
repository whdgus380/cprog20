#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)


{
	
	int initial_money = 50;
	int num=0;
	int goal = 200;
	srand(time(NULL));
	for(int i =0;i<100;i++){
	
		int cash = initial_money;
		while(cash>0 && cash<goal)
		{
			
			
			
				if((rand()%2)==1){ 
					cash++;

				}
				else{
					cash--;
				}
			
			}
	
			if(cash==200) num++;;
	}
		printf("100번중 %d번\n",num);
		printf("200달러를땄습니다.\n");
	return 0;
}







