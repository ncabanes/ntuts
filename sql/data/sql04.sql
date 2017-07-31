-- Let's start a new database
create database races3;
use races3;

-- Creating the tables

create table drivers (
  id varchar(10) primary key,
  name varchar(40)
);

create table teams (
  id varchar(2) primary key,
  name varchar(30)
);  

create table driveFor (
  driverId varchar(10),
  teamId varchar(2),
  startDate date,
  endDate date,
  primary key (driverId, teamId, startDate),
  foreign key (teamId) references teams(id),
  foreign key (driverId) references drivers(id)
); 


-- Adding data
insert into teams values ('f', 'Ferrari');
insert into teams values ('m', 'Mercedes');

insert into drivers values ('svet', 'Sebastian Vettel');
insert into drivers values ('lham', 'Lewis Hamilton');

insert into driveFor values ('svet', 'f', '2015-10-01', null);
insert into driveFor values ('lham', 'M', '2016-10-01', null);


-- And displaying data
select drivers.name as driverName, teams.name as teamName
from drivers, teams, driveFor
where teams.id = driveFor.teamId
and drivers.id = driveFor.driverId
order by driverName; 
