#include "ffc/types.h"

extern uint32_t func_0204f7d4(const void *object);
extern void func_ov004_02147bf4(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *obj, uint32_t src);
extern void *func_ov004_02147584(void *node, uint32_t a, void *b, void *obj, int flag);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_0213df18;

void func_ov004_02148024(uint8_t *a, uint32_t b, uint32_t c) {
    int done;
    int flag;
    uint32_t buf[4];

    flag = (b == func_0204f7d4(data_0213df18)) ? 1 : 2;
    func_ov004_02147bf4(*(void **)(a + 0xec));
    done = 0;
    buf[0] = (uint32_t)func_0205681c(0xb4);
    if (buf[0] != 0) {
        func_02005988(&buf[1], c);
        done = 1;
        buf[0] = (uint32_t)func_ov004_02147584((void *)buf[0], b, *(void **)(a + 0xe8), &buf[1], flag);
    }
    func_02056bc0(a + 0x14, (void *)buf[0]);
    if (done) {
        func_020059cc(&buf[1]);
    }
}
