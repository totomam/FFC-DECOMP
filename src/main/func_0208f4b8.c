#include "ffc/types.h"

extern void func_0209ccac(void);
extern uint32_t func_0208f4e0(uint32_t p);

typedef struct {
    uint32_t a;
    void (*fn)(void);
    uint32_t b;
    uint32_t c;
} Glob;

extern Glob data_021446d0;

uint32_t func_0208f4b8(uint32_t p) {
    if (data_021446d0.c == 0) {
        func_0209ccac();
        if (data_021446d0.fn != 0) {
            data_021446d0.fn();
            data_021446d0.fn = 0;
        }
    }
    return func_0208f4e0(p);
}
