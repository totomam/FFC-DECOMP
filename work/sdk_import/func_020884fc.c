/* From libntr libntr/libraries/os/src/os_alarm.c (thumb build): func_020884fc */
typedef unsigned long u32;
typedef unsigned long long int u64;
void func_02088f30();
typedef u32 OSIntrMode;
extern OSIntrMode func_02088978(void);
extern OSIntrMode func_0208898c(OSIntrMode state);
extern void func_02088f30(void);
typedef struct OSiAlarm OSAlarm;
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
void func_020884fc(OSAlarm * alarm, OSTick start, OSTick period, OSAlarmHandler handler, void * arg);
void func_020883ec(OSAlarm * alarm, OSTick fire);
void func_020883ec (OSAlarm * alarm, OSTick fire);
void func_020884fc (OSAlarm * alarm, OSTick start, OSTick period, OSAlarmHandler handler, void * arg)
{
u32 enabled;
((void) 0) ;
((void) 0) ;
((void) 0) ;
if (!alarm || alarm->handler) {
func_02088f30() ;
}
enabled = func_02088978();
alarm->period = period;
alarm->start = start;
alarm->handler = handler;
alarm->arg = arg;
func_020883ec(alarm, 0);
(void)func_0208898c(enabled);
}
