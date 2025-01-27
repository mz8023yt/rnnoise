

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RNN_INLINE inline
#define OPUS_INLINE inline
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
/** RNNoise wrapper for malloc(). To do your own dynamic allocation, all you need t
o do is replace this function and rnnoise_free */
#ifndef OVERRIDE_RNNOISE_ALLOC

static RNN_INLINE void *rnnoise_alloc(size_t size)
{
    return malloc(size);
}

#endif

/** RNNoise wrapper for free(). To do your own dynamic allocation, all you need to do is replace this function and rnnoise_alloc */
#ifndef OVERRIDE_RNNOISE_FREE

static RNN_INLINE void rnnoise_free(void *ptr)
{
    if (ptr)
        free(ptr);
}

#endif

#endif
