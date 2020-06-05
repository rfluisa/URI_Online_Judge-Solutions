//1001	Extremamente Básico	Accepted	JavaScript	0.056	28/07/2019 15:43:14
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
   
console.log('X = ' + (a+b));