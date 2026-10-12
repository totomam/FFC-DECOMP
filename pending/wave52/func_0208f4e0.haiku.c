#include "ffc/types.h"

typedef struct { uint32_t f0; uint8_t *f4; } Ptr4;
typedef struct { uint8_t pad[0x6c]; uint32_t f6c; } Inner;
typedef struct { void (*fn)(void); uint32_t pad; int cnt; } Queue;

extern int func_020876c0(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0208fddc(int x);
extern void func_0209bed4(void);
extern uint8_t data_02144828[];
extern Ptr4 data_02141510;
extern uint32_t data_021447e0;
extern uint32_t data_02144804;
extern Queue data_021446d0;
extern void (*data_021446e0[])(void);

void func_0208f4e0(void)
{
    if (func_020876c0(data_02144828) == 0) {
        data_021447e0 = ((Inner *)data_02141510.f4)->f6c;
        data_02144804 = 1;
    } else {
        if (data_021447e0 == ((Inner *)data_02141510.f4)->f6c) {
            data_02144804 = data_02144804 + 1;
        } else {
            func_0208763c(data_02144828);
            data_021447e0 = ((Inner *)data_02141510.f4)->f6c;
            data_02144804 = 1;
        }
    }

    if (data_021446d0.cnt > 0) {
        do {
            data_021446d0.cnt = data_021446d0.cnt - 1;
            data_021446e0[data_021446d0.cnt]();
        } while (data_021446d0.cnt > 0);
    }

    data_02144804 = data_02144804 - 1;
    if (data_02144804 == 0) {
        func_02087678(data_02144828);
    }

    if (data_021446d0.fn != 0) {
        data_021446d0.fn();
        data_021446d0.fn = 0;
    }

    func_0208fddc(0);
    func_0209bed4();
}
