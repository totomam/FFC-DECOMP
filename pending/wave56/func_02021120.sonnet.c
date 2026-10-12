/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void);
extern "C" void func_02087678(void *p);
extern "C" void func_0202111c(void);
extern "C" void func_02007bd4(void);
extern "C" void func_02007bdc(void *a, uint32_t c, void *b, uint32_t d);
extern "C" void func_02007c14(uint32_t x);
extern "C" void func_02007c0c(uint32_t x);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void func_02054b18(void *p, uint32_t a, uint32_t b);
extern "C" void func_02054680(void *p, uint32_t a, uint32_t b);
extern "C" void func_02054b98(void *p);
extern "C" void func_02054714(void *p);

extern "C" uint8_t data_020b93e0[];
extern "C" uint8_t data_020b93d4[];
extern "C" uint8_t data_020b9400[];
extern "C" uint8_t data_020ad6a8[];
extern "C" uint8_t data_020ad684[];
extern "C" uint8_t data_020ad69c[];

struct S {
    void *p; volatile uint8_t f;
    S(void *q) { p = q; f = 1; if (f != 0) func_0208763c(); }
    ~S() { if (f != 0) func_02087678(p); }
};

extern "C" void func_02021120(void) {
    S loc(data_020b93e0);
    uint8_t *obj;

    if (data_020b93d4[0] != 0) {
        return;
    }
    data_020b93d4[0] = 1;
    func_0202111c();
    func_02007bd4();
    func_02007bdc(data_020b9400, 1u << 19, data_020ad6a8, 1);
    func_02007c14(0x65);
    func_02007c0c(0x65);
    obj = (uint8_t *)func_0205681c(0x18);
    if (obj != 0) {
        func_02054b18(obj, 0, 0);
        func_02054680(obj + 0xc, 2, 0);
        *(void **)obj = data_020ad684;
        *(void **)(obj + 0xc) = data_020ad69c;
        func_02054b98(obj);
        func_02054714(obj + 0xc);
    }
}
