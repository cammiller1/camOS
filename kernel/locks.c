/*
 *  locks.c
 */



/* for spin_lock */


void init(struct spin_lock *lock_addr)
{
    lock_addr->unlocked = true;
}

void acquire(struct spin_lock *lock_addr)
{
    disable_interrupts();   //TO DO: define this function

    for (;;) {
        if (lock_addr->unlocked == true) {
            // it does not actually matter if we pass by ref or val below
            // because test_and_set() is an inline function.
            if ( test_and_set(&lock_addr->unlocked) )
                break;
        }
            
    }

    enable_interrupts();   //TO DO: define this function
}

void release(struct spin_lock *lock_addr)
{
    ;
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

    // ...
}

void release(struct sleep_lock *lock_addr)
{
    ;
}