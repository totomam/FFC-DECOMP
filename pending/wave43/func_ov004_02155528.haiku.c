#include "ffc/types.h"

extern uint32_t func_ov004_0215352c(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_0206c270(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov004_02159d00[2];

void func_ov004_02155528(uint8_t *p) {
    uint32_t i = 0;
    uint32_t n = func_ov004_0215352c(p);
    uint32_t cont;
    uint8_t *obj;
    uint8_t *sub;
    uint32_t flag;
    if (n == 0) {
        goto tail;
    }
    do {
        obj = *(uint8_t **)(p + 0x1f0 + i * 4);
        flag = obj[0x12];
        sub = obj + 0x1c;
        if (flag) {
            func_0208763c(sub);
        }
        cont = (*(uint32_t *)(obj + 0x14) == 0);
        if (flag) {
            func_02087678(sub);
        }
        if (!cont) {
            return;
        }
        i++;
        n = func_ov004_0215352c(p);
    } while (i < n);
tail:
    if (*(uint32_t *)(p + 0x28c) != 0) {
        uint32_t r = func_0206c270();
        func_02056bc0(p + 0x14, (void *)r);
    }
    *(uint32_t *)(p + 0x94) = data_ov004_02159d00[0];
    *(uint32_t *)(p + 0x98) = data_ov004_02159d00[1];
}
