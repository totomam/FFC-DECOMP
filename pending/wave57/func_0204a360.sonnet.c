/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void m8(int a); virtual void m9(); virtual void m10(); };
extern "C" {

extern void *data_020b93b8;
extern void *data_0213df18;
extern uint8_t data_020b0174[];
extern void *data_020b8e44;
extern uint32_t data_020b016c[];

extern void func_0201cf34(void *a, void *b);
extern void *func_0204f7ec(void *o);
extern Obj *func_0203bb08(void *o, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *o, void *n);
extern uint32_t func_0203c250(void);
extern void func_02060e88(uint32_t a, uint32_t b);
extern uint32_t func_0201bd84(void *o, uint32_t id);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *o, uint32_t id);
extern void func_02005988(void *o, uint32_t v);
extern void *func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *o);
extern void *func_0201ce70(void *a, void *b);
extern void *func_0203b720(void *a);
extern uint32_t func_02060ecc(uint32_t a, uint32_t b);
extern void *func_02056aec(void *o);
extern void *func_02041db4(void *a, void *b, uint32_t c);

}
extern "C" void func_0204a360(uint8_t *self)
{
    uint32_t st[0x26];
    uint32_t loc[6];
    Obj *r6;
    void *r7;
    void *a;
    void *p;
    void *t;

    uint32_t sp8;
    uint32_t v0;
    uint32_t v1;

    void **g = &data_020b93b8;
    func_0201cf34(*g, st);
    if (((st[15] << 14) >> 31)) {
        t = func_0204f7ec(data_0213df18);
        r6 = func_0203bb08(t, data_020b0174, 1, 0, 0);
        r6->m8(3);
        r6->m10();
        func_02056bc0(self + 0x48, (void*)r6);
        func_02060e88(func_0203c250(), 0);
        if (((st[15] << 14) >> 31)) {
            if (func_0201bd84(*g, 0x23)) {
                                a = func_0205681c(0xb0);
                r7 = a;
                if (a) {
                    uint32_t x = func_020159c8(data_020b8e44, 0x41);
                    func_02005988(&loc[2], x);
                    loc[0] = 0x80;
                    loc[1] = 0x60;
                    r7 = func_02032d24(a, loc[0], loc[1], &loc[2], 4, 0);
                }
                func_02056bc0(self + 0x14, r7);
                if (a) {
                    func_020059cc(&loc[2]);
                }
                st[15] &= ~0x20000u;
            }
        }
        t = func_0201ce70(data_020b93b8, st);
        r7 = func_0203b720(t);
        sp8 = func_02060ecc(func_0203c250(), 1);
        t = func_02056aec((void*)r6);
        func_02056bc0(self + 0x14, t);
        func_02056bc0(self + 0x14, (void *)sp8);
        func_02056bc0(self + 0x14, r7);
    }
    p = func_0205681c(0x178);
    func_02056bc0(self + 0x14, p ? func_02041db4(p, self + 0xa8, 0) : 0);
    v0 = data_020b016c[0];
    v1 = data_020b016c[1];
    *(uint32_t *)(self + 0x80) = v0;
    *(uint32_t *)(self + 0x84) = v1;
}
