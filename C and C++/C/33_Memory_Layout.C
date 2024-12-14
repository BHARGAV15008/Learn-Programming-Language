/*
-------  There is two type of Memory Allocation  -------
    * Static Memory Allocation
    * Dynamic Memory Allocation
    
    ** Static Memory Allocation:
        1. Allocation done before execution;
        2. There is no memory reusability;
        3. Memory allocation cannt freed;
        4. Less efficient;

    ** Dynamic Memory Allocation:
        1. Allocation done during execution;
        2. There is provide memory reusability;
        3. Memory allocation can be freed when not required;
        4. More efficient;

    ###  Memory Assign:
        * Code : text Segment;
        * Static/Global Variable :
        *   * Data Segment - Iniyialised Segment;
        *   * BSS(Block Started by Symbol) - Uninitialised Segment;
        * Stack : 
        *   * Compiler allocates some spaces for the stack of the memory;
        *   * For some reason space gets some exhausted then called as stack overflow;
        * Heap :
        *   * Some limitation in stack;
        *   * Heap grow their memory according programmer;
        *   * We stored variable in memory and they used spaces until we free those spaces;
*/