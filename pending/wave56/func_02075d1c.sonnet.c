#include "ffc/types.h"

extern uint8_t *data_0213e1f8;
extern void func_02074de4(void *ctx, uint8_t idx, uint32_t *node);
extern void func_020235ac(void *out, uint32_t *obj, void *a, void *b);
extern void func_02056844(uint32_t *obj);
extern void func_02056858(void *arr);

struct Sys {
    uint8_t pad[0x4c];
    uint32_t count;
    uint32_t pad2;
    uint32_t **arr;
};

void func_02075d1c(struct Sys *s) {
    uint32_t i;
    uint32_t *obj;
    volatile uint32_t *v;
    volatile uint32_t *end;
    volatile uint32_t *t;
    uint32_t out1, out0, a1, b1, a2, b2;

    if (s->arr == 0) {
        return;
    }
    for (i = 0; i < s->count; i++) {
        if (s->arr[i] != 0) {
            if (s->arr[i][0] != 0) {
                v = &s->arr[i][1];
                end = (uint32_t *)s->arr[i][2];
                if (v != end) {
                    do {
                        t = (uint32_t *)*v;
                        func_02074de4(*(void **)(data_0213e1f8 + 0x40), (uint8_t)i, (uint32_t *)t[2]);
                        v = (uint32_t *)*v;
                        end = (uint32_t *)s->arr[i][2];
                    } while (v != end);
                }
            }
            a1 = s->arr[i][2];
            b1 = (uint32_t)&s->arr[i][1];
            func_020235ac(&out1, s->arr[i], &a1, &b1);
            obj = s->arr[i];
            if (obj != 0) {
                a2 = obj[2];
                b2 = (uint32_t)&obj[1];
                func_020235ac(&out0, obj, &a2, &b2);
                func_02056844(obj);
            }
            s->arr[i] = 0;
        }
    }
    func_02056858(s->arr);
    s->arr = 0;
}
