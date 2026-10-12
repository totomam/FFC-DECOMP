#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void *func_02035e30(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);

typedef struct {
    uint32_t pad0;
    void *ptr4;
    void *ptr8;
    uint8_t flag;
} Inner;

void *func_02041bd4(void *a0) {
    uint8_t *base = (uint8_t *)a0;
    uint8_t *r4;

    func_0200d5ec(base + 0x1a8);
    r4 = base + 0x18c;
    if (((Inner *)r4)->ptr4 != 0) {
        if (((Inner *)r4)->flag != 0) {
            func_02052d3c(((Inner *)r4)->ptr4, ((Inner *)r4)->ptr8);
        }
        func_02052c04(((Inner *)r4)->ptr4);
    }
    func_02053290(r4);
    r4 = base + 0x90;
    func_02035e30(r4 + 0xd4);
    func_02035fd0(r4 + 0x74);
    r4 += 0x14;
    func_02035fd0(r4);
    func_02056db0(a0);
    return a0;
}
