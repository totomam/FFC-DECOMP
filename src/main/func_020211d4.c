#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02007bf4(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b93e0[];
extern uint32_t data_020ad5c4[];

typedef struct {
    void *p;
    uint8_t f;
} Local;

void func_020211d4(uint32_t a, uint32_t b) {
    volatile Local l;
    l.p = data_020b93e0;
    l.f = 1;
    if (l.f) {
        func_0208763c(data_020b93e0);
    }
    if (data_020ad5c4[1] == a && b == 0) {
        if (l.f) {
            func_02087678(l.p);
        }
        return;
    }
    data_020ad5c4[1] = a;
    if (a != 0xFFFFFFFF) {
        func_02007bf4(a, b, 0);
    }
    if (l.f) {
        func_02087678(l.p);
    }
}
