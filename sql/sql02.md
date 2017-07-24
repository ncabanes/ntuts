# Intro to SQL and relational databases

## 2. Altering the structure and displaying more detailed data

Sometimes our design needs changes. A first and simple modification is adding a 
missing field, which we hadn't planned before. For it, we would use the command 
"ALTER TABLE... ADD...". The new field will appear after the existing ones, 
unless we use "AFTER" to specify after which field should the new one appear. 
In this example we are using a new data type for numeric values up to a certain 
amount of digits:

```sql
-- Adding a new field to the table
alter table drivers add num numeric(3) after name;

```

This command will leave a "null" (not assigned) value in the new field of 
existing records:

```sql
select * from drivers;
```

```txt
+------+------------------+------+----------+
| id   | name             | num  | teamName |
+------+------------------+------+----------+
| lham | Lewis Hamilton   | NULL | Mercedes |
| svet | Sebastian Vettel | NULL | Ferrari  |
+------+------------------+------+----------+
```
We can change that value using the command "UPDATE... SET... WHERE...":

```sql
-- Setting values for the new field
update drivers set num = 5 where id = 'svet';
update drivers set num = 44 where id = 'lham';

```

Also, let's take a little more time for a few more detailed **queries**.

For example, we can specify which fields we want to see, instead of the 
asterisk (which meant "everything"), as well as including some criteria with 
"**WHERE**":

```sql
select name, num from drivers where id = 'svet';
```

```txt
+------------------+------+
| name             | num  |
+------------------+------+
| Sebastian Vettel |    5 |
+------------------+------+
```

The "equal" symbol (=) allows searching for exact coincidences, but we might 
need to look for a field which **contains** a certain text, using "**LIKE**" and 
the wildcard "%" (which means "0 or more other letters"):

```sql
select drivers.name from drivers where name like '%ham%';
```

```txt
+----------------+
| name           |
+----------------+
| Lewis Hamilton |
+----------------+
```

The conditions on numeric fields can use operators such as "greater than": <, 
>, <=, >=, <> (the last one means "is different from"):

```sql
select teamName from drivers where num > 2;
```

```txt
+----------+
| teamName |
+----------+
| Mercedes |
| Ferrari  |
+----------+
```

If we had different drivers from the Ferrari team, we might be shown several 
times the word Ferrari. We can avoid that behavior if we remove **duplicates**
by adding the word **DISTINCT**:

```sql
select distinct(teamName) from drivers where num > 2;
```

What if we want the results **sorted**? Easy: we add **ORDER BY** and the name 
of the field:

```sql
select * from drivers order by teamName;
```

```txt
+------+------------------+------+----------+
| id   | name             | num  | teamName |
+------+------------------+------+----------+
| svet | Sebastian Vettel |    5 | Ferrari  |
| lham | Lewis Hamilton   |   44 | Mercedes |
+------+------------------+------+----------+
```

We can specify DESC to sort **descending**, or ASC to sort ascending (which is the 
default), and we can include several sorting criteria:

```sql
select * from drivers order by teamName asc, name desc;
```

And, finally, we can also calculate the value for several "**aggregate functions**", 
which perform an operation on a field for all the records in the 
table, such as MAX(n), MIN(n), SUM(n) and AVG(n):

```sql
select min(num) from drivers;
```

```txt
+----------+
| min(num) |
+----------+
|        5 |
+----------+
```


#### Suggested exercises:

- SQL.02.01. Add a new field to the Computers table, called "year". The Spectrum was launched in 1982, and the CPC in 1984.

- SQL.02.02. Display the brand and model for the computers whose brand starts with a S. 

- SQL.02.03. Display the brand and model for the computers launched in 1982 or later. 

- SQL.02.04. Display the models stored in our database, sorted descending.  

- SQL.02.05. Add the Sinclair QL, with id "ql", launched in 1984.

- SQL.02.06. Display the brands stored in our database, avoiding duplicates.  

