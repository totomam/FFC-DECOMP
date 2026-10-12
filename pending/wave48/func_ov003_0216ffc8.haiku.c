#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;

extern int32_t func_0201c9ac(void *obj, uint32_t which);
extern int32_t func_0201bd84(void *obj, uint32_t which);
extern void func_02017754(void *out, void *in);
extern void *func_02052d90(void *a, void *b);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *obj);
extern void *func_0205681c(uint32_t size);
extern void func_ov003_02166b64(void *p, void *a, int state, int one,
                                uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                                uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7,
                                uint32_t s8, uint32_t s9, uint32_t s10,
                                uint32_t s11, uint32_t s12, uint32_t s13, uint32_t s14);

typedef struct {
    uint32_t w0;
    void *a;
    void *b;
    uint8_t f;
} S;

int func_ov003_0216ffc8(void *a, uint32_t mode, int flag) {
    int state;
    int idx;
    int r6;
    int r7;
    S s;
    void *m;
    void *obj;

    if (flag != 0) {
        state = 2;
        idx = 0;
        switch (mode) {
        case 0: {
            int b = func_0201c9ac(data_020b93b8, 0xb) - 1;
            int dd = func_0201c9ac(data_020b93b8, 0xd) - 1;
            int c = func_0201c9ac(data_020b93b8, 0xc) - 1;
            idx = b * 9 + dd * 3 + c;
            break;
        }
        case 1: {
            int t = func_0201c9ac(data_020b93b8, 0xa);
            if (t == 6) {
                t = 5;
            } else if (t == 8) {
                t = 6;
            }
            idx = t + 0x19;
            break;
        }
        case 2: {
            int t = func_0201bd84(data_020b93b8, 0x25);
            int u = func_0201bd84(data_020b93b8, 0x26);
            idx = t + 0x1f + u * 2;
            break;
        }
        }
        r7 = 1;
        r6 = 0x1e;
    } else {
        state = 3;
        idx = 0;
        r7 = 3;
        r6 = 0xc;
    }

    func_02017754(&s, data_020b8e44);
    m = func_02052d90(s.a, s.b);
    idx = *(uint16_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x10) + idx * 2);

    if (s.a != 0) {
        if (s.f != 0) {
            func_02052d3c(s.a, s.b);
        }
        func_02052c04(s.a);
    }
    func_02053290(&s);

    obj = func_0205681c(0xb8);
    if (obj != 0) {
        func_ov003_02166b64(obj, a, state, 1, idx, idx, 0, 0, r7, r7, 0, 0, r6, 0xc, 0,
                            (uint32_t)a, (uint32_t)state, 0, 0);
    }
    return 0;
}
