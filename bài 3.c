#include <stdio.h>

int main() {
    int kwh;
    long money = 0;
    printf("Nhap so kWh su dung: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        money = kwh * 1678;
    } 
    else if (kwh <= 100) {
        money = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200) {
        money = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300) {
        money = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400) {
        money = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else {
        money = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("So tien dien phai tra: %ld dong\n", money);

    return 0;
}
