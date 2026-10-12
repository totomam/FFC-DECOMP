#include "ffc/types.h"

extern void *func_0207309c(void *p);
extern int32_t func_02092948(void *p, uint32_t a);
extern void func_020730a4(void *p, uint32_t a);
extern void *func_0205681c(uint32_t size);
extern void *func_0207300c(void *p, uint32_t a);

typedef struct { uint8_t pad[0xa8]; int32_t n; void *arr[1]; } S;

void func_020735fc(S *self, uint32_t a1, uint32_t a2) {
    int32_t i = 0;
    if (self->n > 0) {
        do {
            if (func_02092948(func_0207309c(self->arr[i]), a1) == 0) {
                func_020730a4(self->arr[i], a2);
                goto done;
            }
            i++;
        } while (i < self->n);
    }
done:
    if (i == self->n) {
        void *p = func_0205681c(0xc);
        if (p != 0) {
            p = func_0207300c(p, a1);
        }
        self->arr[i] = p;
        func_020730a4(p, a2);
        self->n = self->n + 1;
    }
}
