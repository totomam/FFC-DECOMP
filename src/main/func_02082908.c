extern unsigned int data_020b2948;
int func_02082268(void);
void func_021d9ad8(unsigned int a, void *b, int c, unsigned int d);
void func_020844ec(unsigned int a, void *b, int c, unsigned int d, int e);
void func_020849f4(void *a, int b, unsigned int c);

void func_02082908(void *a0, int a1, unsigned int a2)
{
    int r = func_02082268();
    unsigned int x = data_020b2948;
    if (x != (unsigned int)-1 && a2 > 0x30) {
        if (x > 3) {
            func_021d9ad8(x - 4, a0, r + a1, a2);
            return;
        }
        func_020844ec(x, a0, r + a1, a2, 1);
        return;
    }
    func_020849f4(a0, r + a1, a2);
}
