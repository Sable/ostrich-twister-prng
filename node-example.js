var genRand = require('./ostrich-twister-prng.js').genRand;

for (var i = 0; i < 10; ++i) {
    console.log(genRand());
}

