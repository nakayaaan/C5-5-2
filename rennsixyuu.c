#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef char String[1024];

int main(void)
{
	printf("***�����ăQ�[���i���x���P�j***\n�񓚂̃`�����X�͂S��܂łł�\n1���̐�����͂��Ă��������F");
	srand((unsigned)time(0UL));
	int answer = rand() % 10;
	int input;
	String inputStr;

	for (int i = 1; i <= 4; i++) {
		scanf("%s", inputStr);
		input = atoi(inputStr);
		if (answer == input) {
			printf("������I%d��ڂ̓��͂ł���\n", i);
			break;
		}else if (answer < input) {
			printf("�͂���I�����͂����Ə����Ȑ��ł�\n");
		}else {
			printf("�͂���I�����͂����Ƒ傫�Ȑ��ł�\n");
		}
		if (answer != input) {
			printf("������%d�ł���\n", answer);
		}
		return 0;
	}
}