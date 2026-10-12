#include "ffc/types.h"

extern void func_020559d4(void *p);
extern float func_0209a4cc(uint32_t v);
extern float func_0209af28(float a, float b);
extern float func_0209b5bc(float a, float b);
extern uint32_t func_0209ab90(void);
extern void *func_0205e1a4(void *p);
extern void func_0205cbfc(void *p, int a, int b);
extern void func_ov002_02198d08(void *a, void *b);
extern int func_ov002_0219b860(void);
extern void func_0205cbcc(void *p, int v);

void func_ov002_0219db84(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *t;
    void *obj;
    uint16_t ang;
    int v;
    float f;
    int j, k, w;
    volatile int A[2], B[2], C[2], D[2];

    func_020559d4(p + 0x80);
    t = *(void **)(p + 0x13c);
    if (t == 0) {
        return;
    }
    f = func_0209af28(65536.0f, func_0209a4cc(*(uint32_t *)(p + 0x140)));
    f = func_0209b5bc(f, 360.0f);
    ang = (uint16_t)func_0209ab90();
    obj = func_0205e1a4(t);
    v = 0x60;
    t = (void *)v;
    func_0205cbfc(obj, 0x80, v);
    func_ov002_02198d08(*(void **)(p + 0xbc), *(void **)(p + 0xb8));
    if (func_ov002_0219b860() == 0) {
        j = 0x13; k = 0x4b; A[1] = j; C[1] = j; C[0] = k; A[0] = k;
        obj = func_0205e1a4(*(void **)(p + 0x13c));
        *(int32_t *)((uint8_t *)obj + 0x1c) = C[0];
        *(int32_t *)((uint8_t *)obj + 0x20) = C[1];
    } else {
        B[1] = 0x13; D[1] = 0x13; w = (int)t - 0xab; B[0] = w; D[0] = w;
        obj = func_0205e1a4(*(void **)(p + 0x13c));
        *(int32_t *)((uint8_t *)obj + 0x1c) = w;
        *(int32_t *)((uint8_t *)obj + 0x20) = D[1];
    }
    obj = func_0205e1a4(*(void **)(p + 0x13c));
    func_0205cbcc(obj, ang);
}
