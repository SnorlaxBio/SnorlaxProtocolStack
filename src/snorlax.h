/**
 * @file        snorlax.h
 * @brief
 * @details
 * 
 * @author      snorlax <ceo@snorlax.bio>
 * @since       May 22, 2024
 */

#ifndef   __SNORLAX__H__
#define   __SNORLAX__H__

#include <stdlib.h>
#include <stdio.h>

#define success                     0
#define fail                        (-1)
#define true                        1
#define false                       0
#define nil                         ((void *) 0)

#define addressof(o, offset)        (&o[offset])

#define snorlax_string_init(s)      (s[0] = 0)

#ifdef    SNORLAX_DEBUG
#define snorlax_debug_exit()        abort()
#else  // SNORLAX_DEBUG
#define snorlax_debug_exit()        do { } while(0)
#endif // SNORLAX_DEBUG

#define snorlax_error(format, ...) do {                                 \
    fprintf(stderr, "[error|%s:%d|%s] " format "\n", __FILE__,          \
                                                     __LINE__,          \
                                                     __func__,          \
                                                     ##__VA_ARGS__);    \
    snorlax_debug_exit();                                               \
} while(0)

#define snorlax_warning(format, ...) do {                               \
    fprintf(stderr, "[warning|%s:%d|%s] " format "\n", __FILE__,        \
                                                     __LINE__,          \
                                                     __func__,          \
                                                     ##__VA_ARGS__);    \
} while(0)

#define snorlax_implement(format, ...) do {                             \
    fprintf(stderr, "[implement|%s:%d|%s] " format "\n", __FILE__,      \
                                                     __LINE__,          \
                                                     __func__,          \
                                                     ##__VA_ARGS__);    \
    snorlax_debug_exit();                                               \
} while(0)

#endif // __SNORLAX__H__