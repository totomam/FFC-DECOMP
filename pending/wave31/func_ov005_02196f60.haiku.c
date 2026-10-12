#include "ffc/types.h"

extern void *func_02005988(void *dst, void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint8_t data_ov005_021992f4[];
extern uint8_t data_ov005_02199310[];

void func_ov005_02196f60(uint8_t *obj, uint32_t flag) {
    uint8_t buf[0x24];

    if (*(void **)(obj + 0x80) == 0) {
        return;
    }
    if (flag == 0) {
        func_02005988(buf + 0xc, data_ov005_021992f4);
        func_02068ddc(*(void **)(obj + 0x80), buf + 0xc);
        func_020059cc(buf + 0xc);
    } else {
        func_02091b10(buf + 0x18, (uint32_t)data_ov005_02199310, flag);
        func_02005988(buf, buf + 0x18);
        func_02068ddc(*(void **)(obj + 0x80), buf);
        func_020059cc(buf);
    }
}
