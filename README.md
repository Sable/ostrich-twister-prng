# ostrich-twister-prng
Mersenne Twister pseudo-random number generator available for floating point numbers in JavaScript and C benchmarks in the Ostrich benchmark suite. It is compatible with the Python/Numpy and Matlab implementations.

All the following examples should print the following 10 numbers with more or less precision:

    0.814724
    0.905792
    0.126987
    0.913376
    0.632359
    0.097540
    0.278498
    0.546882
    0.957507
    0.964889

# C example (with gcc)

    make c-example
    ./c-example 10

# Node example (with emscripten)

    make ostrich-twister-prng.js
    node node-example.js

# Web browser example (with emscripten and browserify)

    make browserify-example
    open browser-example.html # Look at the console output

# Matlab example (type in a Matlab console)

    rng(5489)
    for i=1:10; 
        disp(rand()); 
    end
    
# Python/Numpy example (type in a Python console with Numpy available)
    
    import numpy as np
    np.random.seed(5489)
    for i in range(10): print np.random.random()
