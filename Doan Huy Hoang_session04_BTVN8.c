#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
    int a, b, c;
    printf("Nhap canh a: ");
    scanf("%d", &a);
    printf("Nhap canh b: ");
    scanf("%d", &b);
    printf("Nhap canh c: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    }

    return 0;
}

