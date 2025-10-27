#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
    int ngay, thang, nam;
    int ngay_toi_da; 

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (nam <= 0) {
        printf("Ngay thang nam khong hop le\n");
        return 1; 
    }
    
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ngay_toi_da = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ngay_toi_da = 30;
            break;
        case 2: 
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                ngay_toi_da = 29;
            } else {
                ngay_toi_da = 28;
            }
            break;
        default: 
            printf("Ngay thang nam khong hop le\n");
            return 1; 
    }
    if (ngay < 1 || ngay > ngay_toi_da) {
        printf("Ngay thang nam khong hop le\n");
        return 1; 
    }
    printf("Ngay thang nam hop le\n");
    return 0; 
}
