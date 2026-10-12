#include "ffc/types.h"
typedef struct { int x; int y; } V2;
extern void *func_0203b6fc(void *p);
extern void *func_02062a78(void *obj, V2 p, V2 cd, int e, int f);
extern void func_02056bc0(void *object, void *node);

void *func_ov002_021b5f0c(uint8_t *self, V2 p, V2 cd, int e, int f) {
    void *obj = func_0203b6fc(self);
    V2 q1, r1, q2, r2, q3, r3;
    func_02056bc0(obj, func_02062a78(*(void **)(self + 0x80), p, cd, e, f));
    r1.x = cd.x - 0x5b; r1.y = cd.y - 6; q1.x = p.x - 0x5b; q1.y = p.y - 6;
    func_02056bc0(obj, func_02062a78(*(void **)(self + 0x8c), q1, r1, e, f));
    r2.x = cd.x + 0x31; r2.y = cd.y - 8; q2.x = p.x + 0x31; q2.y = p.y - 8;
    func_02056bc0(obj, func_02062a78(*(void **)(self + 0x88), q2, r2, e, f));
    if (*(void **)(self + 0x84)) {
        r3.x = cd.x + 0x28; r3.y = cd.y; q3.x = p.x + 0x28; q3.y = p.y;
        func_02056bc0(obj, func_02062a78(*(void **)(self + 0x84), q3, r3, e, f));
    }
    return obj;
}
