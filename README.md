# monte_cuda
A montecarlo simulation.
Planning to implement a montecarlo sim for simple european style calls (for now).
Doing both naive CPU and slightly less naive CUDA implementations. Benchmarking/Profiling/ETC...
Will later hope to do some un=naive CUDA implementation with very in-depth optimisations for my specific desktop computer.

## rough notes for now
all price stuff will be fixed decimal points with 5 points using std::uint64_t
will be converted to 2 decimal points for viewing