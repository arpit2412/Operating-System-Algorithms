# Operating-System-Algorithms
Basic algorithms related to Operating Systems 

## Best Fit 
This method keeps the free/busy list in order by size – smallest to largest. In this method, the operating system first searches the whole of the memory according to the size of the given job and allocates it to the closest-fitting free partition in the memory, making it able to use memory efficiently

## FIFO Page Replacement 
In this algorithm, operating system keeps track of all pages in the memory in a queue, oldest page is in the front of the queue. When a page needs to be replaced page in the front of the queue is selected for removal.

## First Fit
In the first fit approach is to allocate the first free partition or hole large enough which can accommodate the process. It finishes after finding the first suitable free partition.

## LFU and LRU 
In LRU we only check on which page is recently that used old in time than other pages i.e checking only based on recent used pages. BUT in LFU we check the old page as well as the frequency of that page and if frequency of the page is lager than the old page we cant remove it and if we all old pages are having same frequency then take last i.e FIFO method for that. and remove page

## Paging
Paging is a memory management scheme that eliminates the need for contiguous allocation of physical memory.

## Worst Fit 
Worst Fit allocates a process to the partition which is largest sufficient among the freely available partitions available in the main memory. If a large process comes at a later stage, then memory will not have space to accommodate it

## First Come First Serve (FCFS)

    Jobs are executed on first come, first serve basis.
    It is a non-preemptive, pre-emptive scheduling algorithm.
    Easy to understand and implement.
    Its implementation is based on FIFO queue.
    Poor in performance as average wait time is high.
 
## Shortest Job Next (SJN)

    This is also known as shortest job first, or SJF

    This is a non-preemptive, pre-emptive scheduling algorithm.

    Best approach to minimize waiting time.

    Easy to implement in Batch systems where required CPU time is known in advance.

    Impossible to implement in interactive systems where required CPU time is not known.

    The processer should know in advance how much time process will take.

## Priority Based Scheduling

    Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms in batch systems.

    Each process is assigned a priority. Process with highest priority is to be executed first and so on.

    Processes with same priority are executed on first come first served basis.

    Priority can be decided based on memory requirements, time requirements or any other resource requirement.

## Round Robin Scheduling

    Round Robin is the preemptive process scheduling algorithm.

    Each process is provided a fix time to execute, it is called a quantum.

    Once a process is executed for a given time period, it is preempted and other process executes for a given time period.

    Context switching is used to save states of preempted processes.

