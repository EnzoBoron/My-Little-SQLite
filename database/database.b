CREATE TABLE users (
  id INTEGER,
  name TEXT,
  age INTEGER
);

CREATE TABLE environement (
  id INTEGER,
  name TEXT,
  age INTEGER
);

header: users (INTEGER, TEXT, INTEGER)
data: 1 | "Alice" | 30
data: 2 | "bob" | 66
data: 3 | "margaux" | 26

header: environement (INTEGER, TEXT, INTEGER)
data: 1 | "plage" | 34
data: 2 | "rue" | 39
data: 3 | "foret" | 29