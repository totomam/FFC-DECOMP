#include "ffc/types.h"

typedef struct Obj {
    char pad0[0x30];
    void *f30;
    char pad1[0x14];
    void *f48;
    char pad2[0xc];
    void *f58;
} Obj;

typedef struct Tbl {
    char pad[0xc];
    uint8_t *bits;
} Tbl;

extern uint32_t func_0201bc54(const void *object, uint32_t index, uint32_t addend);
extern uint32_t func_0201e9a8(void *object);
extern uint32_t func_0201e9bc(void *object);
extern uint8_t func_0204f7a0(const void *object);
extern uint32_t func_02035ff4(void *object);
extern void func_02035f58(void *object);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint8_t func_02036360(const void *object);
extern void *func_02035fd0(void *object);
extern uint32_t func_020361f0(const void *object);
extern uint32_t func_0201ed80(void *object, uint32_t a, uint32_t b);
extern uint64_t func_0201b7b0(void *object);
extern uint64_t func_0201b80c(void *object);
extern uint32_t func_0201f184(void *object, void *p);
extern void *data_0213df18;
extern uint64_t data_0209def4;

uint32_t func_0201bd84(void *object, uint32_t msg, uint32_t extra) {
    Obj *obj = (Obj *)object;
    uint32_t i, flag, r7;
    uint8_t local_a[0x60];
    uint8_t local_b[0x60];

    if (msg == 0x14) {
        return func_0201e9a8(object);
    }
    if (msg > 0x14) {
        if (msg > 0x1c) {
            if (msg == 0x4e) {
                return func_0204f7a0(data_0213df18);
            }
            goto generic;
        }
        switch (msg) {
        case 0x15:
            return func_0201e9bc(object);
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
            goto generic;
        case 0x1a:
            if (func_0201ed80(object, 1, extra) == 0) {
                return 0;
            }
            {
                uint64_t a = func_0201b7b0(object);
                uint64_t b = func_0201b80c(object);
                return data_0209def4 >= (a - b);
            }
        case 0x1b:
            for (i = 0; i < 0x40; i++) {
                if (func_0201f184(object, (uint8_t *)obj->f48 + i * 0x18)) {
                    return 0;
                }
            }
            return 1;
        case 0x1c:
            return 1;
        default:
            goto generic;
        }
    }
    if (msg > 0xd || msg < 0xb) {
        goto generic;
    }
    if (msg == 0xb) {
        for (r7 = 1; r7 <= 0x95; r7++) {
            if (func_02035ff4((uint8_t *)obj->f58 + r7 * 0x60) != 0) {
                continue;
            }
            func_02035f58(local_a);
            flag = 0;
            for (i = 0; i < 0x64; i++) {
                func_0201f460(object, i, local_a);
                if (func_02036360(local_a) == r7) {
                    if (func_02035ff4(local_a)) {
                        flag = 1;
                    }
                }
            }
            if (flag == 0) {
                func_02035fd0(local_a);
                return 0;
            }
            func_02035fd0(local_a);
        }
        return 1;
    }
    for (r7 = 1; r7 <= 0x95; r7++) {
        if (func_020361f0((uint8_t *)obj->f58 + r7 * 0x60) >= 0x258) {
            continue;
        }
        func_02035f58(local_b);
        flag = 0;
        for (i = 0; i < 0x64; i++) {
            func_0201f460(object, i, local_b);
            if (func_02036360(local_b) == r7) {
                if (func_020361f0(local_b) >= 0x258) {
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            func_02035fd0(local_b);
            return 0;
        }
        func_02035fd0(local_b);
    }
    return 1;

generic:
    func_0201bc54(object, 0, msg);
    if (((Tbl *)obj->f30)->bits[msg >> 3] & (1u << (msg & 7))) {
        return 1;
    }
    return 0;
}
