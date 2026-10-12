#include "ffc/types.h"

typedef struct {
    void *self;
    void *d;
    uint32_t c;
    uint32_t e;
} S16;

typedef struct {
    uint32_t pad[5];
    uint32_t out;
    uint32_t pad2[3];
} L24;

extern void func_02068580(void *self, void *p);
extern void *func_02081210(uint32_t v, void *obj);

void func_02068514(S16 s)
{
    L24 l;
    void *p = 0;
    void *self = s.self;
    if (s.d) {
        void **obj = *(void ***)((uint8_t *)self + 0x20);
        void (*fn)(uint32_t *, void **) = (void (*)(uint32_t *, void **))((void **)*obj)[1];
        fn(&l.out, obj);
        p = func_02081210(l.out << 12, s.d);
    }
    func_02068580(self, p);
}
