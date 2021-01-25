typedef long unsigned int size_t;
typedef int wchar_t;

typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
extern size_t __ctype_get_mb_cur_max (void) ;
extern double atof (const char *__nptr)
     ;
extern int atoi (const char *__nptr)
     ;
extern long int atol (const char *__nptr)
     ;
__extension__ extern long long int atoll (const char *__nptr)
     ;
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     ;
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     ;
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;
__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;
extern char *l64a (long int __n) ;
extern long int a64l (const char *__s)
     ;

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t ;
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx);
static __inline __uint32_t
__bswap_32 (__uint32_t __bsx);
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx);
static __inline __uint16_t
__uint16_identity (__uint16_t __x);
static __inline __uint32_t
__uint32_identity (__uint32_t __x);
static __inline __uint64_t
__uint64_identity (__uint64_t __x);
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);

typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long int __pad2;
  unsigned int __flags;
};
struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;

extern long int random (void) ;
extern void srandom (unsigned int __seed) ;
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;
extern char *setstate (char *__statebuf) ;
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;
extern int rand (void) ;
extern void srand (unsigned int __seed) ;
extern int rand_r (unsigned int *__seed) ;
extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;
extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;
extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;
extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;
extern void *malloc (size_t __size)
     ;
extern void *calloc (size_t __nmemb, size_t __size)
     ;
extern void *realloc (void *__ptr, size_t __size)
     ;
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)

     ;
extern void free (void *__ptr) ;

extern void *valloc (size_t __size)
     ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;
extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;
extern void abort (void) ;
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;
extern void exit (int __status) ;
extern void quick_exit (int __status) ;
extern void _Exit (int __status) ;
extern char *getenv (const char *__name) ;
extern int putenv (char *__string) ;
extern int setenv (const char *__name, const char *__value, int __replace)
     ;
extern int unsetenv (const char *__name) ;
extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template) ;
extern int mkstemps (char *__template, int __suffixlen) ;
extern char *mkdtemp (char *__template) ;
extern int system (const char *__command) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;
typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;
__extension__ extern long long int llabs (long long int __x)
     ;
extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int mblen (const char *__s, size_t __n) ;
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;
extern int wctomb (char *__s, wchar_t __wchar) ;
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;
extern int rpmatch (const char *__response) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     ;
extern int getloadavg (double __loadavg[], int __nelem)
     ;


typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value)
     ;
extern int __signbit (double __value)
     ;
extern int __isinf (double __value) ;
extern int __finite (double __value) ;
extern int __isnan (double __value) ;
extern int __iseqsig (double __x, double __y) ;
extern int __issignaling (double __value)
     ;
extern double acos (double __x) ;
extern double asin (double __x) ;
extern double atan (double __x) ;
extern double atan2 (double __y, double __x) ;
 extern double cos (double __x) ;
 extern double sin (double __x) ;
extern double tan (double __x) ;
extern double cosh (double __x) ;
extern double sinh (double __x) ;
extern double tanh (double __x) ;
extern double acosh (double __x) ;
extern double asinh (double __x) ;
extern double atanh (double __x) ;
 extern double exp (double __x) ;
extern double frexp (double __x, int *__exponent) ;
extern double ldexp (double __x, int __exponent) ;
 extern double log (double __x) ;
extern double log10 (double __x) ;
extern double modf (double __x, double *__iptr) ;
extern double expm1 (double __x) ;
extern double log1p (double __x) ;
extern double logb (double __x) ;
extern double exp2 (double __x) ;
extern double log2 (double __x) ;
 extern double pow (double __x, double __y) ;
extern double sqrt (double __x) ;
extern double hypot (double __x, double __y) ;
extern double cbrt (double __x) ;
extern double ceil (double __x) ;
extern double fabs (double __x) ;
extern double floor (double __x) ;
extern double fmod (double __x, double __y) ;
extern int isinf (double __value) ;
extern int finite (double __value) ;
extern double drem (double __x, double __y) ;
extern double significand (double __x) ;
extern double copysign (double __x, double __y) ;
extern double nan (const char *__tagb) ;
extern int isnan (double __value) ;
extern double j0 (double) ;
extern double j1 (double) ;
extern double jn (int, double) ;
extern double y0 (double) ;
extern double y1 (double) ;
extern double yn (int, double) ;
extern double erf (double) ;
extern double erfc (double) ;
extern double lgamma (double) ;
extern double tgamma (double) ;
extern double gamma (double) ;
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

 void cpMessage(const char *condition, const char *file, int line, int isError, int isHardError, const char *message, ...);
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
 typedef double cpFloat;
static inline cpFloat cpfmax(cpFloat a, cpFloat b);
static inline cpFloat cpfmin(cpFloat a, cpFloat b);
static inline cpFloat cpfabs(cpFloat f);
static inline cpFloat cpfclamp(cpFloat f, cpFloat min, cpFloat max);
static inline cpFloat cpfclamp01(cpFloat f);
static inline cpFloat cpflerp(cpFloat f1, cpFloat f2, cpFloat t);
static inline cpFloat cpflerpconst(cpFloat f1, cpFloat f2, cpFloat d);
 typedef uintptr_t cpHashValue;
typedef uint32_t cpCollisionID;
 typedef unsigned char cpBool;
 typedef void * cpDataPointer;
 typedef uintptr_t cpCollisionType;
 typedef uintptr_t cpGroup;
 typedef unsigned int cpBitmask;
 typedef unsigned int cpTimestamp;
 typedef struct cpVect{cpFloat x,y;} cpVect;
 typedef struct cpTransform {
  cpFloat a, b, c, d, tx, ty;
 } cpTransform;
typedef struct cpMat2x2 {
 cpFloat a, b, c, d;
} cpMat2x2;
typedef struct cpArray cpArray;
typedef struct cpHashSet cpHashSet;
typedef struct cpBody cpBody;
typedef struct cpShape cpShape;
typedef struct cpCircleShape cpCircleShape;
typedef struct cpSegmentShape cpSegmentShape;
typedef struct cpPolyShape cpPolyShape;
typedef struct cpConstraint cpConstraint;
typedef struct cpPinJoint cpPinJoint;
typedef struct cpSlideJoint cpSlideJoint;
typedef struct cpPivotJoint cpPivotJoint;
typedef struct cpGrooveJoint cpGrooveJoint;
typedef struct cpDampedSpring cpDampedSpring;
typedef struct cpDampedRotarySpring cpDampedRotarySpring;
typedef struct cpRotaryLimitJoint cpRotaryLimitJoint;
typedef struct cpRatchetJoint cpRatchetJoint;
typedef struct cpGearJoint cpGearJoint;
typedef struct cpSimpleMotorJoint cpSimpleMotorJoint;
typedef struct cpCollisionHandler cpCollisionHandler;
typedef struct cpContactPointSet cpContactPointSet;
typedef struct cpArbiter cpArbiter;
typedef struct cpSpace cpSpace;
static const cpVect cpvzero;
static inline cpVect cpv(const cpFloat x, const cpFloat y);
static inline cpBool cpveql(const cpVect v1, const cpVect v2);
static inline cpVect cpvadd(const cpVect v1, const cpVect v2);
static inline cpVect cpvsub(const cpVect v1, const cpVect v2);
static inline cpVect cpvneg(const cpVect v);
static inline cpVect cpvmult(const cpVect v, const cpFloat s);
static inline cpFloat cpvdot(const cpVect v1, const cpVect v2);
static inline cpFloat cpvcross(const cpVect v1, const cpVect v2);
static inline cpVect cpvperp(const cpVect v);
static inline cpVect cpvrperp(const cpVect v);
static inline cpVect cpvproject(const cpVect v1, const cpVect v2);
static inline cpVect cpvforangle(const cpFloat a);
static inline cpFloat cpvtoangle(const cpVect v);
static inline cpVect cpvrotate(const cpVect v1, const cpVect v2);
static inline cpVect cpvunrotate(const cpVect v1, const cpVect v2);
static inline cpFloat cpvlengthsq(const cpVect v);
static inline cpFloat cpvlength(const cpVect v);
static inline cpVect cpvlerp(const cpVect v1, const cpVect v2, const cpFloat t);
static inline cpVect cpvnormalize(const cpVect v);
static inline cpVect
cpvslerp(const cpVect v1, const cpVect v2, const cpFloat t);
static inline cpVect
cpvslerpconst(const cpVect v1, const cpVect v2, const cpFloat a);
static inline cpVect cpvclamp(const cpVect v, const cpFloat len);
static inline cpVect cpvlerpconst(cpVect v1, cpVect v2, cpFloat d);
static inline cpFloat cpvdist(const cpVect v1, const cpVect v2);
static inline cpFloat cpvdistsq(const cpVect v1, const cpVect v2);
static inline cpBool cpvnear(const cpVect v1, const cpVect v2, const cpFloat dist);
static inline cpMat2x2
cpMat2x2New(cpFloat a, cpFloat b, cpFloat c, cpFloat d);
static inline cpVect
cpMat2x2Transform(cpMat2x2 m, cpVect v);
typedef struct cpBB{
 cpFloat l, b, r ,t;
} cpBB;
static inline cpBB cpBBNew(const cpFloat l, const cpFloat b, const cpFloat r, const cpFloat t);
static inline cpBB
cpBBNewForExtents(const cpVect c, const cpFloat hw, const cpFloat hh);
static inline cpBB cpBBNewForCircle(const cpVect p, const cpFloat r);
static inline cpBool cpBBIntersects(const cpBB a, const cpBB b);
static inline cpBool cpBBContainsBB(const cpBB bb, const cpBB other);
static inline cpBool cpBBContainsVect(const cpBB bb, const cpVect v);
static inline cpBB cpBBMerge(const cpBB a, const cpBB b);
static inline cpBB cpBBExpand(const cpBB bb, const cpVect v);
static inline cpVect
cpBBCenter(cpBB bb);
static inline cpFloat cpBBArea(cpBB bb);
static inline cpFloat cpBBMergedArea(cpBB a, cpBB b);
static inline cpFloat cpBBSegmentQuery(cpBB bb, cpVect a, cpVect b);
static inline cpBool cpBBIntersectsSegment(cpBB bb, cpVect a, cpVect b);
static inline cpVect
cpBBClampVect(const cpBB bb, const cpVect v);
static inline cpVect
cpBBWrapVect(const cpBB bb, const cpVect v);
static inline cpBB
cpBBOffset(const cpBB bb, const cpVect v);
static const cpTransform cpTransformIdentity;
static inline cpTransform
cpTransformNew(cpFloat a, cpFloat b, cpFloat c, cpFloat d, cpFloat tx, cpFloat ty);
static inline cpTransform
cpTransformNewTranspose(cpFloat a, cpFloat c, cpFloat tx, cpFloat b, cpFloat d, cpFloat ty);
static inline cpTransform
cpTransformInverse(cpTransform t);
static inline cpTransform
cpTransformMult(cpTransform t1, cpTransform t2);
static inline cpVect
cpTransformPoint(cpTransform t, cpVect p);
static inline cpVect
cpTransformVect(cpTransform t, cpVect v);
static inline cpBB
cpTransformbBB(cpTransform t, cpBB bb);
static inline cpTransform
cpTransformTranslate(cpVect translate);
static inline cpTransform
cpTransformScale(cpFloat scaleX, cpFloat scaleY);
static inline cpTransform
cpTransformRotate(cpFloat radians);
static inline cpTransform
cpTransformRigid(cpVect translate, cpFloat radians);
static inline cpTransform
cpTransformRigidInverse(cpTransform t);
static inline cpTransform
cpTransformWrap(cpTransform outer, cpTransform inner);
static inline cpTransform
cpTransformWrapInverse(cpTransform outer, cpTransform inner);
static inline cpTransform
cpTransformOrtho(cpBB bb);
static inline cpTransform
cpTransformBoneScale(cpVect v0, cpVect v1);
static inline cpTransform
cpTransformAxialScale(cpVect axis, cpVect pivot, cpFloat scale);
typedef cpBB (*cpSpatialIndexBBFunc)(void *obj);
typedef void (*cpSpatialIndexIteratorFunc)(void *obj, void *data);
typedef cpCollisionID (*cpSpatialIndexQueryFunc)(void *obj1, void *obj2, cpCollisionID id, void *data);
typedef cpFloat (*cpSpatialIndexSegmentQueryFunc)(void *obj1, void *obj2, void *data);
typedef struct cpSpatialIndexClass cpSpatialIndexClass;
typedef struct cpSpatialIndex cpSpatialIndex;
struct cpSpatialIndex {
 cpSpatialIndexClass *klass;
 cpSpatialIndexBBFunc bbfunc;
 cpSpatialIndex *staticIndex, *dynamicIndex;
};
typedef struct cpSpaceHash cpSpaceHash;
 cpSpaceHash* cpSpaceHashAlloc(void);
 cpSpatialIndex* cpSpaceHashInit(cpSpaceHash *hash, cpFloat celldim, int numcells, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
 cpSpatialIndex* cpSpaceHashNew(cpFloat celldim, int cells, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
 void cpSpaceHashResize(cpSpaceHash *hash, cpFloat celldim, int numcells);
typedef struct cpBBTree cpBBTree;
 cpBBTree* cpBBTreeAlloc(void);
 cpSpatialIndex* cpBBTreeInit(cpBBTree *tree, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
 cpSpatialIndex* cpBBTreeNew(cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
 void cpBBTreeOptimize(cpSpatialIndex *index);
typedef cpVect (*cpBBTreeVelocityFunc)(void *obj);
 void cpBBTreeSetVelocityFunc(cpSpatialIndex *index, cpBBTreeVelocityFunc func);
typedef struct cpSweep1D cpSweep1D;
 cpSweep1D* cpSweep1DAlloc(void);
 cpSpatialIndex* cpSweep1DInit(cpSweep1D *sweep, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
 cpSpatialIndex* cpSweep1DNew(cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);
typedef void (*cpSpatialIndexDestroyImpl)(cpSpatialIndex *index);
typedef int (*cpSpatialIndexCountImpl)(cpSpatialIndex *index);
typedef void (*cpSpatialIndexEachImpl)(cpSpatialIndex *index, cpSpatialIndexIteratorFunc func, void *data);
typedef cpBool (*cpSpatialIndexContainsImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexInsertImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexRemoveImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexReindexImpl)(cpSpatialIndex *index);
typedef void (*cpSpatialIndexReindexObjectImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexReindexQueryImpl)(cpSpatialIndex *index, cpSpatialIndexQueryFunc func, void *data);
typedef void (*cpSpatialIndexQueryImpl)(cpSpatialIndex *index, void *obj, cpBB bb, cpSpatialIndexQueryFunc func, void *data);
typedef void (*cpSpatialIndexSegmentQueryImpl)(cpSpatialIndex *index, void *obj, cpVect a, cpVect b, cpFloat t_exit, cpSpatialIndexSegmentQueryFunc func, void *data);
struct cpSpatialIndexClass {
 cpSpatialIndexDestroyImpl destroy;
 cpSpatialIndexCountImpl count;
 cpSpatialIndexEachImpl each;
 cpSpatialIndexContainsImpl contains;
 cpSpatialIndexInsertImpl insert;
 cpSpatialIndexRemoveImpl remove;
 cpSpatialIndexReindexImpl reindex;
 cpSpatialIndexReindexObjectImpl reindexObject;
 cpSpatialIndexReindexQueryImpl reindexQuery;
 cpSpatialIndexQueryImpl query;
 cpSpatialIndexSegmentQueryImpl segmentQuery;
};
 void cpSpatialIndexFree(cpSpatialIndex *index);
 void cpSpatialIndexCollideStatic(cpSpatialIndex *dynamicIndex, cpSpatialIndex *staticIndex, cpSpatialIndexQueryFunc func, void *data);
static inline void cpSpatialIndexDestroy(cpSpatialIndex *index);
static inline int cpSpatialIndexCount(cpSpatialIndex *index);
static inline void cpSpatialIndexEach(cpSpatialIndex *index, cpSpatialIndexIteratorFunc func, void *data);
static inline cpBool cpSpatialIndexContains(cpSpatialIndex *index, void *obj, cpHashValue hashid);
static inline void cpSpatialIndexInsert(cpSpatialIndex *index, void *obj, cpHashValue hashid);
static inline void cpSpatialIndexRemove(cpSpatialIndex *index, void *obj, cpHashValue hashid);
static inline void cpSpatialIndexReindex(cpSpatialIndex *index);
static inline void cpSpatialIndexReindexObject(cpSpatialIndex *index, void *obj, cpHashValue hashid);
static inline void cpSpatialIndexQuery(cpSpatialIndex *index, void *obj, cpBB bb, cpSpatialIndexQueryFunc func, void *data);
static inline void cpSpatialIndexSegmentQuery(cpSpatialIndex *index, void *obj, cpVect a, cpVect b, cpFloat t_exit, cpSpatialIndexSegmentQueryFunc func, void *data);
static inline void cpSpatialIndexReindexQuery(cpSpatialIndex *index, cpSpatialIndexQueryFunc func, void *data);
 cpFloat cpArbiterGetRestitution(const cpArbiter *arb);
 void cpArbiterSetRestitution(cpArbiter *arb, cpFloat restitution);
 cpFloat cpArbiterGetFriction(const cpArbiter *arb);
 void cpArbiterSetFriction(cpArbiter *arb, cpFloat friction);
 cpVect cpArbiterGetSurfaceVelocity(cpArbiter *arb);
 void cpArbiterSetSurfaceVelocity(cpArbiter *arb, cpVect vr);
 cpDataPointer cpArbiterGetUserData(const cpArbiter *arb);
 void cpArbiterSetUserData(cpArbiter *arb, cpDataPointer userData);
 cpVect cpArbiterTotalImpulse(const cpArbiter *arb);
 cpFloat cpArbiterTotalKE(const cpArbiter *arb);
 cpBool cpArbiterIgnore(cpArbiter *arb);
 void cpArbiterGetShapes(const cpArbiter *arb, cpShape **a, cpShape **b);
 void cpArbiterGetBodies(const cpArbiter *arb, cpBody **a, cpBody **b);
struct cpContactPointSet {
 int count;
 cpVect normal;
 struct {
  cpVect pointA, pointB;
  cpFloat distance;
 } points[2];
};
 cpContactPointSet cpArbiterGetContactPointSet(const cpArbiter *arb);
 void cpArbiterSetContactPointSet(cpArbiter *arb, cpContactPointSet *set);
 cpBool cpArbiterIsFirstContact(const cpArbiter *arb);
 cpBool cpArbiterIsRemoval(const cpArbiter *arb);
 int cpArbiterGetCount(const cpArbiter *arb);
 cpVect cpArbiterGetNormal(const cpArbiter *arb);
 cpVect cpArbiterGetPointA(const cpArbiter *arb, int i);
 cpVect cpArbiterGetPointB(const cpArbiter *arb, int i);
 cpFloat cpArbiterGetDepth(const cpArbiter *arb, int i);
 cpBool cpArbiterCallWildcardBeginA(cpArbiter *arb, cpSpace *space);
 cpBool cpArbiterCallWildcardBeginB(cpArbiter *arb, cpSpace *space);
 cpBool cpArbiterCallWildcardPreSolveA(cpArbiter *arb, cpSpace *space);
 cpBool cpArbiterCallWildcardPreSolveB(cpArbiter *arb, cpSpace *space);
 void cpArbiterCallWildcardPostSolveA(cpArbiter *arb, cpSpace *space);
 void cpArbiterCallWildcardPostSolveB(cpArbiter *arb, cpSpace *space);
 void cpArbiterCallWildcardSeparateA(cpArbiter *arb, cpSpace *space);
 void cpArbiterCallWildcardSeparateB(cpArbiter *arb, cpSpace *space);
typedef enum cpBodyType {
 CP_BODY_TYPE_DYNAMIC,
 CP_BODY_TYPE_KINEMATIC,
 CP_BODY_TYPE_STATIC,
} cpBodyType;
typedef void (*cpBodyVelocityFunc)(cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
typedef void (*cpBodyPositionFunc)(cpBody *body, cpFloat dt);
 cpBody* cpBodyAlloc(void);
 cpBody* cpBodyInit(cpBody *body, cpFloat mass, cpFloat moment);
 cpBody* cpBodyNew(cpFloat mass, cpFloat moment);
 cpBody* cpBodyNewKinematic(void);
 cpBody* cpBodyNewStatic(void);
 void cpBodyDestroy(cpBody *body);
 void cpBodyFree(cpBody *body);
 void cpBodyActivate(cpBody *body);
 void cpBodyActivateStatic(cpBody *body, cpShape *filter);
 void cpBodySleep(cpBody *body);
 void cpBodySleepWithGroup(cpBody *body, cpBody *group);
 cpBool cpBodyIsSleeping(const cpBody *body);
 cpBodyType cpBodyGetType(cpBody *body);
 void cpBodySetType(cpBody *body, cpBodyType type);
 cpSpace* cpBodyGetSpace(const cpBody *body);
 cpFloat cpBodyGetMass(const cpBody *body);
 void cpBodySetMass(cpBody *body, cpFloat m);
 cpFloat cpBodyGetMoment(const cpBody *body);
 void cpBodySetMoment(cpBody *body, cpFloat i);
 cpVect cpBodyGetPosition(const cpBody *body);
 void cpBodySetPosition(cpBody *body, cpVect pos);
 cpVect cpBodyGetCenterOfGravity(const cpBody *body);
 void cpBodySetCenterOfGravity(cpBody *body, cpVect cog);
 cpVect cpBodyGetVelocity(const cpBody *body);
 void cpBodySetVelocity(cpBody *body, cpVect velocity);
 cpVect cpBodyGetForce(const cpBody *body);
 void cpBodySetForce(cpBody *body, cpVect force);
 cpFloat cpBodyGetAngle(const cpBody *body);
 void cpBodySetAngle(cpBody *body, cpFloat a);
 cpFloat cpBodyGetAngularVelocity(const cpBody *body);
 void cpBodySetAngularVelocity(cpBody *body, cpFloat angularVelocity);
 cpFloat cpBodyGetTorque(const cpBody *body);
 void cpBodySetTorque(cpBody *body, cpFloat torque);
 cpVect cpBodyGetRotation(const cpBody *body);
 cpDataPointer cpBodyGetUserData(const cpBody *body);
 void cpBodySetUserData(cpBody *body, cpDataPointer userData);
 void cpBodySetVelocityUpdateFunc(cpBody *body, cpBodyVelocityFunc velocityFunc);
 void cpBodySetPositionUpdateFunc(cpBody *body, cpBodyPositionFunc positionFunc);
 void cpBodyUpdateVelocity(cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
 void cpBodyUpdatePosition(cpBody *body, cpFloat dt);
 cpVect cpBodyLocalToWorld(const cpBody *body, const cpVect point);
 cpVect cpBodyWorldToLocal(const cpBody *body, const cpVect point);
 void cpBodyApplyForceAtWorldPoint(cpBody *body, cpVect force, cpVect point);
 void cpBodyApplyForceAtLocalPoint(cpBody *body, cpVect force, cpVect point);
 void cpBodyApplyImpulseAtWorldPoint(cpBody *body, cpVect impulse, cpVect point);
 void cpBodyApplyImpulseAtLocalPoint(cpBody *body, cpVect impulse, cpVect point);
 cpVect cpBodyGetVelocityAtWorldPoint(const cpBody *body, cpVect point);
 cpVect cpBodyGetVelocityAtLocalPoint(const cpBody *body, cpVect point);
 cpFloat cpBodyKineticEnergy(const cpBody *body);
typedef void (*cpBodyShapeIteratorFunc)(cpBody *body, cpShape *shape, void *data);
 void cpBodyEachShape(cpBody *body, cpBodyShapeIteratorFunc func, void *data);
typedef void (*cpBodyConstraintIteratorFunc)(cpBody *body, cpConstraint *constraint, void *data);
 void cpBodyEachConstraint(cpBody *body, cpBodyConstraintIteratorFunc func, void *data);
typedef void (*cpBodyArbiterIteratorFunc)(cpBody *body, cpArbiter *arbiter, void *data);
 void cpBodyEachArbiter(cpBody *body, cpBodyArbiterIteratorFunc func, void *data);
typedef struct cpPointQueryInfo {
 const cpShape *shape;
 cpVect point;
 cpFloat distance;
 cpVect gradient;
} cpPointQueryInfo;
typedef struct cpSegmentQueryInfo {
 const cpShape *shape;
 cpVect point;
 cpVect normal;
 cpFloat alpha;
} cpSegmentQueryInfo;
typedef struct cpShapeFilter {
 cpGroup group;
 cpBitmask categories;
 cpBitmask mask;
} cpShapeFilter;
static const cpShapeFilter CP_SHAPE_FILTER_ALL;
static const cpShapeFilter CP_SHAPE_FILTER_NONE;
static inline cpShapeFilter
cpShapeFilterNew(cpGroup group, cpBitmask categories, cpBitmask mask);
 void cpShapeDestroy(cpShape *shape);
 void cpShapeFree(cpShape *shape);
 cpBB cpShapeCacheBB(cpShape *shape);
 cpBB cpShapeUpdate(cpShape *shape, cpTransform transform);
 cpFloat cpShapePointQuery(const cpShape *shape, cpVect p, cpPointQueryInfo *out);
 cpBool cpShapeSegmentQuery(const cpShape *shape, cpVect a, cpVect b, cpFloat radius, cpSegmentQueryInfo *info);
 cpContactPointSet cpShapesCollide(const cpShape *a, const cpShape *b);
 cpSpace* cpShapeGetSpace(const cpShape *shape);
 cpBody* cpShapeGetBody(const cpShape *shape);
 void cpShapeSetBody(cpShape *shape, cpBody *body);
 cpFloat cpShapeGetMass(cpShape *shape);
 void cpShapeSetMass(cpShape *shape, cpFloat mass);
 cpFloat cpShapeGetDensity(cpShape *shape);
 void cpShapeSetDensity(cpShape *shape, cpFloat density);
 cpFloat cpShapeGetMoment(cpShape *shape);
 cpFloat cpShapeGetArea(cpShape *shape);
 cpVect cpShapeGetCenterOfGravity(cpShape *shape);
 cpBB cpShapeGetBB(const cpShape *shape);
 cpBool cpShapeGetSensor(const cpShape *shape);
 void cpShapeSetSensor(cpShape *shape, cpBool sensor);
 cpFloat cpShapeGetElasticity(const cpShape *shape);
 void cpShapeSetElasticity(cpShape *shape, cpFloat elasticity);
 cpFloat cpShapeGetFriction(const cpShape *shape);
 void cpShapeSetFriction(cpShape *shape, cpFloat friction);
 cpVect cpShapeGetSurfaceVelocity(const cpShape *shape);
 void cpShapeSetSurfaceVelocity(cpShape *shape, cpVect surfaceVelocity);
 cpDataPointer cpShapeGetUserData(const cpShape *shape);
 void cpShapeSetUserData(cpShape *shape, cpDataPointer userData);
 cpCollisionType cpShapeGetCollisionType(const cpShape *shape);
 void cpShapeSetCollisionType(cpShape *shape, cpCollisionType collisionType);
 cpShapeFilter cpShapeGetFilter(const cpShape *shape);
 void cpShapeSetFilter(cpShape *shape, cpShapeFilter filter);
 cpCircleShape* cpCircleShapeAlloc(void);
 cpCircleShape* cpCircleShapeInit(cpCircleShape *circle, cpBody *body, cpFloat radius, cpVect offset);
 cpShape* cpCircleShapeNew(cpBody *body, cpFloat radius, cpVect offset);
 cpVect cpCircleShapeGetOffset(const cpShape *shape);
 cpFloat cpCircleShapeGetRadius(const cpShape *shape);
 cpSegmentShape* cpSegmentShapeAlloc(void);
 cpSegmentShape* cpSegmentShapeInit(cpSegmentShape *seg, cpBody *body, cpVect a, cpVect b, cpFloat radius);
 cpShape* cpSegmentShapeNew(cpBody *body, cpVect a, cpVect b, cpFloat radius);
 void cpSegmentShapeSetNeighbors(cpShape *shape, cpVect prev, cpVect next);
 cpVect cpSegmentShapeGetA(const cpShape *shape);
 cpVect cpSegmentShapeGetB(const cpShape *shape);
 cpVect cpSegmentShapeGetNormal(const cpShape *shape);
 cpFloat cpSegmentShapeGetRadius(const cpShape *shape);
 cpPolyShape* cpPolyShapeAlloc(void);
 cpPolyShape* cpPolyShapeInit(cpPolyShape *poly, cpBody *body, int count, const cpVect *verts, cpTransform transform, cpFloat radius);
 cpPolyShape* cpPolyShapeInitRaw(cpPolyShape *poly, cpBody *body, int count, const cpVect *verts, cpFloat radius);
 cpShape* cpPolyShapeNew(cpBody *body, int count, const cpVect *verts, cpTransform transform, cpFloat radius);
 cpShape* cpPolyShapeNewRaw(cpBody *body, int count, const cpVect *verts, cpFloat radius);
 cpPolyShape* cpBoxShapeInit(cpPolyShape *poly, cpBody *body, cpFloat width, cpFloat height, cpFloat radius);
 cpPolyShape* cpBoxShapeInit2(cpPolyShape *poly, cpBody *body, cpBB box, cpFloat radius);
 cpShape* cpBoxShapeNew(cpBody *body, cpFloat width, cpFloat height, cpFloat radius);
 cpShape* cpBoxShapeNew2(cpBody *body, cpBB box, cpFloat radius);
 int cpPolyShapeGetCount(const cpShape *shape);
 cpVect cpPolyShapeGetVert(const cpShape *shape, int index);
 cpFloat cpPolyShapeGetRadius(const cpShape *shape);
typedef void (*cpConstraintPreSolveFunc)(cpConstraint *constraint, cpSpace *space);
typedef void (*cpConstraintPostSolveFunc)(cpConstraint *constraint, cpSpace *space);
 void cpConstraintDestroy(cpConstraint *constraint);
 void cpConstraintFree(cpConstraint *constraint);
 cpSpace* cpConstraintGetSpace(const cpConstraint *constraint);
 cpBody* cpConstraintGetBodyA(const cpConstraint *constraint);
 cpBody* cpConstraintGetBodyB(const cpConstraint *constraint);
 cpFloat cpConstraintGetMaxForce(const cpConstraint *constraint);
 void cpConstraintSetMaxForce(cpConstraint *constraint, cpFloat maxForce);
 cpFloat cpConstraintGetErrorBias(const cpConstraint *constraint);
 void cpConstraintSetErrorBias(cpConstraint *constraint, cpFloat errorBias);
 cpFloat cpConstraintGetMaxBias(const cpConstraint *constraint);
 void cpConstraintSetMaxBias(cpConstraint *constraint, cpFloat maxBias);
 cpBool cpConstraintGetCollideBodies(const cpConstraint *constraint);
 void cpConstraintSetCollideBodies(cpConstraint *constraint, cpBool collideBodies);
 cpConstraintPreSolveFunc cpConstraintGetPreSolveFunc(const cpConstraint *constraint);
 void cpConstraintSetPreSolveFunc(cpConstraint *constraint, cpConstraintPreSolveFunc preSolveFunc);
 cpConstraintPostSolveFunc cpConstraintGetPostSolveFunc(const cpConstraint *constraint);
 void cpConstraintSetPostSolveFunc(cpConstraint *constraint, cpConstraintPostSolveFunc postSolveFunc);
 cpDataPointer cpConstraintGetUserData(const cpConstraint *constraint);
 void cpConstraintSetUserData(cpConstraint *constraint, cpDataPointer userData);
 cpFloat cpConstraintGetImpulse(cpConstraint *constraint);
 cpBool cpConstraintIsPinJoint(const cpConstraint *constraint);
 cpPinJoint* cpPinJointAlloc(void);
 cpPinJoint* cpPinJointInit(cpPinJoint *joint, cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB);
 cpConstraint* cpPinJointNew(cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB);
 cpVect cpPinJointGetAnchorA(const cpConstraint *constraint);
 void cpPinJointSetAnchorA(cpConstraint *constraint, cpVect anchorA);
 cpVect cpPinJointGetAnchorB(const cpConstraint *constraint);
 void cpPinJointSetAnchorB(cpConstraint *constraint, cpVect anchorB);
 cpFloat cpPinJointGetDist(const cpConstraint *constraint);
 void cpPinJointSetDist(cpConstraint *constraint, cpFloat dist);
 cpBool cpConstraintIsSlideJoint(const cpConstraint *constraint);
 cpSlideJoint* cpSlideJointAlloc(void);
 cpSlideJoint* cpSlideJointInit(cpSlideJoint *joint, cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB, cpFloat min, cpFloat max);
 cpConstraint* cpSlideJointNew(cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB, cpFloat min, cpFloat max);
 cpVect cpSlideJointGetAnchorA(const cpConstraint *constraint);
 void cpSlideJointSetAnchorA(cpConstraint *constraint, cpVect anchorA);
 cpVect cpSlideJointGetAnchorB(const cpConstraint *constraint);
 void cpSlideJointSetAnchorB(cpConstraint *constraint, cpVect anchorB);
 cpFloat cpSlideJointGetMin(const cpConstraint *constraint);
 void cpSlideJointSetMin(cpConstraint *constraint, cpFloat min);
 cpFloat cpSlideJointGetMax(const cpConstraint *constraint);
 void cpSlideJointSetMax(cpConstraint *constraint, cpFloat max);
 cpBool cpConstraintIsPivotJoint(const cpConstraint *constraint);
 cpPivotJoint* cpPivotJointAlloc(void);
 cpPivotJoint* cpPivotJointInit(cpPivotJoint *joint, cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB);
 cpConstraint* cpPivotJointNew(cpBody *a, cpBody *b, cpVect pivot);
 cpConstraint* cpPivotJointNew2(cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB);
 cpVect cpPivotJointGetAnchorA(const cpConstraint *constraint);
 void cpPivotJointSetAnchorA(cpConstraint *constraint, cpVect anchorA);
 cpVect cpPivotJointGetAnchorB(const cpConstraint *constraint);
 void cpPivotJointSetAnchorB(cpConstraint *constraint, cpVect anchorB);
 cpBool cpConstraintIsGrooveJoint(const cpConstraint *constraint);
 cpGrooveJoint* cpGrooveJointAlloc(void);
 cpGrooveJoint* cpGrooveJointInit(cpGrooveJoint *joint, cpBody *a, cpBody *b, cpVect groove_a, cpVect groove_b, cpVect anchorB);
 cpConstraint* cpGrooveJointNew(cpBody *a, cpBody *b, cpVect groove_a, cpVect groove_b, cpVect anchorB);
 cpVect cpGrooveJointGetGrooveA(const cpConstraint *constraint);
 void cpGrooveJointSetGrooveA(cpConstraint *constraint, cpVect grooveA);
 cpVect cpGrooveJointGetGrooveB(const cpConstraint *constraint);
 void cpGrooveJointSetGrooveB(cpConstraint *constraint, cpVect grooveB);
 cpVect cpGrooveJointGetAnchorB(const cpConstraint *constraint);
 void cpGrooveJointSetAnchorB(cpConstraint *constraint, cpVect anchorB);
 cpBool cpConstraintIsDampedSpring(const cpConstraint *constraint);
typedef cpFloat (*cpDampedSpringForceFunc)(cpConstraint *spring, cpFloat dist);
 cpDampedSpring* cpDampedSpringAlloc(void);
 cpDampedSpring* cpDampedSpringInit(cpDampedSpring *joint, cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB, cpFloat restLength, cpFloat stiffness, cpFloat damping);
 cpConstraint* cpDampedSpringNew(cpBody *a, cpBody *b, cpVect anchorA, cpVect anchorB, cpFloat restLength, cpFloat stiffness, cpFloat damping);
 cpVect cpDampedSpringGetAnchorA(const cpConstraint *constraint);
 void cpDampedSpringSetAnchorA(cpConstraint *constraint, cpVect anchorA);
 cpVect cpDampedSpringGetAnchorB(const cpConstraint *constraint);
 void cpDampedSpringSetAnchorB(cpConstraint *constraint, cpVect anchorB);
 cpFloat cpDampedSpringGetRestLength(const cpConstraint *constraint);
 void cpDampedSpringSetRestLength(cpConstraint *constraint, cpFloat restLength);
 cpFloat cpDampedSpringGetStiffness(const cpConstraint *constraint);
 void cpDampedSpringSetStiffness(cpConstraint *constraint, cpFloat stiffness);
 cpFloat cpDampedSpringGetDamping(const cpConstraint *constraint);
 void cpDampedSpringSetDamping(cpConstraint *constraint, cpFloat damping);
 cpDampedSpringForceFunc cpDampedSpringGetSpringForceFunc(const cpConstraint *constraint);
 void cpDampedSpringSetSpringForceFunc(cpConstraint *constraint, cpDampedSpringForceFunc springForceFunc);
 cpBool cpConstraintIsDampedRotarySpring(const cpConstraint *constraint);
typedef cpFloat (*cpDampedRotarySpringTorqueFunc)(struct cpConstraint *spring, cpFloat relativeAngle);
 cpDampedRotarySpring* cpDampedRotarySpringAlloc(void);
 cpDampedRotarySpring* cpDampedRotarySpringInit(cpDampedRotarySpring *joint, cpBody *a, cpBody *b, cpFloat restAngle, cpFloat stiffness, cpFloat damping);
 cpConstraint* cpDampedRotarySpringNew(cpBody *a, cpBody *b, cpFloat restAngle, cpFloat stiffness, cpFloat damping);
 cpFloat cpDampedRotarySpringGetRestAngle(const cpConstraint *constraint);
 void cpDampedRotarySpringSetRestAngle(cpConstraint *constraint, cpFloat restAngle);
 cpFloat cpDampedRotarySpringGetStiffness(const cpConstraint *constraint);
 void cpDampedRotarySpringSetStiffness(cpConstraint *constraint, cpFloat stiffness);
 cpFloat cpDampedRotarySpringGetDamping(const cpConstraint *constraint);
 void cpDampedRotarySpringSetDamping(cpConstraint *constraint, cpFloat damping);
 cpDampedRotarySpringTorqueFunc cpDampedRotarySpringGetSpringTorqueFunc(const cpConstraint *constraint);
 void cpDampedRotarySpringSetSpringTorqueFunc(cpConstraint *constraint, cpDampedRotarySpringTorqueFunc springTorqueFunc);
 cpBool cpConstraintIsRotaryLimitJoint(const cpConstraint *constraint);
 cpRotaryLimitJoint* cpRotaryLimitJointAlloc(void);
 cpRotaryLimitJoint* cpRotaryLimitJointInit(cpRotaryLimitJoint *joint, cpBody *a, cpBody *b, cpFloat min, cpFloat max);
 cpConstraint* cpRotaryLimitJointNew(cpBody *a, cpBody *b, cpFloat min, cpFloat max);
 cpFloat cpRotaryLimitJointGetMin(const cpConstraint *constraint);
 void cpRotaryLimitJointSetMin(cpConstraint *constraint, cpFloat min);
 cpFloat cpRotaryLimitJointGetMax(const cpConstraint *constraint);
 void cpRotaryLimitJointSetMax(cpConstraint *constraint, cpFloat max);
 cpBool cpConstraintIsRatchetJoint(const cpConstraint *constraint);
 cpRatchetJoint* cpRatchetJointAlloc(void);
 cpRatchetJoint* cpRatchetJointInit(cpRatchetJoint *joint, cpBody *a, cpBody *b, cpFloat phase, cpFloat ratchet);
 cpConstraint* cpRatchetJointNew(cpBody *a, cpBody *b, cpFloat phase, cpFloat ratchet);
 cpFloat cpRatchetJointGetAngle(const cpConstraint *constraint);
 void cpRatchetJointSetAngle(cpConstraint *constraint, cpFloat angle);
 cpFloat cpRatchetJointGetPhase(const cpConstraint *constraint);
 void cpRatchetJointSetPhase(cpConstraint *constraint, cpFloat phase);
 cpFloat cpRatchetJointGetRatchet(const cpConstraint *constraint);
 void cpRatchetJointSetRatchet(cpConstraint *constraint, cpFloat ratchet);
 cpBool cpConstraintIsGearJoint(const cpConstraint *constraint);
 cpGearJoint* cpGearJointAlloc(void);
 cpGearJoint* cpGearJointInit(cpGearJoint *joint, cpBody *a, cpBody *b, cpFloat phase, cpFloat ratio);
 cpConstraint* cpGearJointNew(cpBody *a, cpBody *b, cpFloat phase, cpFloat ratio);
 cpFloat cpGearJointGetPhase(const cpConstraint *constraint);
 void cpGearJointSetPhase(cpConstraint *constraint, cpFloat phase);
 cpFloat cpGearJointGetRatio(const cpConstraint *constraint);
 void cpGearJointSetRatio(cpConstraint *constraint, cpFloat ratio);
typedef struct cpSimpleMotor cpSimpleMotor;
 cpBool cpConstraintIsSimpleMotor(const cpConstraint *constraint);
 cpSimpleMotor* cpSimpleMotorAlloc(void);
 cpSimpleMotor* cpSimpleMotorInit(cpSimpleMotor *joint, cpBody *a, cpBody *b, cpFloat rate);
 cpConstraint* cpSimpleMotorNew(cpBody *a, cpBody *b, cpFloat rate);
 cpFloat cpSimpleMotorGetRate(const cpConstraint *constraint);
 void cpSimpleMotorSetRate(cpConstraint *constraint, cpFloat rate);
typedef cpBool (*cpCollisionBeginFunc)(cpArbiter *arb, cpSpace *space, cpDataPointer userData);
typedef cpBool (*cpCollisionPreSolveFunc)(cpArbiter *arb, cpSpace *space, cpDataPointer userData);
typedef void (*cpCollisionPostSolveFunc)(cpArbiter *arb, cpSpace *space, cpDataPointer userData);
typedef void (*cpCollisionSeparateFunc)(cpArbiter *arb, cpSpace *space, cpDataPointer userData);
struct cpCollisionHandler {
 const cpCollisionType typeA;
 const cpCollisionType typeB;
 cpCollisionBeginFunc beginFunc;
 cpCollisionPreSolveFunc preSolveFunc;
 cpCollisionPostSolveFunc postSolveFunc;
 cpCollisionSeparateFunc separateFunc;
 cpDataPointer userData;
};
 cpSpace* cpSpaceAlloc(void);
 cpSpace* cpSpaceInit(cpSpace *space);
 cpSpace* cpSpaceNew(void);
 void cpSpaceDestroy(cpSpace *space);
 void cpSpaceFree(cpSpace *space);
 int cpSpaceGetIterations(const cpSpace *space);
 void cpSpaceSetIterations(cpSpace *space, int iterations);
 cpVect cpSpaceGetGravity(const cpSpace *space);
 void cpSpaceSetGravity(cpSpace *space, cpVect gravity);
 cpFloat cpSpaceGetDamping(const cpSpace *space);
 void cpSpaceSetDamping(cpSpace *space, cpFloat damping);
 cpFloat cpSpaceGetIdleSpeedThreshold(const cpSpace *space);
 void cpSpaceSetIdleSpeedThreshold(cpSpace *space, cpFloat idleSpeedThreshold);
 cpFloat cpSpaceGetSleepTimeThreshold(const cpSpace *space);
 void cpSpaceSetSleepTimeThreshold(cpSpace *space, cpFloat sleepTimeThreshold);
 cpFloat cpSpaceGetCollisionSlop(const cpSpace *space);
 void cpSpaceSetCollisionSlop(cpSpace *space, cpFloat collisionSlop);
 cpFloat cpSpaceGetCollisionBias(const cpSpace *space);
 void cpSpaceSetCollisionBias(cpSpace *space, cpFloat collisionBias);
 cpTimestamp cpSpaceGetCollisionPersistence(const cpSpace *space);
 void cpSpaceSetCollisionPersistence(cpSpace *space, cpTimestamp collisionPersistence);
 cpDataPointer cpSpaceGetUserData(const cpSpace *space);
 void cpSpaceSetUserData(cpSpace *space, cpDataPointer userData);
 cpBody* cpSpaceGetStaticBody(const cpSpace *space);
 cpFloat cpSpaceGetCurrentTimeStep(const cpSpace *space);
 cpBool cpSpaceIsLocked(cpSpace *space);
 cpCollisionHandler *cpSpaceAddDefaultCollisionHandler(cpSpace *space);
 cpCollisionHandler *cpSpaceAddCollisionHandler(cpSpace *space, cpCollisionType a, cpCollisionType b);
 cpCollisionHandler *cpSpaceAddWildcardHandler(cpSpace *space, cpCollisionType type);
 cpShape* cpSpaceAddShape(cpSpace *space, cpShape *shape);
 cpBody* cpSpaceAddBody(cpSpace *space, cpBody *body);
 cpConstraint* cpSpaceAddConstraint(cpSpace *space, cpConstraint *constraint);
 void cpSpaceRemoveShape(cpSpace *space, cpShape *shape);
 void cpSpaceRemoveBody(cpSpace *space, cpBody *body);
 void cpSpaceRemoveConstraint(cpSpace *space, cpConstraint *constraint);
 cpBool cpSpaceContainsShape(cpSpace *space, cpShape *shape);
 cpBool cpSpaceContainsBody(cpSpace *space, cpBody *body);
 cpBool cpSpaceContainsConstraint(cpSpace *space, cpConstraint *constraint);
typedef void (*cpPostStepFunc)(cpSpace *space, void *key, void *data);
 cpBool cpSpaceAddPostStepCallback(cpSpace *space, cpPostStepFunc func, void *key, void *data);
typedef void (*cpSpacePointQueryFunc)(cpShape *shape, cpVect point, cpFloat distance, cpVect gradient, void *data);
 void cpSpacePointQuery(cpSpace *space, cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpSpacePointQueryFunc func, void *data);
 cpShape *cpSpacePointQueryNearest(cpSpace *space, cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpPointQueryInfo *out);
typedef void (*cpSpaceSegmentQueryFunc)(cpShape *shape, cpVect point, cpVect normal, cpFloat alpha, void *data);
 void cpSpaceSegmentQuery(cpSpace *space, cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSpaceSegmentQueryFunc func, void *data);
 cpShape *cpSpaceSegmentQueryFirst(cpSpace *space, cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSegmentQueryInfo *out);
typedef void (*cpSpaceBBQueryFunc)(cpShape *shape, void *data);
 void cpSpaceBBQuery(cpSpace *space, cpBB bb, cpShapeFilter filter, cpSpaceBBQueryFunc func, void *data);
typedef void (*cpSpaceShapeQueryFunc)(cpShape *shape, cpContactPointSet *points, void *data);
 cpBool cpSpaceShapeQuery(cpSpace *space, cpShape *shape, cpSpaceShapeQueryFunc func, void *data);
typedef void (*cpSpaceBodyIteratorFunc)(cpBody *body, void *data);
 void cpSpaceEachBody(cpSpace *space, cpSpaceBodyIteratorFunc func, void *data);
typedef void (*cpSpaceShapeIteratorFunc)(cpShape *shape, void *data);
 void cpSpaceEachShape(cpSpace *space, cpSpaceShapeIteratorFunc func, void *data);
typedef void (*cpSpaceConstraintIteratorFunc)(cpConstraint *constraint, void *data);
 void cpSpaceEachConstraint(cpSpace *space, cpSpaceConstraintIteratorFunc func, void *data);
 void cpSpaceReindexStatic(cpSpace *space);
 void cpSpaceReindexShape(cpSpace *space, cpShape *shape);
 void cpSpaceReindexShapesForBody(cpSpace *space, cpBody *body);
 void cpSpaceUseSpatialHash(cpSpace *space, cpFloat dim, int count);
 void cpSpaceStep(cpSpace *space, cpFloat dt);
typedef struct cpSpaceDebugColor {
 float r, g, b, a;
} cpSpaceDebugColor;
typedef void (*cpSpaceDebugDrawCircleImpl)(cpVect pos, cpFloat angle, cpFloat radius, cpSpaceDebugColor outlineColor, cpSpaceDebugColor fillColor, cpDataPointer data);
typedef void (*cpSpaceDebugDrawSegmentImpl)(cpVect a, cpVect b, cpSpaceDebugColor color, cpDataPointer data);
typedef void (*cpSpaceDebugDrawFatSegmentImpl)(cpVect a, cpVect b, cpFloat radius, cpSpaceDebugColor outlineColor, cpSpaceDebugColor fillColor, cpDataPointer data);
typedef void (*cpSpaceDebugDrawPolygonImpl)(int count, const cpVect *verts, cpFloat radius, cpSpaceDebugColor outlineColor, cpSpaceDebugColor fillColor, cpDataPointer data);
typedef void (*cpSpaceDebugDrawDotImpl)(cpFloat size, cpVect pos, cpSpaceDebugColor color, cpDataPointer data);
typedef cpSpaceDebugColor (*cpSpaceDebugDrawColorForShapeImpl)(cpShape *shape, cpDataPointer data);
typedef enum cpSpaceDebugDrawFlags {
 CP_SPACE_DEBUG_DRAW_SHAPES = 1<<0,
 CP_SPACE_DEBUG_DRAW_CONSTRAINTS = 1<<1,
 CP_SPACE_DEBUG_DRAW_COLLISION_POINTS = 1<<2,
} cpSpaceDebugDrawFlags;
typedef struct cpSpaceDebugDrawOptions {
 cpSpaceDebugDrawCircleImpl drawCircle;
 cpSpaceDebugDrawSegmentImpl drawSegment;
 cpSpaceDebugDrawFatSegmentImpl drawFatSegment;
 cpSpaceDebugDrawPolygonImpl drawPolygon;
 cpSpaceDebugDrawDotImpl drawDot;
 cpSpaceDebugDrawFlags flags;
 cpSpaceDebugColor shapeOutlineColor;
 cpSpaceDebugDrawColorForShapeImpl colorForShape;
 cpSpaceDebugColor constraintColor;
 cpSpaceDebugColor collisionPointColor;
 cpDataPointer data;
} cpSpaceDebugDrawOptions;
 void cpSpaceDebugDraw(cpSpace *space, cpSpaceDebugDrawOptions *options);
 extern const char *cpVersionString;
 cpFloat cpMomentForCircle(cpFloat m, cpFloat r1, cpFloat r2, cpVect offset);
 cpFloat cpAreaForCircle(cpFloat r1, cpFloat r2);
 cpFloat cpMomentForSegment(cpFloat m, cpVect a, cpVect b, cpFloat radius);
 cpFloat cpAreaForSegment(cpVect a, cpVect b, cpFloat radius);
 cpFloat cpMomentForPoly(cpFloat m, int count, const cpVect *verts, cpVect offset, cpFloat radius);
 cpFloat cpAreaForPoly(const int count, const cpVect *verts, cpFloat radius);
 cpVect cpCentroidForPoly(const int count, const cpVect *verts);
 cpFloat cpMomentForBox(cpFloat m, cpFloat width, cpFloat height);
 cpFloat cpMomentForBox2(cpFloat m, cpBB box);
 int cpConvexHull(int count, const cpVect *verts, cpVect *result, int *first, cpFloat tol);
static inline cpVect
cpClosetPointOnSegment(const cpVect p, const cpVect a, const cpVect b);
