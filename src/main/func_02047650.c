#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern void func_0201d014(uint32_t, int, void *);
extern uint32_t func_0201bd84(uint32_t, int);
extern void func_02036c48(void *, uint32_t);
extern void func_02036c58(void *, uint32_t);
extern void func_02036c6c(void *, uint32_t);
extern void func_0201cff8(uint32_t, int, void *);
extern void func_0201cf34(uint32_t, void *);
extern uint32_t func_020159c8(uint32_t, int);
extern void func_02005988(void *, uint32_t);
extern void func_020511e8(void *, void *);
extern void *func_020059cc(void *object);
extern void func_02093bc8(void *, void *);
extern void func_0201ce70(uint32_t, void *);
extern void *func_0200a678(void *object);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr;

void func_02047650(int a)
{
    uint32_t *g = &data_020b93b8;
    struct {
        uint8_t s0[0xc];
        uint8_t sc[0xc];
        uint8_t s18[0x10];
        uint8_t s28[0x98];
    } f;
    uint8_t *psc;
    uint8_t *ps0;

    func_0201d014(*g, 1, f.s18);
    func_02036c48(f.s18, func_0201bd84(*g, 1));
    func_02036c58(f.s18, func_0201bd84(*g, 1));
    func_02036c6c(f.s18, func_0201bd84(*g, 1));
    func_0201cff8(*g, 1, f.s18);

    if (a) {
        uint32_t id;
        uint32_t v;
        void *p;
        func_0201cf34(*g, f.s28);
        if (func_0201bd84(*g, 1)) {
            id = 0x1ad;
        } else {
            id = 0x1ac;
        }
        ps0 = f.s0;
        v = func_020159c8(data_020b8e44, id);
        func_02005988(ps0, v);
        psc = f.sc;
        func_020511e8(psc, ps0);
        func_020059cc(ps0);
        if (((Hdr *)f.sc)->flag == 0) {
            p = psc + 2;
        } else {
            p = *(void **)(f.sc + 8);
        }
        func_02093bc8(f.s28, p);
        func_0201ce70(data_020b93b8, f.s28);
        func_0200a678(f.sc);
    }
}
