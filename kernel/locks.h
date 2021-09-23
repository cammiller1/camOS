/*
 * locks.h
 */

#include <stdbool.h>    // bool, true, false


struct spin_lock
{
    bool unlocked;    // The raw lock is a single bit
};

struct sleep_lock
{
    struct spin_lock guard;
    bool unlocked;
};