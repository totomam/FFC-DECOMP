#include "ffc/types.h"
extern uint8_t **data_020b8e44;
extern void *func_ov001_0218de10(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov001_0218e3b4(void *o, int x);
void func_ov001_0218e6ac(uint8_t *p) {
    if (*(uint32_t *)(*data_020b8e44 + 0x88) != 0) {
        func_02056bc0(p + 0x14, func_ov001_0218de10());
        func_ov001_0218e3b4(p, 1);
    }
}
