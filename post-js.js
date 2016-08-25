module.exports = Module;

// Do not recurse into module and waste all day
Module.inspect = function() { return '[Module]' }

module.exports.random = module.exports._ostrich_rand_double;
module.exports.seed = module.exports._ostrich_rand_seed;
module.exports.rand = function (row_nb, col_nb) {
    if (row_nb === undefined) {
        return module.exports.random();
    } else if (col_nb === undefined) {
        col_nb = row_nb;
    } 

    var matrix = new Float64Array(row_nb*col_nb);
    for (var i = 0; i < row_nb*col_nb; ++i) {
        matrix[i] = module.exports.random()
    }
    return matrix
}
