#include <stdio.h>
// ﹤ ﹥  目 〡 〦
int main() {
	build(20, 6);//望檜,類熱
}


int build(int a, int b) {
	int length = a;
	int height = b;

	height = height * 6;
	for (int k = 0; k < height / 6; k++) {
		for (int i = 0; i < length; i++) {
			printf("﹥");
		}
		printf("\n");
		for (int i = 0; i < 3; i++) {
			printf("﹥");
			for (int j = 0; j < length - 2; j++) {
				printf("目");
			}
			printf("﹥\n");
		}
		printf("﹤");
		for (int j = 0; j < length - 2; j++) {
			printf("目");
		}
		printf("﹤\n");

		printf("﹥");
		for (int j = 0; j < 3; j++) {
			printf("十");
		}
		for (int j = 0; j < length - 5; j++) {
			printf("目");
		}
		printf("﹥\n");
	}

	printf("﹥");
	for (int j = 0; j < 3; j++) {
		printf("十");
	}
	for (int j = 0; j < length - 5; j++) {
		printf("目");
	}
	printf("〦\n");

	printf("﹥");
	for (int j = 0; j < 3; j++) {
		printf("十");
	}
	for (int j = 0; j < length - 5; j++) {
		printf("目");
	}
	printf("〡\n");

	for (int j = 0; j < length; j++) {
		printf("﹥");
	}
}
