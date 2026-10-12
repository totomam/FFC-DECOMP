#include "ffc/types.h"

extern uint8_t data_ov006_021baf3c[];
extern int func_ov006_0219ef3c(uint8_t *p, int y, int n);

int func_ov006_0219e1dc(int x, int y) {
    int res = 0;
    int i = 0;
    int flag = res;
    uint8_t *p = data_ov006_021baf3c;
    do {
        if (*p != 0) {
            flag = 1;
            break;
        }
        i++;
        p++;
    } while (i < 6);
    if (flag != 0) {
        if (func_ov006_0219ef3c(data_ov006_021baf3c, y, 6) != 0) {
            res = 1;
        }
    } else {
        if (x != 0x1000) {
            res = 2;
        }
    }
    return res;
}
