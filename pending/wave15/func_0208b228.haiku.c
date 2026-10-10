#include "ffc/types.h"

typedef void (*fn_t)(void);

typedef struct {
    uint8_t pad[0x30];
    uint32_t f30;
    fn_t f34;
    uint32_t f38;
} S;

extern S data_02143540;

void func_0208b228(void)
{
    volatile S *p = &data_02143540;
    fn_t fn = p->f34;
    p->f38;
    p->f30 = 0;
    if (fn != 0) {
        p->f34 = 0;
        fn();
    }
}
