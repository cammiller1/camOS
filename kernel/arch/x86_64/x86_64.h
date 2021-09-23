/* *
 * 
 * x86_64.h
 * 
 * To allow the kernel to call special x86 instructions.
 * 
 * */


// used by locks

static inline bool test_and_set(bool *raw_lock_addr, bool new_val)
{

}


// used by ...