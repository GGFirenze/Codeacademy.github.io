CREATE TABLE friends (
  id INTEGER,
  name TEXT,
  birthday DATE 
);

INSERT INTO friends (id, name, birthday)
VALUES (1, 'Ororo Monroe', 1940-05-30);

INSERT INTO friends (id, name, birthday)
VALUES (2, 'Andrea Cocco', 1990-05-15);

INSERT INTO friends (id, name, birthday)
VALUES (3, 'Alessio Concari', 1977-02-20);

UPDATE friends
SET name = 'Storm'
WHERE id = 1;

ALTER TABLE friends
ADD COLUMN email TEXT;

UPDATE friends
SET email = 'storm@codeacademy.com'
WHERE id = 1;

UPDATE friends
SET email = 'andrea.cocco@peto.org'
WHERE id = 2;

UPDATE friends
SET email = 'trapezio.concari@saluti.come?'
WHERE id = 3;

DELETE FROM friends
WHERE name IS 'Storm';

SELECT * 
FROM friends;
