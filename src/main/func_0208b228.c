#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t);

typedef struct {
    uint8_t pad[0x30];
    uint32_t f30;
    fn_t f34;
    uint32_t f38;
} S;

extern S data_02143540;

void func_0208b228(uint32_t x)
{
    fn_t fn = data_02143540.f34;
    uint32_t a = data_02143540.f38;
    data_02143540.f30 = 0;
    if (fn != 0) {
        data_02143540.f34 = 0;
        fn(x, a);
    }
}
