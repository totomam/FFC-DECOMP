#include "ffc/types.h"

extern void *func_02043f78(void *obj);
extern void func_02017060(void *out, void *key);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *obj);
extern void func_02053290(void *obj);
extern void *func_ov003_0217426c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);
extern void *data_020b8e44;

typedef struct {
    uint32_t a;
    void *m4;
    uint32_t m8;
    uint8_t flag;
} Loc;

void func_ov003_02174de0(uint8_t *a)
{
    Loc loc;
    Loc *p;
    void *r6;
    uint16_t r4;
    void *n;

    r6 = func_02043f78(*(void **)(a + 0x80));
    p = &loc;
    func_02017060(p, data_020b8e44);
    r4 = *(uint16_t *)((uint8_t *)func_02052d90(p->m4, p->m8) + 0xe);
    if (p->m4 != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->m4, p->m8);
        }
        func_02052c04(p->m4);
    }
    func_02053290(p);
    n = func_ov003_0217426c(*(void **)(a + 0x80), r6, r4, 1);
    func_02056bc0(a + 0x14, n);
    n = func_ov003_0217426c(*(void **)(a + 0x80), r6, 1, 1);
    func_02056bc0(a + 0x14, n);
    func_02056bc0(a + 0x14, func_02056aec(a));
}
