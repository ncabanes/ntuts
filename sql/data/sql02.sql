-- Adding a new field to the table
alter table drivers add num numeric(3) after name;

-- Setting values for the new field
update drivers set num = 5 where id = 'svet';
update drivers set num = 44 where id = 'lham';

-- And a few more detailed queries
select name, num from drivers where id = 'svet';
select drivers.name from drivers where name like '%ham%';
select teamName from drivers where num > 2;
select distinct(teamName) from drivers where num > 2;
select * from drivers order by teamName;
select * from drivers order by teamName asc, name desc;
select min(num) from drivers;
