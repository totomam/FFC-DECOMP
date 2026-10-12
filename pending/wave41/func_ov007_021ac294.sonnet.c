/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef struct { uint8_t pad[0x14]; uint8_t sub[0x12]; uint8_t flag; uint8_t pad2[0x9]; uint8_t obj[1]; } T;
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_02056c4c(void *p);
extern "C" void *func_ov007_021ac2fc(void *a, S s, uint32_t z);
extern "C" void *func_0203b720(void);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" S data_ov007_021c52f8;

extern "C" void func_ov007_021ac294(uint8_t *a, uint32_t p1);
extern "C" void func_ov007_021ac294(uint8_t *a, uint32_t p1)
{
    uint8_t *s = a + 0x14;
    uint8_t flag = s[0x12];
    uint8_t *o = s + 0x1c;
    uint32_t r4;
    void *res;
    S tmp;

    if (flag != 0) func_0208763c(o);
    r4 = (*(uint32_t *)(s + 0x14) == 0);
    if (flag != 0) func_02087678(o);
    if (r4 == 0) func_02056c4c(a + 0x14);
    tmp = data_ov007_021c52f8;
    res = func_ov007_021ac2fc(a, tmp, p1);
    func_02056bc0(a + 0x14, func_0203b720());
    func_02056bc0(a + 0x14, res);
}
