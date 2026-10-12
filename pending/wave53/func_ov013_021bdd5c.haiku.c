/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_02056858(void *p);
void *func_02055054(uint32_t p);
void func_0209a978(uint32_t a, void *b);
void func_020212a4(void);
void *func_0203bfe0(uint32_t a);
void *func_0203bfcc(uint32_t a);
void *func_0205681c(uint32_t size);
void func_02087620(void *o);
void func_02056bc0(void *o, void *n);
extern uint32_t data_0213e098;
extern uint32_t data_020b0b68[];
extern uint32_t data_020b0b54[];
extern uint32_t data_ov013_021c42a8[];
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov013_021bdd5c(uint8_t *a)
{
    uint32_t i;
    uint32_t off1;
    uint32_t off2;
    uint8_t *obj;
    void *r7;
    void *r6;

    off1 = 0x124 - 4;
    off2 = off1;
    for (i = 0; i < *(uint32_t *)(a + 0x124); i++) {
        uint32_t idx = i * 0x1c;
        func_02056858(*(void **)(*(uint8_t **)(a + off1) + idx + 0x14));
        func_02056858(*(void **)(*(uint8_t **)(a + off2) + idx + 0x18));
    }

    {
        uint32_t n = *(uint32_t *)(a + 0x124);
        *(uint32_t *)(a + 0x124) = diff(Num(n), n);
    }
    func_0209a978(0x1e, func_02055054(data_0213e098));
    func_020212a4();
    r6 = func_0203bfe0(0x1e);
    r7 = func_0203bfcc(0x1e);

    obj = (uint8_t *)func_0205681c(0x34);
    if (obj != 0) {
        *(uint32_t *)(obj + 0xc) = *(uint32_t *)(obj + 0xc) & ~0xff;
        *(void **)obj = data_020b0b68;
        func_02087620(obj + 0x1c);
        obj[0x10] = obj[0x10] & ~0xff;
        obj[0x11] = obj[0x11] & ~0xff;
        obj[0x12] = obj[0x12] & ~0xff;
        *(uint32_t *)(obj + 0x14) = 0;
        *(void **)(obj + 0x18) = obj + 0x14;
        *(void **)obj = data_020b0b54;
        obj[0x11] = (obj[0x11] & ~0xff) | 1;
    }

    func_02056bc0(obj, r7);
    func_02056bc0(obj, r6);
    func_02056bc0(a + 0x14, obj);

    *(uint32_t *)(a + 0xb8) = data_ov013_021c42a8[0];
    *(uint32_t *)(a + 0xbc) = data_ov013_021c42a8[1];
}
