#include "ffc/types.h"
extern void func_ov010_021bd420(void *p, int a, int b, int c, int d);
extern char data_ov010_021d163c;
void *func_ov010_021bdf7c(uint32_t *p, int a, int b, int c, uint8_t x, uint8_t y) {
    uint32_t i;
    func_ov010_021bd420(p, a, b, c, 0);
    p[0] = (uint32_t)&data_ov010_021d163c;
    p[0x42] = 0; p[0x43] = 0; p[0x44] = 0; p[0x45] = 0; p[0x46] = 0; p[0x47] = 0; p[0x49] = 0;
    ((uint8_t*)p)[0x134] = x;
    ((uint8_t*)p)[0x135] = y;
    for (i = 0; i < 3; i++) p[0x4a + i] = 0;
    return p;
}
