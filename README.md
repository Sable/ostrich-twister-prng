# ostrich-twister-prng
Mersenne Twister pseudo-random number generator available for floating point numbers in JavaScript and C benchmarks in the Ostrich benchmark suite. It is compatible with the Python/Numpy and Matlab implementations.

All the following examples should print the following 10 numbers with more or less precision. They are all using the 1337 seed:

    0.2620246763108298
    0.15868397720623761
    0.27812651719432324
    0.45931688870768994
    0.32100054307375103
    0.5183928209589794
    0.26194292528089136
    0.9760852881008759
    0.7328145558713004
    0.11527422105427831

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

    rng(1337);
    for i=1:10; 
        disp(rand()); 
    end
    
# Python/Numpy example (type in a Python console with Numpy available)
    
    import numpy as np
    np.random.seed(1337)
    for i in range(10): print np.random.random()
