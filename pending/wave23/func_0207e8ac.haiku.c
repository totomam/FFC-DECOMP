#include "ffc/types.h"

extern void func_02088978(void *p);
extern void func_0208898c(void);

typedef struct Inner {
    uint8_t pad[0x14];
    uint32_t v;
} Inner;

typedef struct Outer {
    uint8_t pad0[8];
    Inner *inner;
    uint32_t flags;
} Outer;

void func_0207e8ac(Outer *p) {
    func_02088978(p);
    {
        int c = 1;
        if (!(p->flags & 1)) {
            c = 0;
        }
        if (c) {
            p->flags |= 2;
            p->inner->v |= 0x20;
        }
    }
    func_0208898c();
}
