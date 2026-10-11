#include "ffc/types.h"

extern uint32_t data_ov000_0217020c[];
extern void *func_ov000_02163350(void);
extern void func_ov001_02184030(void *p);

void func_ov000_02163384(uint8_t x) {
    uint8_t *p = (uint8_t *)data_ov000_0217020c[1];
    p[0x16] = x;
    if (((uint32_t *)func_ov000_02163350())[4] != 0) {
        func_ov001_02184030(((void **)func_ov000_02163350())[4]);
    }
}
