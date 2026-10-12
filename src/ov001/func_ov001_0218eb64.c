#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *object, uint32_t value);
extern void *func_02032d24(void *obj, Pair pr, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);

void func_ov001_0218eb64(uint8_t *p)
{
    uint8_t tmp[12];
    Pair pr;
    void *obj;
    int flag = 0;
    uint32_t zero = 0;

    obj = func_0205681c(0xb0);
    if (obj != 0) {
        func_02005988(tmp, *(uint32_t *)(p + 0x80));
        pr.a = 0x80;
        pr.b = 0x60;
        flag = 1;
        obj = func_02032d24(obj, pr, tmp, 4, zero);
    }
    func_02056bc0(p + 0x14, obj);
    if (flag) {
        func_020059cc(tmp);
    }
}
