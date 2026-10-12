#include "ffc/types.h"

extern uint8_t data_020ad958[];
extern void func_02022eb8(void *p);
extern void func_0202ae9c(void *p);
extern void func_02056844(void *p);

typedef struct S {
    void *vt;
    uint8_t pad0[0x2c];
    void *f30;
    uint8_t pad1[0x168];
    void *arr[0x261];
    uint32_t count;
} S;

static inline void **slot(S *s, uint32_t i) { return &s->arr[i]; }
static inline uint32_t *cnt(S *s) { return &s->count; }

S *func_0202bf74(S *s) {
    uint32_t i;
    s->vt = data_020ad958;
    for (i = 0; i < *cnt(s); i++) {
        if (*slot(s, i) != 0) {
            func_02022eb8(s->f30);
            if (*slot(s, i) != 0) {
                if (*slot(s, i) != 0) {
                    void **obj = (void **)*slot(s, i);
                    ((void (*)(void *))((void **)*obj)[1])(obj);
                }
                *slot(s, i) = 0;
            }
        }
    }
    func_0202ae9c(s);
    func_02056844(s);
    return s;
}
