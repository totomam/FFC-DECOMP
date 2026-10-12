#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, uint32_t src);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0205e29c(void *obj, uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205e240(void *obj, void *b, uint32_t c, uint32_t d, uint32_t e);
extern const uint32_t data_ov013_021c3f48[];
extern void *data_0213df18;
extern const uint32_t data_ov013_021c37ec[][4];

#define FIELD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

void func_ov013_021bd11c(uint8_t *p, uint32_t arg)
{
    uint32_t r4 = 2;
    uint32_t r7 = 0;
    uint32_t r6;
    void *obj;
    void *s;
    uint32_t b1[3];
    uint32_t b2[3];

    if (*(uint8_t *)(*(uint8_t **)(p + 0xc8) + 0x5c) == 0) {
        r4 = 1;
    }

    if (r4 != FIELD(p, 0xec, uint32_t) || FIELD(p, 0xdc, void *) == 0) {
        void *old6 = FIELD(p, 0xdc, void *);
        FIELD(p, 0xec, uint32_t) = r4;
        {
            uint32_t t = 0;
            if (FIELD(p, 0xe4, uint32_t) != 1) {
                t = 1;
            }
            FIELD(p, 0xe4, uint32_t) = t;
        }

        r7 = 0;
        s = func_0205681c(0x70);
        if (s != 0) {
            func_02005988(b1, data_ov013_021c3f48[r4]);
            r7 = 1;
            s = func_0205e29c(s, func_0204f7d4(data_0213df18), b1, FIELD(p, 0xe4, uint32_t), 0, 0);
        }
        FIELD(p, 0xdc, void *) = s;
        if (r7) {
            func_020059cc(b1);
        }
        obj = FIELD(p, 0xdc, void *);
        {
            void **vt = *(void ***)obj;
            ((void (*)(void *, uint32_t))vt[8])(obj, 3);
        }
        obj = FIELD(p, 0xdc, void *);
        {
            void **vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
        }
        func_02056bc0(p + 0x48, FIELD(p, 0xdc, void *));
        if (old6 != 0) {
            FIELD(old6, 0xc, uint32_t) = (FIELD(old6, 0xc, uint32_t) & ~0xffu) | 2;
        }
    }

    if (!(arg == FIELD(p, 0xe8, uint32_t) && FIELD(p, 0xd8, void *) != 0)) {
        void *old4 = FIELD(p, 0xd8, void *);
        FIELD(p, 0xe8, uint32_t) = arg;
        {
            uint32_t t = 0;
            if (FIELD(p, 0xe0, uint32_t) != 1) {
                t = 1;
            }
            FIELD(p, 0xe0, uint32_t) = t;
        }

        r6 = 0;
        s = func_0205681c(0x70);
        r7 = (uint32_t)s;
        if (s != 0) {
            func_02005988(b2, data_ov013_021c37ec[*(uint8_t *)(*(uint8_t **)(p + 0xc8) + 0x5c)][FIELD(p, 0xe8, uint32_t)]);
            r6 = 1;
            s = func_0205e240(s, b2, FIELD(p, 0xe0, uint32_t), 0, 0);
            r7 = (uint32_t)s;
        }
        FIELD(p, 0xd8, void *) = s;
        if (r6) {
            func_020059cc(b2);
        }
        obj = FIELD(p, 0xd8, void *);
        {
            void **vt = *(void ***)obj;
            ((void (*)(void *, uint32_t))vt[8])(obj, 3);
        }
        obj = FIELD(p, 0xd8, void *);
        {
            void **vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
        }
        func_02056bc0(p + 0x48, FIELD(p, 0xd8, void *));
        if (old4 != 0) {
            FIELD(old4, 0xc, uint32_t) = (FIELD(old4, 0xc, uint32_t) & ~0xffu) | 2;
        }
    }
}
