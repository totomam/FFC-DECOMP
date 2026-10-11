#include "ffc/types.h"

extern void func_ov006_021abc4c(void);
extern uint8_t data_ov006_021bc78c[];

void func_ov006_021ac7a4(void)
{
    int i = 0;
    do {
        uint8_t *p = *(uint8_t **)(data_ov006_021bc78c + 8) + i;
        if (p[4] != 0) {
            p[4]--;
            p = *(uint8_t **)(data_ov006_021bc78c + 8) + i;
            if (p[4] == 0) {
                func_ov006_021abc4c();
            }
        }
        i++;
    } while (i < 4);
}
