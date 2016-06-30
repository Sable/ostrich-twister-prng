module.exports = Module;

// Do not recurse into module and waste all day
Module.inspect = function() { return '[Module]' }

module.exports.random = module.exports._gen_rand;
module.exports.seed = module.exports._init_genrand;
