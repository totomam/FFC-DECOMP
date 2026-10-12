/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02054218(void *);
extern void func_02054380(void);
extern void func_020211d4(uint32_t, uint32_t);
extern void *func_0205681c(uint32_t);
extern void *func_020159c8(void *, uint32_t);
extern void func_02005988(void *, void *);
struct P { uint32_t a, b; };
extern void *func_02032d24(void *, P, void *, uint32_t, uint32_t);
extern void *func_020059cc(void *);
extern uint32_t func_02056aec(void *);
extern uint32_t func_02060634(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_0205f904(void *);
extern void func_02056bc0(void *, void *);
extern void *data_020b8e44;
extern P data_ov007_021c45f8;
extern void *data_0213df20;
void func_ov007_021a8d0c(void *p);
}
struct Str {
    uint32_t b[3];
    Str(void *s) { func_02005988(this, s); }
    ~Str() { func_020059cc(this); }
};
static inline void *mk(void *o, const Str &s) {
    return func_02032d24(o, data_ov007_021c45f8, (void*)&s, 4, 0);
}
extern "C" void func_ov007_021a8d0c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *obj;
    uint32_t a, r7, t8;
    func_02054218(p);
    func_02054380();
    func_020211d4(0x45, 0);
    if (*(void **)(self + 0xec) != 0) {
        obj = func_0205681c(0xb0);
        if (obj != 0) obj = mk(obj, Str(func_020159c8(data_020b8e44, 0x3c)));
    a = func_02056aec(p);
    r7 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
    t8 = func_0205f904(*(void **)(self + 0xdc));
    func_02056bc0(self + 0x14, obj);
    func_02056bc0(self + 0x14, (void *)t8);
    func_02056bc0(self + 0x14, (void *)r7);
    func_02056bc0(self + 0x14, (void *)a);
    } else {
        obj = func_0205681c(0xb0);
        if (obj != 0) obj = mk(obj, Str(func_020159c8(data_020b8e44, 0x3d)));
    a = func_02056aec(p);
    r7 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
    t8 = func_0205f904(*(void **)(self + 0xdc));
    func_02056bc0(self + 0x14, obj);
    func_02056bc0(self + 0x14, (void *)t8);
    func_02056bc0(self + 0x14, (void *)r7);
    func_02056bc0(self + 0x14, (void *)a);
    }
}
