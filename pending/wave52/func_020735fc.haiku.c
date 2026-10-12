#include "ffc/types.h"

extern void *func_0207309c(void *p);
extern int32_t func_02092948(void *p, uint32_t a);
extern void func_020730a4(void *p, uint32_t a);
extern void *func_0205681c(uint32_t size);
extern void *func_0207300c(void *p, uint32_t a);

void func_020735fc(uint8_t *self, uint32_t a1, uint32_t a2) {
    int32_t i = 0;
    uint32_t off;

    if (*(int32_t *)(self + 0xa8) > 0) {
        do {
            off = (uint32_t)i << 2;
            if (func_02092948(func_0207309c(*(void **)(self + off + 0xac)), a1) == 0) {
                func_020730a4(*(void **)(self + off + 0xac), a2);
                goto done;
            }
            i++;
        } while (i < *(int32_t *)(self + 0xa8));
    }
done:
    if (i == *(int32_t *)(self + 0xa8)) {
        void *p = func_0205681c(0xc);
        if (p != 0) {
            p = func_0207300c(p, a1);
        }
        {
            void **arr = (void **)(self + 0xac);
            arr[i] = p;
        }
        func_020730a4(p, a2);
        *(int32_t *)(self + 0xa8) = *(int32_t *)(self + 0xa8) + 1;
    }
}
