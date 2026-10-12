/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t v[2]; };
extern "C" {
extern void func_02037598(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218de64(void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020ac698[];
extern Pair data_ov001_02194630;
}

struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual uint32_t v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(uint32_t *n);
};
extern "C" void func_ov001_0218a660(O *p) {
    func_02037598(p);
    uint32_t *n = (uint32_t *)func_0205681c(0x14);
    if (n != 0) {
        uint32_t r = p->v14();
        n[2] = 0;
        n[3] = 0x100b1;
        n[0] = (uint32_t)data_020ac698;
        n[4] = r;
    }
    p->v19(n);
    func_ov001_0218de64(p, 4, 1, 0);
    Pair *d = (Pair *)((uint8_t *)p + 0xf4);
    *d = data_ov001_02194630;
}
