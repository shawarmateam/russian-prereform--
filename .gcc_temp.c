#include <stdio.h>
 int main() { printf("слава Петру I\n"); printf("и дворянамъ слава\n"); char test[100]; printf("Введите-c строку: "); if (fgets(test, sizeof(test), stdin) != NULL) { printf("Вы ввели: %s", test); } else { printf("Курьезъ при чтении строки.\n"); } return 0; } 