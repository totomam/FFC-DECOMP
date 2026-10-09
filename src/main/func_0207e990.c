#include "ffc/nonleaf.h"
#ifdef __MWERKS__
typedef uint8_t *FfcVaList;
#define FFC_VA_START(arguments, last) \
    ((arguments) = (uint8_t *)(((uintptr_t)&(last) & ~(uintptr_t)3U) + \
                               ((sizeof(last) + 3U) & ~3U)))
#define FFC_VA_END(arguments) ((void)(arguments))
#else
#include <stdarg.h>
typedef va_list FfcVaList;
#define FFC_VA_START(arguments, last) va_start(arguments, last)
#define FFC_VA_END(arguments) va_end(arguments)
#endif
extern uint32_t func_02005e88(void *object, uint32_t first, FfcVaList *arguments);
extern uint32_t func_02091ad4(void *object, int32_t selector, uint32_t first,
                                 FfcVaList arguments);
extern uint32_t func_020529e4(uint32_t first, uint32_t second);
extern uint32_t func_02005f1c(void *object, uint32_t value);
extern uint32_t func_0207e0f4(void *object, uint32_t first, uint32_t second);

uint32_t func_0207e990(void *object, uint32_t second, uint32_t third, ...) {
#ifndef __MWERKS__
    (void)third;
#endif
    volatile uint32_t *arguments = &second;
    uint32_t result = 0;
    uint32_t actual_second = arguments[0];
    uint32_t actual_third = arguments[1];
    if (actual_second != 0) {
        uint32_t context[2];
        *(uint32_t *)((uint8_t *)object + 0x08) = actual_second;
        *(uint32_t *)((uint8_t *)object + 0x10) = (uint32_t)(uintptr_t)context;
        context[0] = actual_third;
        context[1] = 0;
        result = func_0207e0f4(object, 6, 1);
    }
    return result;
}
