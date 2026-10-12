#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(void);
extern int func_ov000_02158824(void *p);
extern int func_ov000_021587e4(void *a, void *b);

int func_ov006_021ac840(void)
{
    uint8_t *p = func_ov006_021afd28();

    if (p[0x40] == 0) {
        return 0;
    }
    if (p[0xf6] == 0 && !func_ov000_02158824(p + 0xc8) && !func_ov000_02158824(p + 0xcc)) {
        return 0;
    }
    if (p[0xf5] == 0) {
        if (!func_ov000_02158824(p + 0xc0)) {
            return 0;
        }
        if (!func_ov000_02158824(p + 0xc4)) {
            return 0;
        }
        if (!func_ov000_021587e4(p + 0xc0, p + 0xf0)) {
            return 0;
        }
    }
    return 1;
}
