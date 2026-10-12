#include "ffc/types.h"

extern uint32_t *func_020696e8(void *object);
extern void func_020697ac(void *object, uint32_t arg);
extern int func_ov005_02198678(void *object, uint32_t id);
extern void func_ov005_02198680(void *object, uint8_t arg, int zero);
extern void func_ov005_02196bcc(uint32_t arg, int zero);
extern int func_020692e8(uint32_t arg);
extern void func_02069300(uint32_t arg);

void func_ov005_021982a4(uint8_t *p)
{
    uint32_t *t;

    p[0x14a] = 1;
    t = func_020696e8(p);
    if (8 & (t[1] & (t[1] ^ t[2]))) {
        func_020697ac(p, *(uint32_t *)(p + 0x12c));
    }

    t = func_020696e8(p);
    if (2 & (t[1] & (t[1] ^ t[2]))) {
        if (p[0x148] != 0xff && func_ov005_02198678(p, p[0x148]) != 0) {
            func_ov005_02198680(p, p[0x148], 0);
            {
                uint32_t *tbl = *(uint32_t **)(p + 0x114);
                func_ov005_02196bcc(tbl[(int)p[0x148] % 8], 0);
            }
            return;
        }
        if (func_020692e8(*(uint32_t *)(p + 0x128)) != 0) {
            func_02069300(*(uint32_t *)(p + 0x128));
            return;
        }
        func_020697ac(p, *(uint32_t *)(p + 0x128));
    }
}
