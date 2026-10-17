
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern int *func_ov001_0217c148(int a, int b, int c);
extern int func_ov000_0214f148(int a);
extern void func_ov000_021652a8(int a, int b, int c, const char *d, int e, int f);
extern char data_ov001_02191198[];
extern char data_ov001_021911c0[];
extern char data_ov001_021911ec[];
void func_ov001_0217c560(int a, int b, int c, int d, int e)
{
  int **new_var;
  int *p = func_ov001_0217c148(e, a, b);
  new_var = &p;
  if (p == 0)
  {
    func_ov000_021652a8(1, 0, 1, data_ov001_02191198, func_ov000_0214f148(a), b);
  }
  else
    if (d != 0)
  {
    *(*new_var) = 0x6a;
    func_ov000_021652a8(1, 0, 8, data_ov001_021911c0, func_ov000_0214f148(a), b);
    return;
  }
  func_ov000_021652a8(1, 0, 8, data_ov001_021911ec, func_ov000_0214f148(a), b);
}
