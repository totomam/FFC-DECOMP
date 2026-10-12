#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02007c24(void);
extern void func_02087678(void *p);

typedef struct {
    uint32_t a;
    int32_t cnt;
} G;

extern uint32_t data_020b93e0;
extern G data_020b93d4;

void func_020214f8(void)
{
    volatile struct {
        void *p;
        uint8_t f;
    } loc;

    loc.p = &data_020b93e0;
    loc.f = 1;
    if (loc.f != 0) {
        func_0208763c();
    }
    if (--data_020b93d4.cnt == 0) {
        func_02007c24();
    }
    if (loc.f != 0) {
        func_02087678(loc.p);
    }
}
