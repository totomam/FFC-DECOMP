/* From libntr libntr/libraries/gx/src/g3x.c (thumb build): func_02081f04 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
u32 cpsr;
u32 r[13];
u32 sp;
u32 lr;
u32 pc_plus4;
u32 sp_svc;
CPContext cp_context;
} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
OSThread * head;
OSThread * tail;
};
struct _OSThreadLink {
OSThread * prev;
OSThread * next;
};
struct _OSMutexQueue {
OSMutex * head;
OSMutex * tail;
};
struct _OSMutexLink {
OSMutex * next;
OSMutex * prev;
};
typedef enum {
OS_THREAD_STATE_WAITING = 0,
OS_THREAD_STATE_READY = 1,
OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor) (void *);
struct _OSThread {
OSContext context;
OSThreadState state;
OSThread * next;
u32 id;
u32 priority;
void * profiler;
OSThreadQueue * queue;
OSThreadLink link;
OSMutex * mutex;
OSMutexQueue mutexQueue;
u32 stackTop;
u32 stackBottom;
u32 stackWarningOffset;
OSThreadQueue joinQueue;
void * specific[3 ];
OSAlarm * alarmForSleep;
OSThreadDestructor destructor;
void * userParameter;
int systemErrno;
};
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterNDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
struct OSMutex {
OSThreadQueue queue;
OSThread * thread;
s32 count;
OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler) (void *);
struct OSiAlarm {
OSAlarmHandler handler;
void * arg;
u32 tag;
OSTick fire;
OSAlarm * prev;
OSAlarm * next;
OSTick period;
OSTick start;
};
typedef void (*MIDmaCallback) (void *);
void func_02084498(u32 dmaNo, void *dest, u32 data, u32 size, BOOL dmaEnable);
static inline void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size) {
func_02084498(dmaNo, dest, data, size, 1 );
}
void func_02084610(u32 dmaNo, void *dest, u32 data, u32 size,
MIDmaCallback callback, void *arg, BOOL dmaEnable);
static inline void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size,
MIDmaCallback callback, void *arg) {
func_02084610(dmaNo, dest, data, size, callback, arg, 1 );
}
void func_020849e0(u32 data, void * destp, u32 size);
static inline void MI_CpuFill32 (void * dest, u32 data, u32 size)
{
((void) 0) ;
((void) 0) ;
func_020849e0(data, dest, size);
}
extern u32 data_020b2948;
typedef void (*MINDmaCallback)(void *);
void func_021d9aa4(u32 ndmaNo, void *dest, u32 data, u32 size);
void func_021d9b10(u32 ndmaNo, void *dest, u32 data, u32 size,
MINDmaCallback callback, void *arg);
typedef u32 FATFSResult;
typedef u32 FATFSCommandID;
typedef struct FATFSCommandHeader {
FATFSCommandID command;
FATFSResult result;
u32 flags;
struct FATFSCommandHeader *next;
} FATFSCommandHeader;
typedef struct FATFSRequestBuffer {
union {
FATFSCommandHeader header;
u8 buffer[2048 ];
};
OSThread *thread;
void (*callback)(struct FATFSRequestBuffer *);
void *userdata;
struct FATFSRequestBuffer *next;
u8 padding[16];
} FATFSRequestBuffer;
extern void FATFSi_SetRequestBuffer(FATFSRequestBuffer *buffer,
void (*callback)(FATFSRequestBuffer *),
void *userdata);
void func_02081f04(void);
extern void DSP_SetPipeCallback(int port, void (*callback)(void *, int, int),
void *userdata);
void func_02081f04 (void)
{
int i;
if (data_020b2948 != ((u32) ~0) ) {
if (data_020b2948 > 3) {
func_021d9b10(data_020b2948 - 4, (void *)(0x04000000 + 0x330) , 0, 16,
0L , 0L );
func_021d9aa4(data_020b2948 - 4, (void *)(0x04000000 + 0x360) , 0, 96);
} else {
MI_DmaFill32Async(data_020b2948, (void *)(0x04000000 + 0x330) , 0, 16, 0L , 0L );
MI_DmaFill32(data_020b2948, (void *)(0x04000000 + 0x360) , 0, 96);
}
} else {
MI_CpuFill32((void *)(0x04000000 + 0x330) , 0, 16);
MI_CpuFill32((void *)(0x04000000 + 0x360) , 0, 96);
}
for (i = 0; i < 32; ++i) {
(*( REGType32v *) (0x04000000 + 0x4d0)) = 0;
}
}
