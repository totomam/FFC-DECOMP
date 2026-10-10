#include "ffc/types.h"
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
extern uint32_t func_02086b20(void *object, uint32_t first, uint32_t second, uint32_t third);

uint32_t func_02086b04(void *object, uint32_t first, uint32_t second, ...) {
    FfcVaList arguments;
    uint32_t result;
    FFC_VA_START(arguments, second);
    result = func_02086b20(object, first, second, (uint32_t)(uintptr_t)arguments);
    FFC_VA_END(arguments);
    return result;
}
