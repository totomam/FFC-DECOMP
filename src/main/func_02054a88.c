#include "ffc/types.h"

struct Obj {
    void *vtbl;
    void *f4;
    uint8_t f8;
};

struct Glob {
    void *f0;
    void *f4;
};

extern char data_020b05d4[];
extern struct Glob data_02141510;
extern struct Glob data_0213e098;

extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void func_02056bf4(void *a, void *b);

void *func_02054a88(struct Obj *p) {
    struct Obj *obj = p;
    obj->vtbl = data_020b05d4;
    if (obj->f8 != 0) {
        uint32_t a = func_020871d4(data_02141510.f4);
        if (a > func_020871d4(data_0213e098.f4)) {
            int ime = (*(volatile uint16_t *)0x04000208 == 0);
            if (!ime) {
                func_02088f30();
            }
        }
    }
    func_02056bf4((char *)data_0213e098.f0 + 0x48, obj->f4);
    if (obj->f4 != 0) {
        void (**vt)(void *) = *(void (***)(void *))obj->f4;
        vt[1](obj->f4);
    }
    return obj;
}
