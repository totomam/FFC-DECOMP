#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Vec2;
typedef struct { uint32_t a; uint32_t b; uint8_t c; } S5;
typedef Vec2 (*VFn)(void *);

extern void *data_0213df18;
extern uint32_t func_0203b6fc(void);
extern uint32_t func_0204f7ec(void *object);
extern uint32_t func_0204f7d4(void *object);
extern uint32_t func_0203b688(void);
extern void func_ov003_0214a05c(void *self, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov003_02149da4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203b720(void);
extern uint32_t func_02056aec(void *object);
extern uint32_t func_02062a78(void *obj, Vec2 a, Vec2 b, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_0214a180(void *self, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov003_0214a6c4(void *self, uint32_t a, uint32_t b, uint32_t c, void **d);
extern uint32_t data_ov003_021798a4[2];
extern Vec2 data_ov003_021793f8[];
extern uint32_t data_ov003_021798ac[2];

void func_ov003_0214aab0(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t sa, uint32_t sb, uint8_t sc)
{
    uint32_t arr[2];
    uint32_t node, flag; int i, sel;
    uint32_t p24, p28, p2c, rr, r4; Vec2 pv;
    void *r6;
    void **pp;
    Vec2 t1, t2, *dd;

    arr[0] = a1;
    arr[1] = a2;
    node = func_0203b6fc();
    flag = (sc == 0) ? 0 : 3;

    for (i = 0; i < 2; i++) {
        sel = (i == 1);
        if (sb != 0 && sb == i + 1) {
            continue;
        }
        if (sel) {
            r6 = (void *)func_0204f7ec(data_0213df18);
        } else {
            r6 = (void *)func_0204f7d4(data_0213df18);
        }
        pp = (void **)(self + (sel ? 0x1b8 : 0x1bc));
        if (*pp == 0) {
            continue;
        }
        r4 = func_0203b688();
        func_ov003_0214a05c(self, sb, r4, sel);
        p24 = func_ov003_02149da4(*(uint32_t *)((uint8_t *)r6 + 0x14),
                                  data_ov003_021798a4[0], data_ov003_021798a4[1], flag);
        p28 = func_0203b720();
        p2c = func_02056aec(*pp);
        dd = &data_ov003_021793f8[arr[i]];
        t1 = ((VFn)((void **)*(void **)*pp)[4])(*pp);
        pv.x = t1.x + dd->x;
        pv.y = t1.y + dd->y;
        t2 = ((VFn)((void **)*(void **)*pp)[4])(*pp);
        { rr = func_02062a78(*pp, t2, pv, a3 * 2, sa); }
        func_02056bc0((void *)r4, (void *)rr);
        func_02056bc0((void *)r4, (void *)p2c);
        func_02056bc0((void *)r4, (void *)p28);
        func_02056bc0((void *)r4, (void *)p24);
        func_ov003_0214a180(self, sb, r4, sel);
        rr = func_ov003_0214a6c4(self, data_ov003_021798ac[0], data_ov003_021798ac[1], sel, pp);
        func_02056bc0((void *)r4, (void *)rr);
        func_02056bc0((void *)node, (void *)r4);
    }
    func_02056bc0(*(void **)(self + 0x1b4), (void *)node);
}
