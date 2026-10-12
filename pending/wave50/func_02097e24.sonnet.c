/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct B { uint8_t pad[0x20]; void *buf; uint8_t pad2[0xa]; uint8_t st; uint8_t ex; };
static inline B *gb(uint8_t *s) { return (B *)(s + *(int32_t *)(*(uint32_t *)s - 12)); }
static inline void ss(uint8_t *s, uint8_t f) { gb(s)->st |= f; }
static inline uint8_t ex(uint8_t *s) { return gb(s)->ex; }
static inline void sb(B *b, uint8_t f) { b->st = (uint8_t)(b->st | f); if (b->buf == 0) b->st = (uint8_t)(b->st | f); }
extern "C" {
void func_02098c30(void *dst, void *src);
void func_0209d27d_unk(void);
void func_0209cc64(void *p);
void func_0209710c(void *obj, void *arg);
void func_02098d4c(void *p);
extern uint8_t data_020b3178[];
void *func_02097e24(void *p);
}
void *func_02097e24(void *p)
{
    uint8_t guard[8];
    uint8_t *self = (uint8_t *)p;
    func_02098c30(guard, p);
    guard[1] = 1;
    B *o = gb(self);
    void *inner = o->buf;
    if (inner != 0) {
        int32_t found = 0;
        try {
            Num found0(found);
            int32_t res = ((int32_t (*)(void *))(*(void ***)inner)[5])(inner);
            if (res == diff(found0, 1)) found = 1;
        } catch (...) {
            ss(self, 1);
            if ((uint8_t)(ex(self) & 1)) func_0209d27d_unk();
        }
    if (found != 0) {
        B *b = gb(self);
        sb(b, 1);
        if ((uint8_t)(b->ex & b->st)) func_0209710c(b, data_020b3178);
    }
    }
    func_02098d4c(guard);
    return p;
}
