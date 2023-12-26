/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var a = n;
    return function() {
        a = a+1;
        return a-1;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */