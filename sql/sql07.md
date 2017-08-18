# Intro to SQL and relational databases

## 7. Triggers

We can use triggers to specify several steps to be taken when a certain event 
occurs in a table. Events can be an INSERT, UPDATE or DELETE of data from the 
table, and we can specify if we want the steps to be taken BEFORE the event or 
AFTER of the event.

As a typical example, we could do a BEFORE INSERT to verify that the data is 
valid before actually saving it in the table.  But let's start with a simpler 
example: logging each insertion to a table.

Let's create a simple database, with just two tables. In a table we will store 
data of our users, and in the other we will write down when each user has been 
added to the system. The basic structure would be like this:

```sql
create database triggersExample;
use triggersExample;

CREATE TABLE users (
 id varchar(10),
 name varchar(50),
 age decimal(3),
 PRIMARY KEY (id)
);

CREATE TABLE newdata (
 id varchar(10),
 when date,
 type char(1)
);
```

If we want to add a data in the second table every time we insert the first 
one, we will create a TRIGGER thrown by AFTER INSERT. The steps muts be preceded
by "FOR EACH ROW", like this:

```sql
CREATE TRIGGER DataInserted
  AFTER INSERT ON users
FOR EACH ROW
  INSERT INTO newdata
  VALUES (NEW.id, CURRENT_DATE, 'i');
```

(The data we are adding are: the id of the user, the current date and a char "i" 
to indicate that the change has been an "insertion" of new data).


#### Suggested exercises (1):

- SQL.07.01. Enhance this example, logging the deletions.


(More to come soon)
