#include "ffc/types.h"

extern void *func_02088978(void);
extern uint32_t func_0207e674(void *object);
extern void func_0207dc60(void *object, int arg);
extern void func_0207e6e4(void *object);
extern void func_0207e890(void *object);
extern void func_0207dd08(void *object, int arg);
extern void func_0208898c(void *object);

typedef struct Obj {
    uint32_t f0;
    uint32_t f1;
    void *head;
    uint32_t f3;
    uint32_t f4;
    uint32_t flags;
} Obj;

uint32_t func_0207e5fc(Obj *r0) {
    Obj *o = r0;
    uint32_t local[18];
    void *v = func_02088978();
    uint32_t r7;
    void *p;
    uint32_t f;

    int cond;
    if (o->flags & 2) {
        cond = 1;
    } else {
        cond = 0;
    }
    if (cond != 0) {
        r7 = func_0207e674(o);
        f = o->flags;
        p = o->head;
        o->flags = 0x80 | f;
        if (p != 0) {
            do {
                void *next = *(void **)p;
                func_0207dc60(p, 3);
                p = next;
            } while (p != 0);
        }
        o->head = 0;
        if (r7 != 0) {
            func_0207e6e4(o);
        }
        func_0207e890(local);
        local[2] = (uint32_t)o;
        func_0207dd08(local, 0x12);
        o->flags &= ~0xa2u;
    }
    func_0208898c(v);
    return 1;
}
