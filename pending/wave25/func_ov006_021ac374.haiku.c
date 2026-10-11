#include "ffc/types.h"

extern int func_0208130c(int a, int b);
extern uint8_t data_ov006_021bc78c[];

int func_ov006_021ac374(int x)
{
    int v = func_0208130c(*(uint16_t *)(data_ov006_021bc78c + 4), 0x1d);
    int i;
    for (i = 0; i < 4; i++) {
        if (v == x) {
            return i;
        }
        v++;
    }
    return -1;
}
