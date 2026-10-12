/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" uint32_t *func_ov003_02153470(void *a);
struct It { void **p; It(void **x) : p(x) {} };
inline void **bg(uint8_t *p) { return *(void ***)(p + 0xc4); }
inline void **ed(uint8_t *p) { return *(void ***)(p + 0xc4) + *(uint32_t *)(p + 0xc8); }
extern "C" void func_ov003_0215e13c(uint8_t *p) {
    if (p[0xd0] != 0) return;
    uint32_t r6 = *func_ov003_02153470(*(void **)(*(uint8_t **)(p + 0xa8) + 0x9c));
    It it(bg(p));
    const It &e = It(ed(p));
    if (it.p == e.p) return;
    do {
        void *o = *it.p;
        ((void (*)(void *, uint32_t))(**(void ***)o))(o, r6);
        it.p++;
    } while (it.p != ed(p));
}
