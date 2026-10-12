#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c3b8c;
extern Pair data_ov007_021c3b94;
extern Pair data_ov007_021c3b9c;
extern void *data_020b8e44;
extern Pair data_ov007_021c3ba4;
extern void *func_02056aec(void);
extern void *func_020215a4(int a, int b);
extern void *func_0203b708(int a);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(int size);
extern void *func_ov007_021a939c(void *p);
extern void *func_ov007_021ad97c(void *p);
extern void *func_ov007_021a7960(void *p);
extern void *func_0202157c(int a, int b);
extern void *func_020159c8(void *obj, int n);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *buf, void *x, int y);
extern void func_020059cc(void *o);
extern void func_02033438(void *o, int x);

void func_ov007_021a1bc4(void *p)
{
    uint8_t *a = (uint8_t *)p;
    uint32_t state;

    *(Pair *)(a + 0x80) = data_ov007_021c3b8c;

    state = *(uint32_t *)(a + 0x8c);
    switch (state) {
    case 0: {
        uint32_t *q = *(uint32_t **)(a + 0x88);
        uint32_t w;
        *q = 0;
        w = *(uint32_t *)(a + 0xc);
        w = (w & ~0xffu) | 2;
        *(uint32_t *)(a + 0xc) = w;
        return;
    }
    case 1:
        *(uint8_t *)(a + 0x98) = 1;
        { *(Pair *)(a + 0x80) = data_ov007_021c3b94; }
        return;
    case 2:
        *(uint32_t *)(a + 0x90) = 0;
        { *(Pair *)(a + 0x80) = data_ov007_021c3b9c; }
        return;
    case 3: {
        void *q = *(void **)(a + 0x88);
        void *r6;
        void *r5;
        *(uint32_t *)q = 2;
        r6 = func_02056aec();
        r5 = func_020215a4(-1, 0x19);
        func_02056bc0(a + 0x14, func_0203b708(0x1e));
        func_02056bc0(a + 0x14, r5);
        func_02056bc0(a + 0x14, r6);
        return;
    }
    case 4: {
        void *r1 = func_0205681c(0x8c);
        if (r1 != 0) {
            r1 = func_ov007_021a939c(r1);
        }
        func_02056bc0(a + 0x14, r1);
        return;
    }
    case 5: {
        void *r1 = func_0205681c(0x8c);
        if (r1 != 0) {
            r1 = func_ov007_021ad97c(r1);
        }
        func_02056bc0(a + 0x14, r1);
        return;
    }
    case 6: {
        void *r1 = func_0205681c(0x16c);
        if (r1 != 0) {
            r1 = func_ov007_021a7960(r1);
        }
        func_02056bc0(a + 0x14, r1);
        func_02056bc0(a + 0x14, func_0202157c(0x45, 0));
        return;
    }
    case 7: {
        void *r6;
        int have = 0;
        uint32_t loc[3];
        r6 = func_0205681c(0xb8);
        if (r6 != 0) {
            void *r0 = func_020159c8(*(void **)data_020b8e44, 0x10c);
            func_02005988(loc, r0);
            r6 = func_02033338(r6, loc, a + 0x94, 0);
            have = 1;
        }
        if (have) {
            func_020059cc(loc);
        }
        func_02033438(r6, 1);
        func_02056bc0(a + 0x14, r6);
        { *(Pair *)(a + 0x80) = data_ov007_021c3ba4; }
        return;
    }
    default:
        return;
    }
}
