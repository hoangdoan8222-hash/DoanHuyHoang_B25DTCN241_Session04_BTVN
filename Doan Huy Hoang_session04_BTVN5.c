#include <stdio.h>

int main() {
    int chiso_cu, chiso_moi, sodien_tieuthu;
    long long tien_dien = 0;

    printf("Nhap chi so cong to cu: ");
    scanf("%d", &chiso_cu);
    printf("Nhap chi so cong to moi: ");
    scanf("%d", &chiso_moi);

    sodien_tieuthu = chiso_moi - chiso_cu;

    if (sodien_tieuthu < 0) {
        printf("Loi: Chi so moi phai lon hon chi so cu.\n");
        return 1;
    }
    long long MOC_1 = 50LL * 10000;
    long long MOC_2 = MOC_1 + 50LL * 15000;
    long long MOC_3 = MOC_2 + 50LL * 20000;
    long long MOC_4 = MOC_3 + 50LL * 25000;

    if (sodien_tieuthu >= 200) {
        tien_dien = MOC_4 + (sodien_tieuthu - 200) * 30000LL;
    } else if (sodien_tieuthu >= 150) {
        tien_dien = MOC_3 + (sodien_tieuthu - 150) * 25000LL;
    } else if (sodien_tieuthu >= 100) {
        tien_dien = MOC_2 + (sodien_tieuthu - 100) * 20000LL;
    } else if (sodien_tieuthu >= 50) {
        tien_dien = MOC_1 + (sodien_tieuthu - 50) * 15000LL;
    } else {
        tien_dien = sodien_tieuthu * 10000LL;
    }

    printf("So dien tieu thu: %d kWh\n", sodien_tieuthu);
    printf("Tong tien dien phai tra: %lld VND\n", tien_dien);

    return 0;
}
