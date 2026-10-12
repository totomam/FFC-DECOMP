#include "ffc/types.h"

extern int func_02071e50(void *);
extern void func_02071e84(void *);
extern void func_02056c4c(void *);
extern void *func_0206ebe8(void);
extern void func_02056bc0(void *object, void *node);

typedef struct Obj {
    uint8_t pad0[0x14];
    uint8_t f14[0x6c];
    void *f80;
    void *f84;
    void *f88;
    void *f8c;
} Obj;

int func_02076258(Obj *p) {
    int r = 0;
    if (p->f88 != 0) {
        if (func_02071e50(p->f80) != 0) {
            r = 1;
            func_02071e84(p->f80);
        }
        func_02056c4c(p->f8c);
        p->f88 = 0;
        func_02056bc0(p->f14, func_0206ebe8());
    }
    return r;
}
