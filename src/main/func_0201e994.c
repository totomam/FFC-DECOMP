#include "ffc/types.h"

extern uint32_t func_0201e920(const void *object);
extern uint32_t func_0201e97c(const void *object);

uint32_t func_0201e994(const void *object) {
    uint32_t a = func_0201e920(object);
    return a - func_0201e97c(object);
}
