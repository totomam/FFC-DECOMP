#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} FlagWord;

int func_02068680(void *p) {
    uint32_t v;
    FlagWord *w = (FlagWord *)((uint8_t *)p + 0x4c);
    if (w->flag == 0) {
        v = (uint32_t)(*(uint8_t *)((uint8_t *)p + 0x4c) << 24) >> 25;
    } else {
        v = *(uint32_t *)((uint8_t *)p + 0x50);
    }
    return v == 0;
}
