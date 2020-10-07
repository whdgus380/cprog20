#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)

{
	srand(time(NULL));
	int answer = rand()%100;
	int guess;
	int tries = 0;
	
	do{
		printf("정답을추측하여보시오:");
		scanf("%d",&guess);
		tries++;

		if(guess>answer)
			printf("제시한정수가높습니다.\n");
		if(guess<answer)
			printf("제시한정수가낮습니다.\n");
	}while(guess !=answer);
		printf("축하합니다.시도횟수=%d\n",tries);
	return 0;



	


}

