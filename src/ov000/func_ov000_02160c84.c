#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern void *func_ov000_0215eb30(uint32_t a, uint32_t b, uint32_t c, uint16_t d, uint32_t *e, uint32_t f);
extern void func_ov000_02163758(void);

void *func_ov000_02160c84(void)
{
    uint32_t flag = 0;
    void *ret = 0;
    uint8_t *p4;

    if (*((uint8_t *)func_ov000_02163350() + 0x18) != 0) {
        if (*(uint32_t *)((uint8_t *)func_ov000_02163350() + 0x5dc) != 0) {
            p4 = func_ov000_02163350();
            if (*(uint32_t *)(p4 + 0x5dc) != *(uint32_t *)((uint8_t *)func_ov000_02163350() + 0x678)) {
                ret = func_ov000_02163350();
                p4 = func_ov000_02163350();
                ret = func_ov000_0215eb30(12,
                                          *(uint32_t *)((uint8_t *)ret + 0x5dc),
                                          *(uint32_t *)(p4 + 0x558),
                                          *(uint16_t *)((uint8_t *)func_ov000_02163350() + 0x560),
                                          &flag, 1);
                *((uint8_t *)func_ov000_02163350() + 0x18) = 0;
                *(uint32_t *)((uint8_t *)func_ov000_02163350() + 0x5dc) = 0;
                func_ov000_02163758();
            }
        }
    }
    return ret;
}
