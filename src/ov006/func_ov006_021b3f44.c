#include "ffc/types.h"
extern int func_02086700(int a);
extern int func_02081334(int a, int b);
extern void func_020866dc(int a);
typedef struct { uint16_t n; uint8_t a; uint8_t b; uint32_t items[1]; } S;
uint32_t func_ov006_021b3f44(S *p) {
    uint32_t r = 0;
    int t = func_02086700(1);
    if (p->a != p->b) {
        p->b = func_02081334(p->b + p->n - 1, p->n);
        r = p->items[p->b];
    }
    func_020866dc(t);
    return r;
}
