#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_0213e098;
extern Pair data_020b25b0;
extern Pair data_020b25b8;
extern uint32_t func_02055054(uint32_t);
extern int32_t func_ov007_021bf468(void);
extern int32_t func_020744cc(uint32_t);

void func_02073d8c(uint8_t *p) {
    *(uint32_t *)(p + 0x88) += func_02055054(data_0213e098);
    if (func_ov007_021bf468() != 3) {
        *(Pair *)(p + 0x90) = data_020b25b0;
        return;
    }
    if (func_020744cc(*(uint32_t *)(p + 0x80)) < (int32_t)*(uint32_t *)(p + 0x88)) {
        *(uint32_t *)(p + 0x8c) = 100;
        *(Pair *)(p + 0x90) = data_020b25b8;
        *(uint32_t *)(p + 0x84) = 2;
    }
}
