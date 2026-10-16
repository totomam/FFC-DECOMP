/* cflags: -lang c++ -noO4,p -O4 -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" {
extern void func_02098c30(void *a, void *b);
extern void func_0209d27d_unk(void);
extern void func_0209cc64(void *a);
extern void func_0209710c(void *a, void *b);
extern void func_02098d4c(void *a);
extern char data_020b3178[];
}
typedef int (*Fn)(void*);
struct S { uint8_t pad[0x20]; void *sb; uint8_t pad2[0xa]; uint8_t st; uint8_t ex; };
#define B(p) ((S*)((p) + ((int*)*(int*)(p))[-3]))
extern "C" void *func_02097e24(void *is)
{
    uint8_t buf[8];
    uint8_t *p = (uint8_t*)is;
    int eof;
    func_02098c30(buf, is);
    buf[1] = 1;
    void *sb = B(p)->sb;
    if (sb) {
        eof = 0;
        try {
            if ((*(Fn**)sb)[5](sb) == eof - 1) eof = 1;
        } catch (...) {
            B(p)->st = (uint8_t)(B(p)->st | 1);
            if ((uint8_t)(B(p)->ex & 1)) func_0209d27d_unk();
        }
        if (eof) {
            S *vb = B(p);
            vb->st = (uint8_t)(vb->st | 1);
            if (vb->sb == 0) vb->st = (uint8_t)(vb->st | 1);
            if ((uint8_t)(vb->ex & vb->st)) func_0209710c(vb, data_020b3178);
        }
    }
    func_02098d4c(buf);
    return is;
}
