#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=0,i=0;

    setlocale(LC_ALL, "Rus");
    printf("”далить одно вхождение удвоенной буквы.(Сaab abcabccТ->Тab abcabcТ)\n");
    printf("¬ведите строку:\n");
    char str[100] = "";
    getchar();
    fgets(str, 100, stdin);
    while (str[n + 1] != '\0') {
        if (str[n] == str[n + 1]) {
            i = n;
            while (str[i] != '\0') {
                str[i] = str[i + 1];
                i++;
            }
        }
        else {
            n++;
        }


    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    return 0;
}
