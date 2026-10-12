#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { Pair x, y; } T3;
typedef struct Obj Obj;
struct Obj {
    void **vt;
    uint8_t pad0[0x7c];
    uint32_t f80;
    uint32_t f84;
    uint32_t *f88;
    uint8_t pad1[0x10];
    Pair p9c;
};
typedef struct { uint32_t pad; Pair p; uint32_t st; Pair arr[6]; } Local;

extern void *func_0206975c(void);
extern void func_02069848(Obj *obj, uint32_t v);
extern void func_02069dcc(Obj *obj, void *p);
extern uintptr_t func_02069734(const void *object);
extern uint32_t func_020698fc(Obj *obj, Pair p);
extern void func_020697ac(Obj *obj, uint32_t v);
extern uint32_t func_02069bac(Obj *obj, T3 t);
extern uint32_t func_02069978(Obj *obj, uint32_t a, uint32_t b);
extern uint32_t data_020b1b60[2];

void func_0206a334(Obj *obj) {
    uint32_t S[15];
    uint32_t one = 1;
    if (!(obj->f88[1] & one)) {
        Obj *r4 = (Obj *)func_0206975c();
        if (r4 != 0) {
            func_02069848(obj, 0);
            ((void (*)(Pair *, Obj *))r4->vt[5])((Pair *)&S[10-1], r4);
            obj->p9c = *(Pair *)&S[10-1];
            func_02069dcc(obj, r4);
            if (func_02069734(obj) == 0) {
                func_020697ac(obj, func_020698fc(obj, obj->p9c));
            }
        }
        obj->f80 = data_020b1b60[0];
        obj->f84 = data_020b1b60[1];
        return;
    } else {
        uint32_t r4 = 0;
        uintptr_t r2 = func_02069734(obj);
        uint32_t a = obj->f88[1];
        uint32_t b = obj->f88[2];
        if (a & (a ^ b) & 0x10) r4 = one;
        if (a & (a ^ b) & 0x20) r4 = 3;
        if (a & (a ^ b) & 0x40) r4 = 4;
        if (a & (a ^ b) & 0x80) r4 = 2;
        if (r4 == 0) {
            ((void (*)(Obj *))obj->vt[5])(obj);
            return;
        }
        if (r2 == 0) {
            Pair p = obj->p9c;
            *(Pair *)&S[1-1] = p;
            S[2] = r4;
            *(Pair *)&S[4-1] = p;
            *(Pair *)&S[6-1] = p;
            *(Pair *)&S[8-1] = p;
            *(Pair *)&S[12-1] = p;
            *(Pair *)&S[14-1] = p;
            r4 = func_02069bac(obj, *(T3 *)&S[12-1]);
            if (r4 == 0) {
                func_020697ac(obj, func_020698fc(obj, obj->p9c));
            }
        } else {
            r4 = func_02069978(obj, (uint32_t)r2, r4);
        }
        if (r4 != 0) {
            func_020697ac(obj, r4);
            func_02069848(obj, r4);
        }
        return;
    }
}
