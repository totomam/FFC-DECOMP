#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_0209dde0;
extern void *data_0209dddc;
extern void *data_0209ddcc;

extern void func_0201cf34(void *a, void *b);
extern void func_0200a630(void *a, void *b);
extern void func_ov012_021d1420(void *a, void *b);
extern void func_ov012_021ce750(void *a);
extern void func_0201ce70(void *a, void *b);
extern void *func_0200a678(void *obj);
extern void *func_0203b6fc(void);
extern void *func_0203c18c(void *a, void *b);
extern void func_02056bc0(void *obj, void *node);
extern void *func_0203c174(void *a, void *b);
extern void *func_02056aec(void *obj);
extern void *func_02056b10(void *owner);
extern void *func_0203b708(void *a);

typedef struct {
    uint32_t flag : 1;
    uint32_t kind : 7;
    uint32_t pad : 24;
    uint32_t val;
} Loc;
typedef struct { uint32_t flag : 1; uint32_t rest : 31; uint32_t pad; uint8_t *ptr; } Sel;
#define SEL(x) (!((Sel *)(x))->flag ? (uint8_t *)(x) + 2 : ((Sel *)(x))->ptr)

void func_ov012_021d0a8c(uint8_t *p)
{
    uint8_t s[0xa4];
    uint32_t v;
    uint8_t *obj;
    void *r6;
    void *r7;
    void *t;
    void *r8;
    uint32_t *fl;

    fl = *(uint32_t **)(p + 0x340);
    if (fl != 0) {
        *fl = 1;
    }
    switch (*(uint32_t *)(p + 0x2d4)) {
    case 0:
        if (p[0x344] != 0) {
            goto tail;
        }
        func_0201cf34(data_020b93b8, s + 0xc);
        func_0200a630(s, s + 0xc);
        v = !((Loc *)s)->flag ? (((uint32_t)s[0] << 24) >> 25) : ((Loc *)s)->val;
        if (v == 0) {
            *(uint16_t *)(s + 0xc) = *(uint16_t *)(SEL(p + 0x31c) + 0xa);
            *(uint16_t *)(s + 0xe) = *(uint16_t *)(SEL(p + 0x31c) + 0x58);
            *(uint16_t *)(s + 0x10) = *(uint16_t *)(SEL(p + 0x31c) + 0x60);
            *(uint16_t *)(s + 0x12) = *(uint16_t *)(SEL(p + 0x31c) + 0x62);
            *(uint16_t *)(s + 0x14) = *(uint16_t *)(SEL(p + 0x31c) + 0x44);
            *(uint16_t *)(s + 0x16) = *(uint16_t *)(SEL(p + 0x31c) + 0x5e);
        }
        func_ov012_021d1420(p + 0x2ec, s + 0xc);
        func_ov012_021ce750(p);
        func_0201ce70(data_020b93b8, s + 0xc);
        func_0200a678(s);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    }

tail:
    r6 = func_0203b6fc();
    if (*(uint32_t *)(p + 0x2d4) != 3) {
        t = func_0203c18c(data_0209dde0, data_0209dddc);
        func_02056bc0(r6, t);
    }
    switch (*(uint32_t *)(p + 0x2d4)) {
    case 0:
        t = func_0203c174(data_0209dde0, data_0209dddc);
        func_02056bc0(r6, t);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    }
    obj = *(uint8_t **)(p + 0x2c8);
    *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2;
    r7 = func_02056aec(p);
    obj = *(uint8_t **)(p + 0x2e0);
    obj[0x90] = 1;
    t = func_02056b10(obj + 0x14);
    r8 = func_0203b708(data_0209ddcc);
    {
    void *q = (p += 0x14);
    func_02056bc0(q, r8);
    func_02056bc0(q, r6);
    func_02056bc0(q, t);
    func_02056bc0(q, r7);
    }
}
