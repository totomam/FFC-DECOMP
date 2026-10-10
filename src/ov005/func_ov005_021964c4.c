#include "ffc/types.h"

extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(uint32_t a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t data_ov005_021992f4[];

void func_ov005_021964c4(uint8_t *obj) {
    uint32_t buf[3];
    func_02005988(buf, data_ov005_021992f4);
    func_02068ddc(*(uint32_t *)(obj + 0x84), buf);
    func_020059cc(buf);
}
