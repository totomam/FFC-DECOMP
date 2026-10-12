#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern uint32_t func_0203b67c(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov001_0218de08(void *a, void *b);
extern char data_ov001_02194974[];

void *func_ov001_0218dd2c(uint8_t *p, void *q) {
    int i;
    func_02056c9c(p, 0);
    *(char **)p = data_ov001_02194974;
    *(void **)(p + 0x80) = q;
    *(uint32_t *)(p + 0x84) = 0;
    for (i = 0; i < 4; i++) {
        *(uint32_t *)(p + i * 4 + 0x88) = func_0203b67c();
        func_02056bc0(p + 0x48, *(void **)(p + i * 4 + 0x88));
    }
    if (*(void **)(p + 0x80) != 0) {
        func_ov001_0218de08(*(void **)(p + 0x80), p);
    }
    return p;
}
