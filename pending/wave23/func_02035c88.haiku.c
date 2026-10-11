#include "ffc/types.h"

extern void func_02035c3c(void *object, uint32_t value);
extern void func_02035c4c(void *object, uint32_t value);
extern void func_02035c60(void *object, uint32_t value);
extern void func_02035c74(void *object, uint32_t value);

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
    uint16_t e;
} func_02035c88_S;

void func_02035c88(void *object, func_02035c88_S *p) {
    if (p) {
        func_02035c3c(object, p->b);
        func_02035c4c(object, p->c);
        func_02035c60(object, p->d);
        func_02035c74(object, p->e);
    }
}
