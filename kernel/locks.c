/*
 *  locks.c
 */

#include "locks.h"          // struct spin_lock, struct sleep_lock, <stdbool.h>
#include "./arch/x86_64.h"  // test_and_set



/* for spin_lock */


void init(struct spin_lock *lock_addr)
{
    lock_addr->unlocked = true;
}


void acquire(struct spin_lock *lock_addr)
{
    disable_interrupts();   //TO DO: define this function

    bool *unlocked = &(lock_addr->unlocked);    // note: order of operations

    for (;;) {
        if (*unlocked == true) {    // test and test and set
            if ( test_and_set(unlocked) )   // note: we do not actually need to pass by ref to an inline function
                break;
        }
            
    }

    enable_interrupts();   //TO DO: define this function
}


void release(struct spin_lock *lock_addr)
{
    //TO DO
    return;
}



/* for sleep_lock */


void init(struct sleep_lock *lock_addr)
{
    init(lock_addr->guard);
    lock_addr->unlocked = true;
}


void acquire(struct sleep_lock *lock_addr)
{
    acquire(lock_addr);

    //TO DO
    return;
}


void release(struct sleep_lock *lock_addr)
{
    //TO DO
    return;;
}