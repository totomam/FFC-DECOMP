/* cflags: -lang c++ -Cpp_exceptions on -noO4,p -O4 */
#include "ffc/types.h"
extern "C" {
extern void func_02097e24(void);
extern void func_0209710c(void*, void*);
extern char data_020b3178[];
}
struct Ios {
    uint8_t pad[0x20 - 0];
};
struct S { uint8_t ok, b; int *s; };
static inline uint8_t *bs(int *s) { return (uint8_t*)s + *(int*)(*s - 12); }
#define clr(b, v) do { \
    (b)[0x2e] = (v); \
    if (*(int*)((b) + 0x20) == 0) (b)[0x2e] |= 1; \
    if ((uint8_t)((b)[0x2f] & (b)[0x2e])) func_0209710c((b), data_020b3178); \
} while (0)
extern "C" S *func_02098c30(S *self, int *s) {
    self->ok = 0;
    self->b = 0;
    self->s = s;
    try {
        uint8_t *b = bs(s);
        uint8_t st = b[0x2e];
        if (st == 0) {
            if (*(int*)(b + 0x30) != 0) func_02097e24();
            b = bs(self->s);
            st = b[0x2e];
            if (st == 0) { self->ok = 1; return self; }
            clr(b, st | 4);
        } else {
            clr(b, st | 4);
        }
    } catch (...) {
        uint8_t *b = bs(self->s);
        if (!(uint8_t)(b[0x2e] & 4)) b[0x2e] |= 1;
        b = bs(self->s);
        if ((uint8_t)(b[0x2e] & b[0x2f])) throw;
    }
    return self;
}
