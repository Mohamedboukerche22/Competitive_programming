/**
 * @param {string} s
 * @return {number}
 */

// get a real job lol
var scoreOfString = function(s) {
    let sum = 0;
    for(let char = 0 ; char < s.length - 1; char++){
        sum += Math.abs(s[char].charCodeAt(0) - s[char+1].charCodeAt(0));
    }
    return sum;
};
