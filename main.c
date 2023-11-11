#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char str[30] = "happy C programming";
    printf("The length of \"%s\" : %i", str, strlen(str));
    //실제로는 20개(널문자포함), but strlen은 우리 눈에 보이는 개수만 출력해줌.
    return 0;
}
