#include <stdio.h>
// �� ��  �� �� ��
int main() {
	build(20, 6);//����,����
}


int build(int a, int b) {
	int length = a;
	int height = b;

	height = height * 6;
	for (int k = 0; k < height / 6; k++) {
		for (int i = 0; i < length; i++) {
			printf("��");
		}
		printf("\n");
		for (int i = 0; i < 3; i++) {
			printf("��");
			for (int j = 0; j < length - 2; j++) {
				printf("��");
			}
			printf("��\n");
		}
		printf("��");
		for (int j = 0; j < length - 2; j++) {
			printf("��");
		}
		printf("��\n");

		printf("��");
		for (int j = 0; j < 3; j++) {
			printf("��");
		}
		for (int j = 0; j < length - 5; j++) {
			printf("��");
		}
		printf("��\n");
	}

	printf("��");
	for (int j = 0; j < 3; j++) {
		printf("��");
	}
	for (int j = 0; j < length - 5; j++) {
		printf("��");
	}
	printf("��\n");

	printf("��");
	for (int j = 0; j < 3; j++) {
		printf("��");
	}
	for (int j = 0; j < length - 5; j++) {
		printf("��");
	}
	printf("��\n");

	for (int j = 0; j < length; j++) {
		printf("��");
	}
}
