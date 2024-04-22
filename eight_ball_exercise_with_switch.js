let userName = 'GG';
userName === '' ? console.log('Hello!') 
: console.log(`Hello, ${userName}!`);

let userQuestion = 'Voglio puffare le zinne della Zinnalova';
console.log(`${userName} asked: ${userQuestion}`);

for (let i = 0; i < 5; i++) {
  let randomNumber = Math.floor(Math.random() * 8);

  let eightBall = '';
  switch (randomNumber) {
    case 0:
      eightBall = 'Zinna le zinne della Zinnalova';
      break;
    case 1:
      eightBall = 'It is certain';
      break;
    case 2:
      eightBall = 'It is decidedly so';
      break;
    case 3:
      eightBall = 'Reply hazy try again';
      break;
    case 4:
      eightBall = 'Cannot predict now';
      break;
    case 5:
      eightBall = 'Do not count on it';
      break;
    case 6:
      eightBall = 'My sources say no';
      break;
    case 7:
      eightBall = 'Outlook not so good';
      break;
    default:
      eightBall = 'Zinnale copiosamente';
      break;
  }
  console.log(eightBall);
}
