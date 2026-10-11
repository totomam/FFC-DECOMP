#include "ffc/types.h"

extern void func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern void func_ov000_02167d20(void *a, void *b, void *c, uint32_t d);
extern void func_ov007_021c0918(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c9238[];
extern uint8_t data_ov007_021c92f8[];
extern uint8_t data_ov007_021c9300[];

int func_ov007_021c0bec(void *p) {
    uint32_t *s = *(uint32_t **)((uint8_t *)p + 8);
    func_ov000_02167c24(*(void **)((uint8_t *)p + 0x18), data_ov007_021c9238, data_ov007_021c92f8, s[0]);
    func_ov000_02167d20(*(void **)((uint8_t *)p + 0x18), data_ov007_021c9238, data_ov007_021c9300, s[1]);
    func_ov007_021c0918(p, s[2], s[3]);
    return 0;
}
