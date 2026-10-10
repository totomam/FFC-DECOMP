/* cflags: -nointerworking */
#include "ffc/types.h"

extern void func_02052024(void *object);
extern uint8_t data_020b04c8[];

void *func_02052050(void *object) {
    *(uint32_t *)object = (uint32_t)data_020b04c8;
    func_02052024(object);
    return object;
}
