all:
	emcc mt19937ar.c -o ostrich-twister-prng.js -s EXPORTED_FUNCTIONS="['_gen_rand']" --post-js post-js.js --pre-js pre-js.js

browser-module:
	browserify node-module.js -s twister > twister.js
	echo '<html><body><script src="twister.js"></script></body></html>' > browser-module.html

browser-example:
	browserify node-example.js > node-example-bundle.js
	echo '<html><body><script src="node-example-bundle.js"></script></body></html>' > browser-example.html