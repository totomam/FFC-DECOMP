#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *out, uint32_t v);
extern void *func_02033338(void *obj, void *a, void *b, uint32_t c);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02033440(void *obj, Pair p);
extern void func_02033438(void *obj, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218ebe8(uint8_t *a) {
    uint32_t buf[3];
    uint32_t zero = 0;
    int flag = 0;
    void *obj;
    Pair p;

    obj = func_0205681c(0xb8);
    if (obj != 0) {
        func_02005988(buf, *(uint32_t *)(a + 0x80));
        flag = 1;
        obj = func_02033338(obj, buf, a + 0x8c, zero);
    }
    if (flag) {
        func_020059cc(buf);
    }
    p.a = 0x80;
    p.b = 0x70;
    func_02033440(obj, p);
    func_02033438(obj, 1);
    func_02056bc0(a + 0x14, obj);
}
