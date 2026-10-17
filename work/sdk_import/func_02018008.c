/* From libntr libntr/libraries/ctrdg/src/ctrdg_vib.c (thumb build): func_02018008 */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*VIBCartridgePulloutCallback) (void);
extern BOOL func_02018008(void);
typedef struct {
u32 current_pos;
u32 rest_pos;
u32 rest_tick;
u32 on_tick[6 ];
u32 off_tick[6 ];
BOOL is_enable;
u32 repeat_num;
u32 current_count;
VIBCartridgePulloutCallback cartridge_pullout_callback;
} VIBiPulseInfo;
BOOL func_02018008(void);
extern VIBiPulseInfo data_020b8df0 __attribute__ ((aligned(32))) ;
BOOL func_02018008 (void)
{
return data_020b8df0.is_enable;
}
