#include<stdio.h>

int main(void)

{

	int month;

	printf("태어난달을입력하세요");
	scanf("%d",&month);
	switch(month)
{
	case 3:
	case 4:
	case 5:
		printf("봄에 태어났군요\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름에 태어났군요\n");
		break;
	case 9:
	case 10:
	case 11: 
		printf("가을에 태어났군요\n");
		break;

	default:
		printf("겨울에 태어났군요\n");
		break;
	}
	return 0;

}

