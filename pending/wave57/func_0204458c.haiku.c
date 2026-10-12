#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_02036154(void *object);
extern uint32_t func_02035ff4(void *object);
extern void *func_02035fd0(void *object);
extern uint32_t func_0203666c(void *object);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint8_t func_02036360(const void *object);
extern void *data_020b93b8;

uint32_t func_0204458c(uint32_t id, uint32_t a, uint32_t b) {
    uint8_t obj[0x60];
    int32_t i;

    func_02035f58(obj);
    func_0201f36c(data_020b93b8, id, obj);
    if (func_02036154(obj)) {
        if (b == 0 || func_02035ff4(obj)) {
            if (a == 0) {
                func_02035fd0(obj);
                return 1;
            }
            if (func_0203666c(obj)) {
                func_02035fd0(obj);
                return 1;
            }
        }
    }
    for (i = 0; i < 100; i++) {
        func_0201f460(data_020b93b8, i, obj);
        if (id == func_02036360(obj)) {
            if (func_02036154(obj)) {
                if (b == 0 || func_02035ff4(obj)) {
                    if (a == 0) {
                        func_02035fd0(obj);
                        return 1;
                    }
                    if (func_0203666c(obj)) {
                        func_02035fd0(obj);
                        return 1;
                    }
                }
            }
        }
    }
    func_02035fd0(obj);
    return 0;
}
