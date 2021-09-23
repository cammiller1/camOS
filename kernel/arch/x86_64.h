/* *
 * 
 * x86_64.h
 * 
 * To allow the kernel to call special instructions from the x86-64 architecture.
 * 
 * */


// used by locks

static inline bool test_and_set(bool *raw_lock_addr)
{
    // TO DO
    return;
}


// used by ...