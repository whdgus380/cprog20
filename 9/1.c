#include<stdio.h>

int opt,all = 100;

void dec_item(int a)
{	
	static int sell=0;
	sell = sell+1;
	all = all - a;
	printf("%d번판매되었습니다\n",sell);
	printf("남은개수는 %d입니다\n",all);
}

void inc_item(int a)
{
	static int add=0;
	add = add+1;
	all = all+ a;
	printf("%d번들어왔습니다\n",add);
	printf("남은개수는%d입니다\n",all);
}

void print_item(void)
{
	printf("남은개수는%d입니다",all);
}
	

int main()

{
	int n;
	while(1){
		printf("판매:1,입고:2,재고확인:3,종료4:");
		scanf("%d",&opt);

		if(opt<3&&opt>0){
			printf("수량을입력하시오:");
			scanf("%d",&n);
		}


		switch(opt){
		case 1:
			dec_item(n);
			break;
		case 2:
			inc_item(n);
			break;
		case 3:
			print_item();
			break;
		case 4:
			goto out;
		default:
			printf("잘못선택함\n");
		}
	}
out:
	return 0;
}

			
