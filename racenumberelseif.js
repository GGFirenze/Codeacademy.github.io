let raceNumber = Math.floor(Math.random() * 1000);
let registeredEarly = true;
let runnerAge = 32;

if (runnerAge > 18 && registeredEarly) {
  raceNumber += 1000;
  console.log(`Your race number is ${raceNumber}. You will race at 9:30am.`);
} else if (runnerAge > 18 && !registeredEarly) {
  console.log(`Your race number is ${raceNumber}. You will race at 11:00am.`);
} else if (runnerAge < 18) {
  console.log(`Your race number is ${raceNumber}. You will race at 12.30pm (regardless of registration).`);
} else {
  console.log('See the registration desk.');
}
