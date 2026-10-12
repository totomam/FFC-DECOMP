#include "ffc/types.h"

extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern uint32_t data_ov004_0215817c[];
extern void *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b708(uint32_t n);

void func_ov004_02148224(uint8_t *self)
{
    uint32_t tbl;
    uint32_t v1c;
    uint32_t v10;
    uint32_t v20;
    uint32_t arr[4];
    uint32_t i;
    void *o;
    void *s;
    void *h;
    void *sA;
    void *sB;

    if (self[0x8c] == 0) {
        tbl = data_ov004_0215817c[func_0206c184(*(uint32_t *)(self + 0x88), 6)];
        v1c = func_0206c184(*(uint32_t *)(self + 0x88), 0x100);
        v10 = func_0206c184(*(uint32_t *)(self + 0x88), 0x1e) + 0x78;
        arr[0] = 0;
        arr[1] = 0;
        arr[2] = v1c;
        arr[3] = 200;
        sB = self + 0x14;
        sA = self + 0x48;
        for (i = 0; i < 2; i++) {
            o = func_0203b95c(tbl, *(uint32_t *)(self + 0x80 + i * 4), 0, 1);
            {
                void **vt = *(void ***)o;
                ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(o, 1, 0);
                ((void (*)(void *))vt[0x28 / 4])(o);
            }
            v20 = func_02056aec(o);
            arr[0] = v1c;
            arr[1] = (uint32_t)-200;
            func_02062a78(o, arr[2], arr[1], arr[0], v10, 0);
            s = func_0203b688();
            func_02056bc0(s, (void *)v20);
            func_02056bc0(sA, s);
            func_02056bc0(sA, o);
        }
        h = func_0203b708(4);
        func_02056bc0(sB, h);
    }
}
