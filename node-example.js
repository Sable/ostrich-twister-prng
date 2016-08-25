var twister = require('./ostrich-twister-prng.js');

for (var i = 0; i < 10; ++i) {
    console.log(twister.random());
}

