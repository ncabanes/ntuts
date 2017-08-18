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

Now we want to store information about actors we like and movies they have been 
in. For each actor / actress we want their name, birth year and the file name 
of their picture. For each movie, we want the title, the year and the (main) 
genre, such as "comedy", "sci-fi" or "horror". Of course, we'll need ids for 
both entitities. They are linked by a many-to-many relationship: there can be 
several (or even none) actores / actresses in a movie, and an actor / actress 
can take part in several movies.

Create the entity-relationship diagram. Implement the database and the 
tables. Add the following data: 

Actors: Leonardo DiCaprio (1974), Ellen Page (1987), Christian Bale (1974),
Heath Ledger (1979), Maggie Gyllenhaal (1977), Humphrey Bogart (1899).

Movies: Inception (2010, DiCaprio and Page), Koyaanisqatsi (1982, no actors),
The Dark Knight (2008, Bale, Ledger and Gyllenhaal).

Then create the SQL statements for the following requests:

- Display all the actors and actresses (name and birth year), sorted from
youngest to oldest.

- Display all the actors which have participated in movies (name of the actor, 
title of the movie, year of the movie), sorted by name of the actor and then by 
name of the movie. In this list, Humphrey Bogart will not be shown, as we have
no information (yet) aboyt any movie of his.

- Display all the actors and the movies theyw have participated in, if any 
(name of the actor, a movie, year of the movie), sorted by name of the actor 
and then by year of the movie. In this list, Humphrey Bogart will be shown, but 
no movie will be displayed with him, as we have no information (yet) aboyt any 
movie of his.

- Update the table "actors", adding a new field, the year they died (if they
are not alive). Also update a few data: Bogart died in 1957, Ledger died in 2008.

- Display the titles of the movies and the amount of actors in them, sorted
by title.

- Display the titles of the movies with no actors.


#### Exercise 6.4: A short complete example

Now we will implement a database for the library of a High School. We want to
store information about books (id, title, author, year, pages), users (id,
name), roles of the users (such as "student" or "teacher") and borrowings
(each user may borrow one or several books at a time, and we want to store
the date in which they borrowed the book, the expected return date and the
real return date, which may differ). Of course, each user may borrow a book
several times (in different moments).

First draw the entity-relationship diagram. Then create the database and the 
tables, and also add a few example data. Then create the SQL statements for the 
following requests:

- Display all the books, sorted by title and author.

- Display all the users (user name and name of their role).

- Display the list of users who have borrowed any book, as well as the name
of the books they have taken (name, title, date borrowed, date returned).

- Display the list of books which have not been returned yet, as well as
the name and id of the users who have them.

- Display the list of books and the amount of times each book has been borrowed.

- Display book which has been borrowed most times.

- Display the names of the users who have returned books late (name, title of 
the book).

- Display the names of the users who have returned books late more than once 
(name of the user, amount ot late returns).


#### Exercise 6.5: A longer complete example

Finally, let's implement a more complex information system. It will be used
for the billing system of a small factory. In a first approach, there will be: 

- Products (id, name, manufacturing cost, selling price)

- Customers (id, name, address, city, zip code, country, phone number,
email, contact person).

- Bills. Each bill will be made for a customer, it will have a number (which 
will start with 1 at the beginning of each year). Each bill will contain 
serveral "lines". Each Line will be for one type of product that the customer 
has bought, and include also the amount of products sold to them in this bill.

If you are feeling adventurous, you may also include an extra detail: each 
product is made by a certain amount of raw materials, which we buy from our 
providers. Each raw material can be obtained from different providers at 
different prices. We should we able to make orders to those providers, each 
order consisting of several raw materials (its structure would be similar to 
that of the bills).

Once again, you should be able to create the entity-relationship diagram, 
implement the system using tables, add data to it and obtain information (but 
this time, the queries to make to the system are up to you; just try to make 
them as real as possible).
