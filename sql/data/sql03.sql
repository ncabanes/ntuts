-- Let's start a new database
create database races2;
use races2;

-- Creating the tables
create table teams (
  id varchar(2) primary key,
  name varchar(30)
); 

create table drivers (
  id varchar(10) primary key,
  name varchar(40),
  teamId varchar(2),
  foreign key (teamId) references teams(id)
); 

-- Adding data
insert into teams values ('f', 'Ferrari');
insert into teams values ('m', 'Mercedes');

insert into drivers values ('svet', 'Sebastian Vettel', 'f');
insert into drivers values ('lham', 'Lewis Hamilton', 'm');

-- And displaying data
select * from drivers, teams where drivers.teamId = teams.id; 

select drivers.name as driverName, teams.name as teamName
from drivers, teams 
where drivers.teamId = teams.id
order by driverName; 
