#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
    uint8_t pad[3];
} Loc;

extern void func_0201440c(void);
extern void func_02016374(void *out, void *arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02021120(uint8_t v);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_0201a43c(void *a, int b);
extern void *func_0205681c(uint32_t size);
extern void *func_02076180(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_02049ae0(uint8_t *a) {
    Loc loc;
    Loc *l;
    void *p;

    func_0201440c();
    l = &loc;
    func_02016374(l, data_020b8e44);
    {
        uint8_t *r = (uint8_t *)func_02052d90(l->f4, l->f8);
        func_02021120(r[4]);
    }
    if (l->f4 != 0) {
        if (l->fc != 0) {
            func_02052d3c(l->f4, l->f8);
        }
        func_02052c04(l->f4);
    }
    func_02053290(l);
    func_0201a43c(*(void **)(a + 0x90), 1);
    p = func_0205681c(0x90);
    if (p != 0) {
        uint32_t *t = (uint32_t *)data_020b93b8;
        uint32_t idx = 0x71;
        p = func_02076180(p, t[idx], t[idx + 1]);
    }
    *(void **)(a + 0xac) = p;
    *(void **)data_020b8e44 = p;
    func_02056bc0(a + 0x48, *(void **)(a + 0xac));
}
