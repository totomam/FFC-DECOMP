#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_02035ff4(void *object);
extern void *func_02035fd0(void *object);
extern void func_02036750(void *object);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(const void *object, uint32_t index, void *output);
extern uint32_t func_02036a94(void *object, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0201f1a8(const void *object, uint32_t index, void *output);
extern void func_020367a8(void *object);
extern void *data_020b93b8;

void func_ov003_02167924(uint32_t *p)
{
    uint8_t buf1[0x60];
    uint8_t buf2[0x58];

    func_02035f58(buf1);
    func_0201f36c(data_020b93b8, p[6], buf1);
    if (func_02035ff4(buf1) == 0) {
        func_02035fd0(buf1);
        return;
    }
    func_02036750(buf2);
    func_0201f1f0(data_020b93b8, func_0201b924(data_020b93b8), buf2);
    if (func_02036a94(buf2, p[5], p[6], 0, 0) != 0) {
        func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), buf2);
        func_020367a8(buf2);
        func_02035fd0(buf1);
        return;
    }
    func_020367a8(buf2);
    func_02035fd0(buf1);
}
