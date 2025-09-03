#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int grade = 0;
	scanf("%d", &grade);
switch (grade)
		{
    case 4:
	case 3:
		printf("Excellent");
		break;
	case 2:
		printf("Good");
		break;
	case 1:
		printf("A Piece Of Shit");
		break;
	default:
		printf("niubia");
		break;
}
	return 0;
}