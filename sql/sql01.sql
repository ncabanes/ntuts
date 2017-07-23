create database races;

use races;

create table drivers (
  id varchar(10) primary key,
  name varchar(40),
  teamName varchar(30)
);

insert into drivers values ('svet', 'Sebastian Vettel', 'Ferrari');

insert into drivers (id, name, teamName) 
values ('lham', 'Lewis Hamilton', 'Mercedes');

select * from drivers;
