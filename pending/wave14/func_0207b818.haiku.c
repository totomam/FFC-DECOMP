#include "ffc/types.h"

extern void func_0207be24(void);
extern uint32_t data_0213ecd0[];

uint64_t func_0207b818(uint32_t a) {
    if (data_0213ecd0[1] == 0) {
        func_0207be24();
        data_0213ecd0[1] = a;
    }
}
