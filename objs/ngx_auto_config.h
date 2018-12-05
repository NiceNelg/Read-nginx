#define NGX_CONFIGURE " --prefix=~/workspace/nginx_debug --with-cc-opt='-g -00'"

#ifndef NGX_COMPILER
#define NGX_COMPILER  "gcc 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04.4) "
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  64
#endif


#define NGX_KQUEUE_UDATA_T  (void *)


#ifndef NGX_HAVE_UNIX_DOMAIN
#define NGX_HAVE_UNIX_DOMAIN  1
#endif

