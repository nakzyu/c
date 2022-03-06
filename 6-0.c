//외부로부터 입력받아서 배열 선언 및 출력

#include <stdio.h>
int main () {
    int array[4];

    for (int i = 1; i <= 4; i++) {
        scanf("%d", &array[i - 1]);
    }

    for (int i = 0; i < 4; i++) {
        printf("%d\n", array[i]);
    }
}