# Intro to SQL and relational databases

## 6. Exercises

Before proceeding to more advanced possibilities, such as defining triggers
and functions, let's practice what we have used so far.

Note: this part will not take 10 minutes of your time... most of the exercises 
might take more than 10 minutes... each. In fact, the last ones may take much 
more...


#### Exercise 6.1: Exercises  ;-)

Create a database with only one table to store info about the exercises you are 
doing in this tutorial. For each exercise, you will store an id (which will be 
used as primary key), the description, the difficulty level (1 to 5), the date 
in which it was proposed and the date in which you solved it.

First draw the entity-relationship diagram. Then create the database and the 
table. Add data for 3 exercises, two of which will not be solved yet. Finally:

- Display all the exercises, sorted by description.

- Display the exercises which contain the word "entity" in its description,
sorted by date proposed (descending).

- Display the id, date proposed and the 50 (or less) first chars of the 
description, for the exercises which have not been solved yet.

- Display the amount of exercises for each difficulty level.


#### Exercise 6.2: Beaches, two entities

Now let's create a database to store information about beaches we want to 
visit. To avoid repetitions, we'll use two entities: one of them will be for 
the countries (id, name), and the other will be for the beaches (id, name, 
comments, website, visited or not). The will be linked by a one-to-many 
relationship (each beach belongs to a country, each country may have several 
beaches we are interested in).

First draw the entity-relationship diagram. Then create the database and the 
tables. Add data for 2 countries, one with 2 beaches and another with 3 beaches.
Then create the SQL statements for the following requests:

- Display all the beaches (name and website), sorted by name.

- Display all the beaches (name of the beach, name of the country and website), 
sorted by name of the country and then by name of the beach.

- Display the names of the countries and the amount of beaches each country
has.

- Display the beaches which you have visited (name of the beach and name of the 
country), but for which you have not written a comment.

- Add a new country, with no beaches (yet) in it. Now display the names of the 
countries and the amount of beaches each country has, even for the countries 
for which we have no beaches (so a zero will be displayed).

- Display the names of the countries and the amount of beaches each country
has, but only for the countries with three or more beaches.

- Display all the beaches (name and country name), which contain an "a" in its
name and belong to a country whose name starts with "s", sorted by id.

- Display all the beaches (name and country name), for which the website has
not been specified (either it is totally empty or it has a length of less than 5 characters).



#### Exercise 6.3: Many-to-many

(Tomorrow)

