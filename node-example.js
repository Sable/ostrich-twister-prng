var twister = require('./ostrich-twister-prng.js');
twister.seed(1337);

for (var i = 0; i < 10; ++i) {
    console.log(twister.random());
}

