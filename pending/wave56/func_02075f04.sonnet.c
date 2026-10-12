#include "ffc/types.h"

typedef struct Mid {
    uint8_t pad[0x2c];
    uint32_t f2c;
} Mid;

typedef struct Top {
    uint8_t pad[0x40];
    Mid *mid;
} Top;

typedef struct Obj {
    uint8_t pad[0x4c];
    uint32_t n;
    uint32_t pad2;
    void **arr;
} Obj;

extern Top *data_0213e1f8;
extern uint32_t func_02073870(void *);
extern void *func_02074d78(void *, uint32_t, uint32_t);
extern void func_02023514(void *, void *, void *, void *);
extern void func_02056858(void *);
extern void func_02056844(void *);

void func_02075f04(Obj *p) {
    uint8_t i;
    void *r5;
    void *c;
    uint32_t a;
    void *t;

    for (i = 0; i < p->n; i++) {
        r5 = p->arr[i];
        if (r5 == 0) {
            continue;
        }
        if (i == func_02073870(data_0213e1f8->mid->f2c)) {
            continue;
        }
        c = func_02074d78(data_0213e1f8->mid, i, 0);
        if (c != 0) {
            t = (uint8_t *)r5 + 4;
            do {
                func_02023514(&a, r5, &t, &c);
                c = func_02074d78(data_0213e1f8->mid, i, 0);
            } while (c != 0);
        }
        c = func_02074d78(data_0213e1f8->mid, i, 1);
        r5 = c;
        if (r5 != 0) {
            do {
                if (r5 != 0) {
                    func_02056858(*(void **)r5);
                    *(void **)r5 = 0;
                    func_02056844(r5);
                }
                c = func_02074d78(data_0213e1f8->mid, i, 1);
                r5 = c;
            } while (r5 != 0);
        }
    }
}
