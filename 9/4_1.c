#include<stdio.h>

int cnt = 0;

void hanoi_tower(int n, char from, char tmp, char to)

{	

	if(n==1){
		printf("원판 1일 %c에서 %c으로 옮김다.\n",from,to);
		cnt = cnt+1;	
}	
	else{

		hanoi_tower(n-1,from,to,tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다\n",n,from,to);
		hanoi_tower(n-1,tmp,from,to);
		cnt = cnt+1;
		
	}

}

int main(void)

{
	hanoi_tower(5,'A','B','C');
	printf("횟수%d\n",cnt);
	return 0;
}


