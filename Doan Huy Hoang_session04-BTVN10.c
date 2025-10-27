#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
    int a, b, c;
    int temp; 

    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("Thu tu tang dan: %d %d %d\n", a, b, c);
    return 0;
}


