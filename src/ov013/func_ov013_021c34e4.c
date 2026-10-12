#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_ov013_021bd36c(uint32_t a);
extern uint32_t func_ov013_021bd47c(uint32_t a);
extern uint32_t func_0206cb30(void);
extern uint32_t func_0206ccd4(uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *out, uint32_t b);
extern void *func_02032d24(void *obj, Pair s, void *buf, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern uint32_t data_020b8e44;
extern Pair data_ov013_021c4ec4;

void func_ov013_021c34e4(uint8_t *p)
{
    uint32_t buf[3];
    Pair args;
    void *r6;
    uint32_t zero;
    int flag;

    func_ov013_021bd36c(*(uint32_t *)(p + 0x88));
    *(uint32_t *)(p + 0x90) = func_ov013_021bd47c(*(uint32_t *)(p + 0x88));
    if (func_0206cb30() == 0) {
        func_02056bc0(p + 0x14, (void *)func_0206ccd4(*(uint32_t *)(p + 0x90)));
    }

    zero = 0;
    flag = 0;
    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        func_02005988(buf, func_020159c8(data_020b8e44, 0x39));
        args.a = 0x80;
        args.b = 0x60;
        flag = 1;
        r6 = func_02032d24(r6, args, buf, 4, zero);
    }
    func_02056bc0(p + 0x14, r6);
    if (flag) {
        func_020059cc(buf);
    }
    *(Pair *)(p + 0x80) = data_ov013_021c4ec4;
}
