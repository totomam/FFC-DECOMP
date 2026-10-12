#include "ffc/types.h"

extern int32_t func_ov002_021a1ac4(void *object);
extern int32_t func_ov002_021a16fc(void *object);
extern void *func_0203b688(void);
extern void *func_ov002_021a16d4(void *object);
extern void *func_ov002_02196414(void *object);
extern uint32_t func_0203b708(uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021a1814(void *object, int32_t value);
extern uint32_t func_ov002_0219ffe8(void *object);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void *func_ov002_021c9204(uint32_t a, uint32_t b, uint32_t c);
extern void *func_02055a2c(void *object, void *node);
extern void *func_ov002_021a13d0(void *object, int32_t value);
extern uint32_t data_0209df54;
extern uint32_t data_0209df20;

#define FIELD_PTR(base, off) (*(void **)((uint8_t *)(base) + (off)))
#define FIELD_U32(base, off) (*(uint32_t *)((uint8_t *)(base) + (off)))

void *func_ov002_021abef0(void *param_0)
{
    int32_t vals[2];
    int32_t total = 0;
    void *node;
    int32_t i;
    int32_t k;
    int32_t flag;
    void *o;
    uint32_t c_val;
    int32_t cur;
    uint32_t c10;
    void *res;

    for (i = 0; i < 2; i++) {
        vals[i] = func_ov002_021a16fc(i != 0 ? (void *)func_ov002_021a1ac4(FIELD_PTR(param_0, 0xbc)) : FIELD_PTR(param_0, 0xbc));
        total += vals[i];
    }
    total /= 2;
    node = func_0203b688();

    if (vals[0] == total && vals[1] == total) {
        if (FIELD_U32(func_ov002_02196414(func_ov002_021a16d4(FIELD_PTR(param_0, 0xbc))), 0x308) != 1) {
            func_02056bc0(node, (void *)func_0203b708(data_0209df54));
        }
    } else {
        c_val = data_0209df20;
        c10 = 0x429;
        c10 -= 2;

        for (k = 0; k < 2; k++) {
            o = k != 0 ? (void *)func_ov002_021a1ac4(FIELD_PTR(param_0, 0xbc)) : FIELD_PTR(param_0, 0xbc);
            res = func_ov002_021a1814(o, total);
            func_02056bc0(node, res);

            cur = vals[k];
            if (total != cur) {
                flag = func_ov002_0219ffe8(o) != 0 ? 1 : 0;
                if (total > cur) {
                    if (FIELD_U32(func_ov002_02196414(func_ov002_021a16d4(FIELD_PTR(param_0, 0xbc))), 0x308) != 1) {
                        func_02056bc0(node, func_02021610(0x429, 0));
                    }
                    res = func_ov002_021c9204(0, flag, 0);
                } else {
                    if (FIELD_U32(func_ov002_02196414(func_ov002_021a16d4(FIELD_PTR(param_0, 0xbc))), 0x308) != 1) {
                        func_02056bc0(node, func_02021610(c10, 0));
                    }
                    res = func_ov002_021c9204(0, flag, 1);
                }
                func_02056bc0(node, func_02055a2c(FIELD_PTR(param_0, 0xb8), res));
            }

            res = func_ov002_021a13d0(o, 0);
            func_02056bc0(node, res);

            if (k == 0) {
                if (FIELD_U32(func_ov002_02196414(func_ov002_021a16d4(FIELD_PTR(param_0, 0xbc))), 0x308) != 1) {
                    func_02056bc0(node, (void *)func_0203b708(c_val));
                }
            }
        }
    }
    return node;
}
