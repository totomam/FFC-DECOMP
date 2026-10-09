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

extern uint32_t ffc_arm9_02005e88(void *object, uint32_t first, FfcVaList *arguments);
extern uint32_t ffc_arm9_02091ad4(void *object, int32_t selector, uint32_t first,
                                 FfcVaList arguments);
extern uint32_t ffc_arm9_020529e4(uint32_t first, uint32_t second);
extern uint32_t ffc_arm9_02005f1c(void *object, uint32_t value);
extern uint32_t ffc_arm9_0207e0f4(void *object, uint32_t first, uint32_t second);

uint32_t ffc_arm9_02005efc(void *object, uint32_t first, ...) {
    uint32_t result;
    FfcVaList arguments;
    FFC_VA_START(arguments, first);
    result = ffc_arm9_02005e88(object, first, &arguments);
    FFC_VA_END(arguments);
    return result;
}

uint32_t ffc_arm9_02086ad4(void *object, uint32_t first, ...) {
    uint32_t result;
    FfcVaList arguments;
    FFC_VA_START(arguments, first);
    result = ffc_arm9_02086af0(object, first, (uint32_t)(uintptr_t)arguments);
    FFC_VA_END(arguments);
    return result;
}

uint32_t ffc_arm9_02091b10(void *object, uint32_t first, ...) {
    uint32_t result;
    FfcVaList arguments;
    FFC_VA_START(arguments, first);
    result = ffc_arm9_02091ad4(object, -1, first, arguments);
    FFC_VA_END(arguments);
    return result;
}

uint32_t ffc_arm9_0207e990(void *object, uint32_t second, uint32_t third, ...) {
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
        result = ffc_arm9_0207e0f4(object, 6, 1);
    }
    return result;
}

void ffc_arm9_02032dd0(void *object, uint32_t second, uint32_t third,
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
    ffc_arm9_02005f1c((uint8_t *)object + 0x90, fourth);
    *(uint32_t *)((uint8_t *)object + 0x9C) = arguments[3];
    *(uint32_t *)((uint8_t *)object + 0xA0) = 0;
    *(uint8_t *)((uint8_t *)object + 0xA4) = 1;
    *(uint32_t *)((uint8_t *)object + 0xA8) = 0;
    *(uint32_t *)((uint8_t *)object + 0xAC) = 0;
    *(uint8_t *)((uint8_t *)object + 0xA5) = 1;
}

void *ffc_arm9_02053260(void *object, ...) {
#ifdef __MWERKS__
    uint32_t *arguments = (uint32_t *)(&object + 1);
#else
    FfcVaList list;
    uint32_t *arguments;
    FFC_VA_START(list, object);
    arguments = (uint32_t *)list;
#endif
    void *self = object;
    *(uint32_t *)self = ffc_arm9_020529e4(arguments[0], arguments[1]);
#ifndef __MWERKS__
    FFC_VA_END(list);
#endif
    return self;
}
