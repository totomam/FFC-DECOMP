#include "ffc/types.h"

extern int32_t func_02087460(void);
extern void func_0204a23c(void *p);
extern uint32_t data_020b012c[];
extern uint32_t data_020b0144[];
extern uint32_t data_020b015c[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0204a2e8(uint8_t *p)
{
    Pair tmp;
    if (func_02087460() != 0) {
        func_0204a23c(data_020b012c);
    } else {
        func_0204a23c(data_020b0144);
    }
    tmp = *(Pair *)data_020b015c;
    *(Pair *)(p + 0x80) = tmp;
}
