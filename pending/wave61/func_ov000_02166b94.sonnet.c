#include "ffc/types.h"
typedef struct { uint32_t a; uint16_t b; uint32_t c; } K;
typedef struct { uint32_t p0; uint32_t p1; uint32_t p2; uint32_t p3; } O;
extern O* func_ov000_02166414(void);
extern void func_ov000_021652a8(int, int, int, void*);
extern int func_ov000_0216888c(uint32_t, K*, void*, int, int);
extern uint32_t* func_ov000_0216876c(uint32_t);
extern uint32_t func_ov001_021807fc(uint32_t);
extern uint8_t data_ov000_0216b7fc[];
extern void func_ov000_02166444(void);
int func_ov000_02166b94(uint32_t a, uint16_t b, uint32_t* out) {
    O* o = func_ov000_02166414();
    K k;
    if (o->p3 == 0) {
        func_ov000_021652a8(0xc, 3, 0xf, data_ov000_0216b7fc);
        *out = 3;
        return 0xb;
    }
    k.a = a;
    k.b = b;
    if (func_ov000_0216888c(o->p1, &k, (void*)func_ov000_02166444, 0, 0) == -1) {
        *out = 3;
        return 0;
    }
    *out = func_ov001_021807fc(func_ov000_0216876c(o->p1)[2]);
    return 0;
}
