#include <stdio.h>
#include <locale>


int main(){
    char str1[25];
    setlocale(LC_ALL,"");
    wprintf(L"\nВсем привет!!! Helloworld\n");
    printf("Тест!\n");
    fgets(str1, 24, stdin);
    printf("%s\n", str1);
    return 0;
}