/* From libntr libntr/libraries/os/src/os_mutex.c (thumb build): func_0208772c */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02088978(void);
extern OSIntrMode func_0208898c(OSIntrMode state);
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
typedef struct OSThreadInfo {
u16 isNeedRescheduling;
u16 irqDepth;
OSThread * current;
OSThread * list;
void * switchCallback;
} OSThreadInfo;
void func_02087058(OSThreadQueue * queue);
extern OSThreadInfo data_02141510;
static inline OSThreadInfo * OS_GetThreadInfo (void)
{
return &data_02141510;
}
static inline OSThread * OS_GetCurrentThread (void)
{
return OS_GetThreadInfo()->current;
}
struct OSMutex {
OSThreadQueue queue;
OSThread * thread;
s32 count;
OSMutexLink link;
};
static inline s32 OS_GetMutexCount(OSMutex *mutex) {
return (s32)(mutex->count & 0xffffff );
}
static inline void OS_DecreaseMutexCount(OSMutex *mutex) {
u32 type = (u32)(mutex->count & (0xff << 24) );
mutex->count--;
mutex->count = (s32)(type | (mutex->count & 0xffffff ));
}
static inline void OS_SetMutexType(OSMutex *mutex, u32 type) {
mutex->count = (s32)(type | (mutex->count & 0xffffff ));
}
static inline u32 OS_GetMutexType(OSMutex *mutex) {
return (u32)(mutex->count & (0xff << 24) );
}
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
void func_020877f4(OSThread * thread, OSMutex * mutex);
void func_0208772c(OSMutex *mutex, u32 type) {
OSIntrMode e = func_02088978();
OSThread *currentThread = OS_GetCurrentThread();
BOOL unlocked = 0 ;
((void) 0) ;
if (type != (0x00 << 24) && type != OS_GetMutexType(mutex)) {
((void)0) ;
(void)func_0208898c(e);
return;
}
switch (OS_GetMutexType(mutex)) {
case (0x10 << 24) :
case (0x30 << 24) :
if (mutex->thread == currentThread) {
OS_DecreaseMutexCount(mutex);
if (OS_GetMutexCount(mutex) == 0) {
unlocked = 1 ;
}
}
break;
case (0x20 << 24) :
OS_DecreaseMutexCount(mutex);
if (OS_GetMutexCount(mutex) == 0) {
unlocked = 1 ;
}
break;
default:
((void)0) ;
(void)func_0208898c(e);
return;
}
if (unlocked) {
func_020877f4(currentThread, mutex);
mutex->thread = 0L ;
OS_SetMutexType(mutex, (0x00 << 24) );
func_02087058(&mutex->queue);
}
(void)func_0208898c(e);
}
void func_020877f4 (OSThread * thread, OSMutex * mutex);
