#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern void func_020559d4(void *p);
extern int func_0206cb98(void *p);
extern void *func_0206cd68(void *p);
extern void *func_02056aec(void *p);
extern void *func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c472c;
extern Pair data_ov007_021c4734;

void func_ov007_021a8844(uint8_t *p)
{
    uint8_t *q;
    void *r6;
    void *r7;
    void *r0;
    uint32_t *o;

    func_020559d4(p + 0x80);
    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        o = *(uint32_t **)(p + 0xcc);
        o[3] = (o[3] & ~0xffu) | 2u;
        *(Pair *)(p + 0xb8) = data_ov007_021c472c;
        return;
    }
    if (p[0x13c] == 0) {
        return;
    }
    if (p[0x13d] == 0) {
        return;
    }
    r6 = func_0206cd68(*(void **)(p + 0xc8));
    r7 = func_02056aec(*(void **)(p + 0xcc));
    r0 = func_0203b72c();
    q = p + 0x14;
    func_02056bc0(q, r0);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
    *(Pair *)(p + 0xb8) = data_ov007_021c4734;
}
