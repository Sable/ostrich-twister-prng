ostrich-twister-prng.js:
	emcc ostrich_twister_rand.c -o ostrich-twister-prng.js -s EXPORTED_FUNCTIONS="['_ostrich_rand_double', '_ostrich_rand_seed', '_ostrich_rand_matrix']" --post-js post-js.js --pre-js pre-js.js

browserify-module: ostrich-twister-prng.js
	browserify node-module.js -s twister > twister.js
	echo '<html><body><script src="twister.js"></script></body></html>' > browser-module.html

browserify-example: ostrich-twister-prng.js
	browserify node-example.js > node-example-bundle.js
	echo '<html><body><script src="node-example-bundle.js"></script></body></html>' > browser-example.html

c-example:
	cat mt19937ar.c main.c > c-example.c
	gcc c-example.c -o c-example
