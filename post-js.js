module.exports = Module;

// Do not recurse into module and waste all day
Module.inspect = function() { return '[Module]' }

module.exports.genRand = module.exports._gen_rand;
