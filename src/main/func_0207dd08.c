/* From libntr libntr/libraries/fs/src/fs_archive.c (thumb build): func_0207dd08 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
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
typedef enum FSResult {
FS_RESULT_SUCCESS = 0,
FS_RESULT_FAILURE,
FS_RESULT_BUSY,
FS_RESULT_CANCELED,
FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
FS_RESULT_UNSUPPORTED,
FS_RESULT_ERROR,
FS_RESULT_INVALID_PARAMETER,
FS_RESULT_NO_MORE_RESOURCE,
FS_RESULT_ALREADY_DONE,
FS_RESULT_PERMISSION_DENIED,
FS_RESULT_MEDIA_FATAL,
FS_RESULT_NO_ENTRY,
FS_RESULT_MEDIA_NOTHING,
FS_RESULT_MEDIA_UNKNOWN,
FS_RESULT_BAD_FORMAT,
FS_RESULT_MAX,
FS_RESULT_PROC_ASYNC = 256,
FS_RESULT_PROC_DEFAULT,
FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef enum FSSeekFileMode {
FS_SEEK_SET,
FS_SEEK_CUR,
FS_SEEK_END
} FSSeekFileMode;
typedef u32 FSCommandType;
struct FSArchive;
struct FSFile;
typedef struct FSDateTime {
u32 year;
u32 month;
u32 day;
u32 hour;
u32 minute;
u32 second;
} FSDateTime;
typedef struct FSDirectoryEntryInfo {
char shortname[16 ];
u32 shortname_length;
char longname[260 ];
u32 longname_length;
u32 attributes;
FSDateTime atime;
FSDateTime mtime;
FSDateTime ctime;
u32 filesize;
u32 id;
} FSDirectoryEntryInfo;
typedef struct FSPathInfo {
u32 attributes;
FSDateTime ctime;
FSDateTime mtime;
FSDateTime atime;
u32 filesize;
u32 id;
} FSPathInfo;
typedef struct FSArchiveResource {
u64 totalSize;
u64 availableSize;
u32 maxFileHandles;
u32 currentFileHandles;
u32 maxDirectoryHandles;
u32 currentDirectoryHandles;
u32 bytesPerSector;
u32 sectorsPerCluster;
u32 totalClusters;
u32 availableClusters;
} FSArchiveResource;
typedef struct FSDirPos {
struct FSArchive *arc;
u16 own_id;
u16 index;
u32 pos;
} FSDirPos;
typedef struct FSFileID {
struct FSArchive *arc;
u32 file_id;
} FSFileID;
typedef struct {
union {
FSFileID file_id;
FSDirPos dir_id;
};
u32 is_directory;
u32 name_len;
char name[127 + 1];
} FSDirEntry;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst,
u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src,
u32 pos, u32 size);
typedef struct {
FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
FSDirEntry *p_entry;
BOOL skip_string;
} FSReadDirInfo;
typedef struct {
FSDirPos pos;
const char *path;
BOOL find_directory;
union {
FSFileID *file;
FSDirPos *dir;
} result;
} FSFindPathInfo;
typedef struct {
u8 *buf;
u32 buf_len;
u16 total_len;
u16 dir_id;
} FSGetPathInfo;
typedef struct {
FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
u32 top;
u32 bottom;
u32 index;
} FSOpenFileDirectInfo;
typedef struct {
u32 reserved;
} FSCloseFileInfo;
typedef struct {
void *dst;
u32 len_org;
u32 len;
} FSReadFileInfo;
typedef struct {
const void *src;
u32 len_org;
u32 len;
} FSWriteFileInfo;
typedef union FSROMFATCommandInfo {
FSReadFileInfo readfile;
FSWriteFileInfo writefile;
FSSeekDirInfo seekdir;
FSReadDirInfo readdir;
FSFindPathInfo findpath;
FSGetPathInfo getpath;
FSOpenFileFastInfo openfilefast;
FSOpenFileDirectInfo openfiledirect;
FSCloseFileInfo closefile;
} FSROMFATCommandInfo;
typedef struct FSROMFATFileProperty {
u32 own_id;
u32 top;
u32 bottom;
u32 pos;
} FSROMFATFileProperty;
typedef struct FSROMFATDirProperty {
FSDirPos pos;
u32 parent;
} FSROMFATDirProperty;
typedef union FSROMFATProperty {
FSROMFATFileProperty file;
FSROMFATDirProperty dir;
} FSROMFATProperty;
u32 FS_GetArchiveBase(const struct FSArchive *arc);
u32 FS_GetArchiveFAT(const struct FSArchive *arc);
u32 FS_GetArchiveFNT(const struct FSArchive *arc);
u32 FS_GetArchiveOffset(const struct FSArchive *arc, u32 pos);
BOOL FS_IsArchiveTableLoaded(volatile const struct FSArchive *arc);
BOOL FS_LoadArchive(struct FSArchive *arc, u32 base, u32 fat, u32 fat_size,
u32 fnt, u32 fnt_size, FS_ARCHIVE_READ_FUNC read_func,
FS_ARCHIVE_WRITE_FUNC write_func);
BOOL FS_UnloadArchive(struct FSArchive *arc);
u32 FS_LoadArchiveTables(struct FSArchive *arc, void *mem, u32 size);
void *FS_UnloadArchiveTables(struct FSArchive *arc);
void FS_SetArchiveProc(struct FSArchive *arc, FS_ARCHIVE_PROC_FUNC proc,
u32 flags);
u32 FS_GetFileImageTop(const struct FSFile *file);
u32 FS_GetFileImageBottom(const struct FSFile *file);
typedef struct FSArchiveInterface {
FSResult (*ReadFile)(struct FSArchive *, struct FSFile *, void *buffer,
u32 *length);
FSResult (*WriteFile)(struct FSArchive *, struct FSFile *, const void *buffer,
u32 *length);
FSResult (*SeekDirectory)(struct FSArchive *, struct FSFile *, u32 id,
u32 position);
FSResult (*ReadDirectory)(struct FSArchive *, struct FSFile *,
FSDirectoryEntryInfo *info);
FSResult (*FindPath)(struct FSArchive *, u32 base_dir_id, const char *path,
u32 *target_id, BOOL target_is_directory);
FSResult (*GetPath)(struct FSArchive *, struct FSFile *, BOOL is_directory,
char *buffer, u32 *length);
FSResult (*OpenFileFast)(struct FSArchive *, struct FSFile *, u32 id,
u32 mode);
FSResult (*OpenFileDirect)(struct FSArchive *, struct FSFile *, u32 top,
u32 bottom, u32 *id);
FSResult (*CloseFile)(struct FSArchive *, struct FSFile *);
void (*Activate)(struct FSArchive *);
void (*Idle)(struct FSArchive *);
void (*Suspend)(struct FSArchive *);
void (*Resume)(struct FSArchive *);
FSResult (*OpenFile)(struct FSArchive *, struct FSFile *, u32 base_dir_id,
const char *path, u32 mode);
FSResult (*SeekFile)(struct FSArchive *, struct FSFile *, int *offset,
FSSeekFileMode from);
FSResult (*GetFileLength)(struct FSArchive *, struct FSFile *, u32 *length);
FSResult (*GetFilePosition)(struct FSArchive *, struct FSFile *,
u32 *position);
void (*Mount)(struct FSArchive *);
void (*Unmount)(struct FSArchive *);
FSResult (*GetArchiveCaps)(struct FSArchive *, u32 *caps);
FSResult (*CreateFile)(struct FSArchive *, u32 baseid, const char *relpath,
u32 permit);
FSResult (*DeleteFile)(struct FSArchive *, u32 baseid, const char *relpath);
FSResult (*RenameFile)(struct FSArchive *, u32 baseid_src,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*SetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*CreateDirectory)(struct FSArchive *, u32 baseid,
const char *relpath, u32 permit);
FSResult (*DeleteDirectory)(struct FSArchive *, u32 baseid,
const char *relpath);
FSResult (*RenameDirectory)(struct FSArchive *, u32 baseid,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetArchiveResource)(struct FSArchive *,
FSArchiveResource *resource);
void *unused_29;
FSResult (*FlushFile)(struct FSArchive *, struct FSFile *);
FSResult (*SetFileLength)(struct FSArchive *, struct FSFile *, u32 length);
FSResult (*OpenDirectory)(struct FSArchive *, struct FSFile *,
u32 base_dir_id, const char *path, u32 mode);
FSResult (*CloseDirectory)(struct FSArchive *, struct FSFile *);
FSResult (*SetSeekCache)(struct FSArchive *, struct FSFile *, void *buf,
u32 buf_size);
u8 reserved[116];
} FSArchiveInterface;
typedef struct FSArchive {
union {
char ptr[3 + 1];
u32 pack;
} name;
struct FSArchive * next;
struct FSFile *list;
OSThreadQueue queue;
u32 flag;
FSCommandType command;
FSResult result;
void *userdata;
const FSArchiveInterface *vtbl;
union {
u8 reserved2[52];
struct { u32 base; u32 fat; u32 fat_size; u32 fnt; u32 fnt_size; u32 fat_bak; u32 fnt_bak; void *load_mem; FS_ARCHIVE_READ_FUNC read_func; FS_ARCHIVE_WRITE_FUNC write_func; u8 reserved3[4]; FS_ARCHIVE_PROC_FUNC proc; u32 proc_flag; } ;
};
} FSArchive;
typedef struct FSFile {
struct FSFile *next;
void *userdata;
struct FSArchive *arc;
u32 stat;
void *argument;
FSResult error;
OSThreadQueue queue[1];
union {
u8 reserved1[16];
FSROMFATProperty prop;
};
union {
u8 reserved2[24];
FSROMFATCommandInfo arg;
};
} FSFile;
typedef struct FSArgumentForReadFile {
void *buffer;
u32 length;
} FSArgumentForReadFile;
typedef struct FSArgumentForWriteFile {
const void *buffer;
u32 length;
} FSArgumentForWriteFile;
typedef struct FSArgumentForSeekDirectory {
u32 id;
u32 position;
} FSArgumentForSeekDirectory;
typedef struct FSArgumentForReadDirectory {
FSDirectoryEntryInfo *info;
} FSArgumentForReadDirectory;
typedef struct FSArgumentForFindPath {
u32 baseid;
const char *relpath;
u32 target_id;
BOOL target_is_directory;
} FSArgumentForFindPath;
typedef struct FSArgumentForGetPath {
BOOL is_directory;
char *buffer;
u32 length;
} FSArgumentForGetPath;
typedef struct FSArgumentForOpenFileFast {
u32 id;
u32 mode;
} FSArgumentForOpenFileFast;
typedef struct FSArgumentForOpenFileDirect {
u32 id;
u32 top;
u32 bottom;
u32 mode;
} FSArgumentForOpenFileDirect;
typedef void FSArgumentForCloseFile;
typedef void FSArgumentForActivate;
typedef void FSArgumentForIdle;
typedef void FSArgumentForSuspend;
typedef void FSArgumentForResume;
typedef struct FSArgumentForOpenFile {
u32 baseid;
const char *relpath;
u32 mode;
} FSArgumentForOpenFile;
typedef struct FSArgumentForSetSeekCache {
void *buf;
u32 buf_size;
} FSArgumentForSetSeekCache;
typedef struct FSArgumentForSeekFile {
int offset;
FSSeekFileMode from;
} FSArgumentForSeekFile;
typedef struct FSArgumentForGetFileLength {
u32 length;
} FSArgumentForGetFileLength;
typedef struct FSArgumentForGetFilePosition {
u32 position;
} FSArgumentForGetFilePosition;
typedef struct FSArgumentForGetArchiveCaps {
u32 caps;
} FSArgumentForGetArchiveCaps;
typedef void FSArgumentForMount;
typedef void FSArgumentForUnmount;
typedef struct FSArgumentForCreateFile {
u32 baseid;
const char *relpath;
u32 permit;
} FSArgumentForCreateFile;
typedef struct FSArgumentForDeleteFile {
u32 baseid;
const char *relpath;
} FSArgumentForDeleteFile;
typedef struct FSArgumentForRenameFile {
u32 baseid_src;
const char *relpath_src;
u32 baseid_dst;
const char *relpath_dst;
} FSArgumentForRenameFile;
typedef struct FSArgumentForGetPathInfo {
u32 baseid;
const char *relpath;
FSPathInfo *info;
} FSArgumentForGetPathInfo;
typedef struct FSArgumentForSetPathInfo {
u32 baseid;
const char *relpath;
FSPathInfo *info;
} FSArgumentForSetPathInfo;
typedef FSArgumentForCreateFile FSArgumentForCreateDirectory;
typedef FSArgumentForDeleteFile FSArgumentForDeleteDirectory;
typedef FSArgumentForRenameFile FSArgumentForRenameDirectory;
typedef struct FSArgumentForGetArchiveResource {
FSArchiveResource *resource;
} FSArgumentForGetArchiveResource;
typedef void FSArgumentForFlushFile;
typedef struct FSArgumentForSetFileLength {
u32 length;
} FSArgumentForSetFileLength;
typedef FSArgumentForOpenFile FSArgumentForOpenDirectory;
typedef FSArgumentForCloseFile FSArgumentForCloseDirectory;
FSResult func_0207dcc8(FSFile *file, FSResult result);
BOOL func_0207dc40(FSCommandType command);
void func_0207dc60(FSFile *file, FSResult ret);
FSResult func_0207dcc8(FSFile *file, FSResult result);
FSResult func_0207dd08(FSFile *file, FSCommandType command) {
FSResult result = FS_RESULT_UNSUPPORTED;
FSArchive *const arc = file->arc;
{
const void *(*table) = (const void *)arc->vtbl;
if ((command < 0) || (command >= 35UL )) {
((void)0) ;
result = FS_RESULT_UNSUPPORTED;
}
else if (table[command] == 0L ) {
result = FS_RESULT_UNSUPPORTED;
} else {
switch (command) {
case 0UL :
do { FSArgumentForReadFile *arg = (FSArgumentForReadFile *)file->argument; (void)arg; result = arc->vtbl->ReadFile( arc, file, arg->buffer, &arg->length); } while (0) ;
break;
case 1UL :
do { FSArgumentForWriteFile *arg = (FSArgumentForWriteFile *)file->argument; (void)arg; result = arc->vtbl->WriteFile( arc, file, arg->buffer, &arg->length); } while (0) ;
break;
case 2UL :
do { FSArgumentForSeekDirectory *arg = (FSArgumentForSeekDirectory *)file->argument; (void)arg; result = arc->vtbl->SeekDirectory( arc, file, arg->id, arg->position); } while (0) ;
break;
case 3UL :
do { FSArgumentForReadDirectory *arg = (FSArgumentForReadDirectory *)file->argument; (void)arg; result = arc->vtbl->ReadDirectory( arc, file, arg->info); } while (0) ;
break;
case 4UL :
do { FSArgumentForFindPath *arg = (FSArgumentForFindPath *)file->argument; (void)arg; result = arc->vtbl->FindPath( arc, arg->baseid, arg->relpath, &arg->target_id, arg->target_is_directory); } while (0) ;
break;
case 5UL :
do { FSArgumentForGetPath *arg = (FSArgumentForGetPath *)file->argument; (void)arg; result = arc->vtbl->GetPath( arc, file, arg->is_directory, arg->buffer, &arg->length); } while (0) ;
break;
case 6UL :
do { FSArgumentForOpenFileFast *arg = (FSArgumentForOpenFileFast *)file->argument; (void)arg; result = arc->vtbl->OpenFileFast( arc, file, arg->id, arg->mode); } while (0) ;
break;
case 7UL :
do { FSArgumentForOpenFileDirect *arg = (FSArgumentForOpenFileDirect *)file->argument; (void)arg; result = arc->vtbl->OpenFileDirect( arc, file, arg->top, arg->bottom, &arg->id); } while (0) ;
break;
case 8UL :
do { FSArgumentForCloseFile *arg = (FSArgumentForCloseFile *)file->argument; (void)arg; result = arc->vtbl->CloseFile( arc, file); } while (0) ;
break;
case 9UL :
do { FSArgumentForActivate *arg = (FSArgumentForActivate *)file->argument; (void)arg; (void)arc->vtbl->Activate( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 10UL :
do { FSArgumentForIdle *arg = (FSArgumentForIdle *)file->argument; (void)arg; (void)arc->vtbl->Idle( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 11UL :
do { FSArgumentForSuspend *arg = (FSArgumentForSuspend *)file->argument; (void)arg; (void)arc->vtbl->Suspend( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 12UL :
do { FSArgumentForResume *arg = (FSArgumentForResume *)file->argument; (void)arg; (void)arc->vtbl->Resume( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 13UL :
do { FSArgumentForOpenFile *arg = (FSArgumentForOpenFile *)file->argument; (void)arg; result = arc->vtbl->OpenFile( arc, file, arg->baseid, arg->relpath, arg->mode); } while (0) ;
break;
case 14UL :
do { FSArgumentForSeekFile *arg = (FSArgumentForSeekFile *)file->argument; (void)arg; result = arc->vtbl->SeekFile( arc, file, &arg->offset, arg->from); } while (0) ;
break;
case 15UL :
do { FSArgumentForGetFileLength *arg = (FSArgumentForGetFileLength *)file->argument; (void)arg; result = arc->vtbl->GetFileLength( arc, file, &arg->length); } while (0) ;
break;
case 16UL :
do { FSArgumentForGetFilePosition *arg = (FSArgumentForGetFilePosition *)file->argument; (void)arg; result = arc->vtbl->GetFilePosition( arc, file, &arg->position); } while (0) ;
break;
case 17UL :
do { FSArgumentForMount *arg = (FSArgumentForMount *)file->argument; (void)arg; (void)arc->vtbl->Mount( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 18UL :
do { FSArgumentForUnmount *arg = (FSArgumentForUnmount *)file->argument; (void)arg; (void)arc->vtbl->Unmount( arc); return FS_RESULT_SUCCESS; } while (0) ;
break;
case 19UL :
do { FSArgumentForGetArchiveCaps *arg = (FSArgumentForGetArchiveCaps *)file->argument; (void)arg; result = arc->vtbl->GetArchiveCaps( arc, &arg->caps); } while (0) ;
break;
case 20UL :
do { FSArgumentForCreateFile *arg = (FSArgumentForCreateFile *)file->argument; (void)arg; result = arc->vtbl->CreateFile( arc, arg->baseid, arg->relpath, arg->permit); } while (0) ;
break;
case 21UL :
do { FSArgumentForDeleteFile *arg = (FSArgumentForDeleteFile *)file->argument; (void)arg; result = arc->vtbl->DeleteFile( arc, arg->baseid, arg->relpath); } while (0) ;
break;
case 22UL :
do { FSArgumentForRenameFile *arg = (FSArgumentForRenameFile *)file->argument; (void)arg; result = arc->vtbl->RenameFile( arc, arg->baseid_src, arg->relpath_src, arg->baseid_dst, arg->relpath_dst); } while (0) ;
break;
case 23UL :
do { FSArgumentForGetPathInfo *arg = (FSArgumentForGetPathInfo *)file->argument; (void)arg; result = arc->vtbl->GetPathInfo( arc, arg->baseid, arg->relpath, arg->info); } while (0) ;
break;
case 24UL :
do { FSArgumentForSetPathInfo *arg = (FSArgumentForSetPathInfo *)file->argument; (void)arg; result = arc->vtbl->SetPathInfo( arc, arg->baseid, arg->relpath, arg->info); } while (0) ;
break;
case 25UL :
do { FSArgumentForCreateDirectory *arg = (FSArgumentForCreateDirectory *)file->argument; (void)arg; result = arc->vtbl->CreateDirectory( arc, arg->baseid, arg->relpath, arg->permit); } while (0) ;
break;
case 26UL :
do { FSArgumentForDeleteDirectory *arg = (FSArgumentForDeleteDirectory *)file->argument; (void)arg; result = arc->vtbl->DeleteDirectory( arc, arg->baseid, arg->relpath); } while (0) ;
break;
case 27UL :
do { FSArgumentForRenameDirectory *arg = (FSArgumentForRenameDirectory *)file->argument; (void)arg; result = arc->vtbl->RenameDirectory( arc, arg->baseid_src, arg->relpath_src, arg->baseid_dst, arg->relpath_dst); } while (0) ;
break;
case 28UL :
do { FSArgumentForGetArchiveResource *arg = (FSArgumentForGetArchiveResource *)file->argument; (void)arg; result = arc->vtbl->GetArchiveResource( arc, arg->resource); } while (0) ;
break;
case 30UL :
do { FSArgumentForFlushFile *arg = (FSArgumentForFlushFile *)file->argument; (void)arg; result = arc->vtbl->FlushFile( arc, file); } while (0) ;
break;
case 31UL :
do { FSArgumentForSetFileLength *arg = (FSArgumentForSetFileLength *)file->argument; (void)arg; result = arc->vtbl->SetFileLength( arc, file, arg->length); } while (0) ;
break;
case 32UL :
do { FSArgumentForOpenDirectory *arg = (FSArgumentForOpenDirectory *)file->argument; (void)arg; result = arc->vtbl->OpenDirectory( arc, file, arg->baseid, arg->relpath, arg->mode); } while (0) ;
break;
case 33UL :
do { FSArgumentForCloseDirectory *arg = (FSArgumentForCloseDirectory *)file->argument; (void)arg; result = arc->vtbl->CloseDirectory( arc, file); } while (0) ;
break;
case 34UL :
do { FSArgumentForSetSeekCache *arg = (FSArgumentForSetSeekCache *)file->argument; (void)arg; result = arc->vtbl->SetSeekCache( arc, file, arg->buf, arg->buf_size); } while (0) ;
break;
default:
result = FS_RESULT_UNSUPPORTED;
}
}
}
if (!func_0207dc40(command)) {
if (result == FS_RESULT_UNSUPPORTED) {
((void)0) ;
}
if ((file->stat & 0x00000004UL ) != 0) {
result = func_0207dcc8(file, result);
}
else if (result != FS_RESULT_PROC_ASYNC) {
func_0207dc60(file, result);
}
}
return result;
}
