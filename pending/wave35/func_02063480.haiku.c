#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02052c68(void *a, void *b);
extern void func_02062ff0(void *p);
extern void func_02056844(void *p);
extern void func_02087678(void *p);
extern uint8_t data_0213e14c[];
extern uint8_t data_0213e140[];

typedef struct {
    uint32_t a;
    uint32_t b;
    void *h;
    uint8_t f;
} Loc;

typedef struct {
    uint32_t *inner;
    uint8_t pad[0x30];
    int32_t count;
} Obj;

void func_02063480(Obj *p) {
    Loc loc;
    loc.h = data_0213e14c;
    loc.f = 1;
    if (loc.f != 0) {
        func_0208763c();
    }
    p->count = p->count - 1;
    if (p->count <= 0) {
        uint32_t *q = p->inner;
        uint32_t t = q[0];
        loc.b = q[1];
        loc.a = t;
        func_02052c68(data_0213e140, &loc);
        if (p != 0) {
            func_02062ff0(p);
            func_02056844(p);
        }
    }
    if (loc.f != 0) {
        func_02087678(loc.h);
    }
}
