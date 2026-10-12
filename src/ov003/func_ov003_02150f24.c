#include "ffc/types.h"

extern uint32_t data_0213e098;
extern uint32_t func_02055054(uint32_t v);
extern float func_0209a4cc(uint32_t v);
extern float func_0209b5bc(float a, float b);
extern float func_0209a484(uint32_t v);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209ab90(float a);
extern void func_02058318(void *a, uint32_t b, float c, int d, int e, int f);

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint8_t pad[0x70];
    void *p80;
    uint32_t p84;
    uint32_t p88;
    uint32_t p8c;
    uint32_t p90;
    uint32_t p94;
} Obj;

void func_ov003_02150f24(Obj *o)
{
    if (o->p80 != 0) {
        uint32_t sum;
        uint32_t v90;
        uint32_t v88;
        float f6;
        float f7;
        float t;
        uint32_t t0 = func_02055054(data_0213e098);
        sum = o->p94 + t0;
        o->p94 = sum;
        f6 = 1.0f;
        v90 = o->p90;
        if (v90 != 0) {
            f6 = func_0209a4cc(sum);
            t = func_0209a4cc(v90);
            f6 = func_0209b5bc(f6, t);
        }
        v88 = o->p88;
        f7 = func_0209a4cc(v88);
        t = func_0209a484(o->p8c - v88);
        t = func_0209af28(f6, t);
        t = func_0209b108(f7, t);
        t = func_0209ab90(t);
        func_02058318(o->p80, o->p84, t, 0, 0, -1);
    }
    if (o->p94 >= o->p90) {
        o->wc = (o->wc & ~0xFFu) | 2;
    }
}
