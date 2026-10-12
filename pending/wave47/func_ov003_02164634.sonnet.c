#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern uint16_t func_ov003_021481c0(uint16_t v);
extern void *func_ov003_021464f4(void *obj, uint16_t id);
extern int32_t *func_ov003_02155b40(void *p);
extern int32_t func_020816d4(int32_t v);
extern void *func_02056aec(void *p);
extern void *func_ov003_02149478(void *obj, uint16_t a, uint16_t b, uint16_t c, uint32_t d,
                                 uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02164634(uint8_t *p)
{
    volatile int32_t v[11];
    void *obj = func_020424e0(*(void **)(p + 0x80));
    *(uint16_t *)(p + 0x84) = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    *(uint16_t *)(p + 0x86) = func_ov003_021481c0(*(uint16_t *)(p + 0x86));
    void *a = func_ov003_021464f4(obj, *(uint16_t *)(p + 0x84));
    void *b = func_ov003_021464f4(obj, *(uint16_t *)(p + 0x86));
    if (a == 0 || b == 0) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }
    int32_t *volatile A = func_ov003_02155b40(a);
    int32_t *pa = A + 2;
    int32_t *B = func_ov003_02155b40(b);
    int32_t *pb = B + 2;
    int32_t dx = pb[1] - pa[1];
    int32_t dy = B[2] - A[2];
    v[10] = dx;
    v[9] = dy;
    int32_t ang = func_020816d4(dx);
    uint16_t angle = (uint16_t)(*(uint16_t *)(p + 0x88) + ang);
    void *r7 = func_02056aec(p);
    void *ret = func_ov003_02149478(obj, *(uint16_t *)(p + 0x84), angle, *(uint16_t *)(p + 0x8a),
                                    *(uint32_t *)(p + 0x8c), 2, *(uint32_t *)(p + 0x94),
                                    *(uint32_t *)(p + 0x90), 1);
    p += 0x14;
    func_02056bc0(p, ret);
    func_02056bc0(p, r7);
}
