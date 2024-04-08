//variable with constant value
const kelvin = 293;
//celsius is 273 degrees less than kelvin
var celsius = kelvin - 273;
//fahrenheit is celsius times 9/5 + 32
var fahrenheit = celsius * (9/5) + 32;
//to round the result I should use var = Math.floor(var);
fahrenheit = Math.floor(fahrenheit);
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);
