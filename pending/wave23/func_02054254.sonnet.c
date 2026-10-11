/* cflags: -lang c++ */
#include "ffc/types.h"
struct Data { uint32_t a; int32_t count; uint8_t *base; };
extern "C" {
extern Data data_0213e054;
struct Lock {
    int v;
    Lock() {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        uint16_t old = *ime;
        *ime = 0;
        v = (old != 0);
    }
    ~Lock() {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        uint16_t o = *ime;
        *ime = v;
    }
};
void func_02054254(void);
void func_02054254(void) {
    Lock l;
    data_0213e054.count--;
    if (data_0213e054.count == 0) {
        *(data_0213e054.base + 0x38) = 0;
    }
}
}
