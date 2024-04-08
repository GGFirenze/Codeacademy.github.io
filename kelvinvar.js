//variable with constant value
const kelvin = 0;
//celsius is 273 degrees less than kelvin
const celsius = kelvin - 273;
//fahrenheit is celsius times 9/5 + 32
let fahrenheit = celsius * (9/5) + 32;
//to round the result I should use var = Math.floor(var);
fahrenheit = Math.floor(fahrenheit);
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);

let newton = celsius*(33/100);
newton = Math.floor(newton);
console.log(`The temperature is ${newton} degrees Newton.`);
