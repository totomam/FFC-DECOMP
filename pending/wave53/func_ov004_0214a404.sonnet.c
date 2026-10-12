#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov004_021519bc(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void func_ov004_02151444(int32_t *out, uint32_t p);
extern int32_t func_ov004_0214e84c(uint32_t p);
extern uint32_t func_ov004_02153514(void);
extern void func_02056c9c(void *obj, uint32_t v);
extern int32_t data_ov004_02158b04[];
extern uint32_t data_ov004_02158c14[];
extern uint32_t data_ov004_02158c9c[];
extern uint32_t data_ov004_02158ca4[];

void func_ov004_0214a404(uint8_t *self)
{
    
    volatile int32_t L[8];
    int32_t *d;
    int32_t x0, y0, dx, dy, th, hh, s10, s14;
    uint32_t t, r6, r7, ret, v;
    uint8_t *obj;

    v = func_0203b6f0();
    *(uint32_t *)(self + 0x9c) = v;
    func_02056bc0(self + 0x48, (void *)v);
    func_ov004_021519bc(*(uint32_t *)(self + 0x88), *(uint32_t *)(self + 0x90));

    obj = func_0205681c(0xac);
    if (obj != 0) {
        func_ov004_02151444((int32_t *)&L[6], *(uint32_t *)(self + 0x88));
        d = data_ov004_02158b04;
        x0 = L[6];
        y0 = L[7];
        L[2] = x0;
        dx = x0 - d[12];
        L[2] = dx;
        dy = y0 - d[13];
        L[3] = y0;
        t = ((uint32_t)dy << 31) >> 28;
        th = (int32_t)t;
        hh = (th + (int32_t)(t >> 31)) >> 1;
        s10 = (dx << 3) + hh;
        s14 = dy << 3;
        L[4] = s10;
        L[5] = s14;
        ret = *(uint32_t *)(self + 0x88);
        L[3] = dy;

        func_ov004_0214e84c(ret);
        ret = func_ov004_02153514();
        r6 = (*(uint32_t *)(self + 0x90) != ret);
        r7 = *(uint32_t *)(self + 0x88);

        L[1] = L[5];
        L[0] = L[4];
        func_02056c9c(obj, 0);
        *(uint32_t *)obj = (uint32_t)data_ov004_02158c14;
        *(uint32_t *)(obj + 0x80) = data_ov004_02158c9c[0];
        *(uint32_t *)(obj + 0x84) = data_ov004_02158c9c[1];
        *(uint32_t *)(obj + 0x88) = r7;
        *(int32_t *)(obj + 0x8c) = L[0];
        *(int32_t *)(obj + 0x90) = L[1];
        obj[0x94] = 1;
        obj[0x95] = (uint8_t)r6;
        *(uint32_t *)(obj + 0xa0) = 0;
        *(int32_t *)(obj + 0xa8) = data_ov004_02158b04[5];
    }

    func_02056bc0(*(void **)(self + 0x9c), obj);
    *(uint32_t *)(self + 0x80) = data_ov004_02158ca4[0];
    *(uint32_t *)(self + 0x84) = data_ov004_02158ca4[1];
}
