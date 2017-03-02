/* cpuUsageTest3.c - cpuUsageTest3 */

#include <xinu.h>

/*------------------------------------------------------------------------
 * cpuUsageTest2  -  Test CPU usage
 *------------------------------------------------------------------------
 */

void cpuUsageTest3() {
	int count = 0;

  while(1) {
    while (count < 1000) {
      count++;
    }
    struct procent *prptr = &proctab[currpid];
    kprintf("\n%s CPU Usage: %u\n", prptr->prname, prptr->prcpuused);
    sleepms(10);
  }

}
