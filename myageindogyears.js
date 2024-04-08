//var called myAge
var myAge = 32;
//var which value will change
let earlyYears = 2;
earlyYears = earlyYears * 10.5;
//a changeable var that removes 2 from myAge
let laterYears = myAge - earlyYears;
//multiply laterYears by 4
laterYears = laterYears * 4;
console.log(earlyYears);
console.log(laterYears);
//var where we add early and later years
var myAgeInDogYears = earlyYears + laterYears;
//myName written in lowercase
var myName = 'GIULIANO GIANNINI';
myName = myName.toLowerCase();
//merging everything
console.log(`My name is ${myName}. I am ${myAge} years old in human years which is ${myAgeInDogYears} years old in dog years`);
