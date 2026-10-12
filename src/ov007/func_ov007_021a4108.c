#include "ffc/types.h"

extern void func_0200a630(void *obj, const void *src);
extern void func_ov007_021a3d84(uint32_t val, uint32_t x, void *obj);
extern void *func_0200a678(void *object);
extern uint8_t data_ov007_021c41c4[];

void func_ov007_021a4108(uint8_t *a, uint8_t *b)
{
    switch (*(uint32_t *)(b + 0xc)) {
    case 0: {
        uint8_t s[12];
        uint32_t *p = (uint32_t *)(b + 0x14);
        func_0200a630(s, (uint8_t *)p + 4);
        func_ov007_021a3d84(*(uint32_t *)(a + (*(uint32_t *)(b + 0x10) << 2) + 0x104),
                            p[0], s);
        func_0200a678(s);
        break;
    }
    case 2: {
        uint8_t s[12];
        uint32_t *p = (uint32_t *)(b + 0x14);
        func_0200a630(s, (uint8_t *)p + 4);
        func_ov007_021a3d84(*(uint32_t *)(a + (*(uint32_t *)(b + 0x10) << 2) + 0x104),
                            p[0], s);
        func_0200a678(s);
        break;
    }
    case 1: {
        uint8_t s[12];
        func_0200a630(s, data_ov007_021c41c4);
        func_ov007_021a3d84(*(uint32_t *)(a + (*(uint32_t *)(b + 0x10) << 2) + 0x104),
                            0, s);
        func_0200a678(s);
        break;
    }
    }
}
