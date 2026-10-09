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

void func_02032dd0(void *object, uint32_t second, uint32_t third,
                       uint32_t fourth, uint32_t fifth, uint32_t sixth, ...) {
#ifndef __MWERKS__
    (void)third;
    (void)fifth;
    (void)sixth;
#endif
    volatile uint32_t *arguments = &second;
    *(uint32_t *)((uint8_t *)object + 0x84) = arguments[4];
    *(uint32_t *)((uint8_t *)object + 0x88) = arguments[0];
    *(uint32_t *)((uint8_t *)object + 0x8C) = arguments[1];
    func_02005f1c((uint8_t *)object + 0x90, fourth);
    *(uint32_t *)((uint8_t *)object + 0x9C) = arguments[3];
    *(uint32_t *)((uint8_t *)object + 0xA0) = 0;
    *(uint8_t *)((uint8_t *)object + 0xA4) = 1;
    *(uint32_t *)((uint8_t *)object + 0xA8) = 0;
    *(uint32_t *)((uint8_t *)object + 0xAC) = 0;
    *(uint8_t *)((uint8_t *)object + 0xA5) = 1;
}
