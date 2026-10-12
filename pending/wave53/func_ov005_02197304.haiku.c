#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern char data_ov005_0219932c[];
extern char data_ov005_02199330[];
extern char data_ov005_02199334[];
extern char data_ov005_02199338[];
extern char data_ov005_0219933c[];
extern char data_ov005_02199340[];

void func_ov005_02197304(uint8_t *obj, int32_t id)
{
    int8_t buf[8];
    int8_t out[12];
    int8_t *p;

    if (id == 0xffff) {
        func_02091b10(buf, (uint32_t)data_ov005_0219932c, id);
    } else if (id == 0xfffe) {
        func_02091b10(buf, (uint32_t)data_ov005_02199330, id);
    } else if (id == 0xfffd) {
        func_02091b10(buf, (uint32_t)data_ov005_02199334, id);
    } else if (id == 0xfffc) {
        func_02091b10(buf, (uint32_t)data_ov005_02199338, id);
    } else {
        if (id > 999) {
            id = 999;
        }
        if (obj[0x88]) {
            func_02091b10(buf, (uint32_t)data_ov005_0219933c, id);
        } else {
            func_02091b10(buf, (uint32_t)data_ov005_02199340, id);
        }
        if (obj[0x89] && buf[0]) {
            p = buf;
            while (*p != 0) {
                int32_t d = (int32_t)(*(uint32_t *)(obj + 0x84) << 29) >> 24;
                *p = (int8_t)(*p + d);
                p++;
            }
        }
    }
    func_02005988(out, buf);
    func_02068ddc(*(void **)(obj + 0x80), out);
    func_020059cc(out);
}
