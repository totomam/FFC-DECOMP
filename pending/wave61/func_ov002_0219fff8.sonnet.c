#include "ffc/types.h"
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020ac618[];
typedef struct N { void *vt; uint32_t a; uint32_t b; uint32_t c; uint32_t d; void *e; uint32_t f; } N;
void *func_ov002_0219fff8(uint8_t *self, void **arr, uint32_t v) {
    void *list = func_0203b6fc();
    uint32_t i;
    for (i = 0; i < 6; i++) {
        if (arr[i] != 0) {
            N *n = (N *)func_0205681c(0x1c);
            if (n != 0) {
                void *x = arr[i];
                n->b = 0;
                n->c = 0x10111;
                n->vt = data_020ac618;
                n->d = 0;
                n->e = x;
                n->f = v;
            }
            func_02056bc0(list, func_02055a2c(*(void **)(self + 0xf0)));
        }
    }
    return list;
}
