-- 1-->Produce the order no, amount and date of all orders.---------

select onum,amount,odate from order2;

-- 2-->Give all the information about all the customers with salesman number 1001.---------

select * from customer
where snum="1001";

-- 3-->Display the information in the sequence of city, sname, snum, and Commission.------

select city,sname,snum,commission from salesman;

-- 4-->List of rating followed by the name of each customer in Surat.-----

select rating,cname from customer
where city="surat";

-- 5-->List of snum of all salesmen with orders from order table.-----

select onum,snum from order2;

-- 6-->List of all orders for more than Rs. 1000.-----

select * from order2
where amount>1000;

-- 7-->List out names and cities of all salesmen in London with commission above 10%.-----

select sname,city from salesman
where COMMISSION>"10%" and city="london";

-- 8-->List all customers excluding those with rating <= 100 or they are located in Rome.-----

select * from customer
where not rating<=100 or city!="rome";

-- 9-->List all order for more than Rs. 1000 except the orders of snum 1006 of 10/03/97.-----

select * from order2 
where amount>1000 and (snum!="1006" and odate!="1997-03-10");

-- 10-->List all orders taken on March 3rd or 4th or 6th.-----

select * from order2
where odate="1997-03-3";

-- 11-->List all customers whose names begins with a letter 'C'.-----

select * from customer
where cname like "c%";

-- 12-->List all customers whose names begins with letter 'A' or 'B' or 'c'.-----

select * from customer
where cname regexp "^[abc]";

-- 13-->List all orders with zero or NULL amount.-----

select * from order2
where amount is null or amount="0";

-- 14-->Find out the largest orders of salesman 1002 and 1007.-----

select max(amount) from order2
where snum="1002" or snum="1007";

-- 15-->Count all orders of 10-Mar-97.-----

select count(onum) from order2
where odate="1997-03-10";

-- 16--> Calculate the total amount ordered.-----

select  sum(amount) from order2;

-- 17-->Calculate the average amount ordered.-----

select avg(amount) from order2;

-- 18-->Count the no. of salesmen currently having orders.-----

select count(snum) from order2;

-- 19-->Find the largest order taken by each salesman.-----

select max(amount),s.sname from order2 o join salesman s on o.snum=s.snum
group by s.snum;

-- or

select max(amount),snum from order2 
group by snum;

-- 20-->Find the largest order taken by each salesman on 10/03/1997.-----

select max(amount) from order2
where odate="1997-03-10"
group by snum;


-- 21--> Count the no. of different non NULL cities in the Customer table.-----

select count(distinct(city)) from customer
where city is not null;


-- 22-->Find out each customer's smallest order.-----

select min(amount),cnum from order2
group by cnum;

-- 23-->Find out the customer in alphabetical order whose name begins with 'G'-----

select * from customer
where cname like "g%"
order by cname asc;


-- 24-->Count the no. of salesmen registering orders for each day.-----

select count(snum),snum from order2
group by snum;

-- 25-->List all salesmen with their amount calculated with commission.-----

select s.sname,s.commission,o.amount from order2 o join salesman s
on o.snum=s.snum;


-- 26-->Display the no. of order for each day in the following format FOR dd-mon-yy, there are _____ Orders.-----

select date_format(odate,"%d/ %m/ %y") as date from order2;


-- 27-->Assume each salesperson has a 12% commission. Write a query on the order table that will produce the order number, salesman no and calculated amount of commission for that order.-----

select o.onum,s.snum,o.amount,s.commission from order2 o
join salesman s on o.snum=s.snum;

-- 28-->Find the highest rating in each city in the following format:Highest rating ______ is in the city ______ Lowest rating ______is in the city _______-----

select max(rating),city from customer
group by city;

-- and

select min(rating),city from customer
group by city;

-- 29-->List all customers in descending order of rating.-----

select * from customer
order by rating desc;

-- 30--> Calculate the total of orders for each day.-----

select sum(amount),odate from order2
group by odate;


-- 31-->Show the name of all customers with their relational salesman's name.-----

select c.cname,s.sname from customer c join salesman s
on c.snum=s.snum;

-- 32-->List all customers and salesmen who shared a same city.-----

select c.cname,s.sname from customer c join salesman s
on c.snum=s.snum
where c.city=s.city;

-- 33-->List all orders with the names of their customer and salesman.-----

select o.*,s.sname,c.cname from order2 o join customer c on o.cnum=c.cnum
join salesman s on o.snum=s.snum;


-- 34-->List all orders by the customers not located in the same city as their salesman.-----

select o.*,s.sname,c.cname from order2 o join customer c on o.cnum=c.cnum
join salesman s on o.snum=s.snum
where c.city!=s.city;


-- 35-->List all customers serviced by salesman with commission above 12%.-----

select c.cname from customer c join salesman s
on c.snum=s.snum
where s.commission>"12";

-- 36-->Calculate the amount of the salesman commission on each order by customer with rating above 100.-----

select sum(commission),s.sname from salesman s join customer c on s.snum=c.snum
where c.rating>"100"
group by c.cnum;



-- 37-->all pairs of customers having the same rating without duplication.-----

select c.cname,c1.cname from customer c join customer c1 on c.rating=c1.rating where c.cnum>c1.cnum;
;


-- 38-->List all customers located in cities where salesman Niraj has customers.-----

select * from customer 
where city in(select city from salesman where sname="niraj");

-- 39--Find all pairs of customers served by a single salesman with the salesman's name and no.>-----

select * from customer
where snum in(select snum from salesman);

-- 40-->List all salesmen who are living in the same city with out duplicate-----

select s.sname,s.city,s1.sname,s1.city from salesman s join salesman s1 on s.city=s1.city where s.snum>s1.snum;

-- 41-->Produce the name and city of all the customers with the same rating as 'Hardik'.-----

select cname,city from customer 
where rating in(select rating from customer where cname="hardik");

-- 42-->Extract all orders of Miti.-----

select * from order2
where snum in(select snum from salesman where sname="miti");

-- 43-->Extract all orders of Baroda's salesmen.-----

select * from order2
where snum in(select snum from salesman where city="baroda");


-- 44-->Find all orders of the salesman who services 'Hardik'-----

select * from order2 where snum in (select snum from customer where cname="hardik");

-- 45-->List all orders that are greater than the average of April 10,1997.-----

select * from order2 where amount >(select avg(amount) from order2 where odate="1997-04-10");

-- 46-->Find all orders attributed to salesmen in 'London'.-----

select * from order2 where snum in(select snum from salesman where city="london");

-- 47-->List the commission of all salesmen serving customers in 'London'.-----

select * from salesman where snum in(select snum from customer where city="london");

-- 48-->Find all customers whose cnum is 1000 above than the snum of Niraj-----

select  * from customer where snum >(select snum  from salesman where sname="niraj" );

-- 49-->Count the no. of customers with the rating above than the average of 'Surat'.-----

select count(cnum) from customer where rating >(select avg(rating) from customer where city="surat" );

-- 50-->List all orders of the customer 'Chandresh'.-----

select * from order2
where cnum in(select cnum from customer where cname="chandresh");

-- 51-->Produce the name and rating of all customers who have above average orders.-----

select cnum,cname,rating from customer
where rating >(select avg(amount) from order2);

-- 52-->Find all customers with orders on 3rd Oct., 1997.-----

select c.*  from customer c
join order2 o
on o.cnum=c.cnum
where o.odate="1997-9-3";

-- 53-->List the name and number of all salesmen who has more than Zero customer.-----

select snum,sname from salesman
where snum in( select snum from customer where cnum>0);

-- 54-->Select the name and number of all salesmen who have customers in their cities.-----

select distinct(s.sname),s.snum from salesman s
join customer c on s.snum=c.snum
where s.city=c.city;

-- 55-->Find all salesmen who have customers with rating > 300-----

select * from salesman s
join customer c on s.snum=c.snum
where c.rating>300;


-- 56-->Find all customers having rating greater than any customer in 'Rome'.-----

select * from customer
where rating > any(select rating from customer where city="rome");

-- 57-->List all orders that has amount grater than at least one of the orders from 6th October, 1997.-----

select * from order2
where amount > (select amount from order2 where odate="1997-10-06");

-- 58-->Find all orders with amounts smaller than any amount for a customer in 'Rome'.-----

select * from order2
where amount < any (select amount from order2 where cnum in(select cnum from customer where city="rome"));

-- 59-->Find all the customers who have greater rating than every customer in 'Rome'.-----

SELECT * FROM customer WHERE rating > any(select rating from customer where city='rome');

-- 60-->Select all customers whose rating doesn't match with any rating customer of 'Surat'.-----

SELECT * FROM customer WHERE rating != any(select rating from customer where city='surat');

-- 61-->List all customers whose ratings are equal to or greater than ANY 'Niraj'-----

SELECT * FROM customer WHERE rating >= any(select rating from customer where snum in(select snum from salesman where sname="niraj"));

-- 62-->Find out which salesman produce largest and smallest orders on each date.-----

select max(o.amount),min(o.amount) from order2 o join salesman s on o.snum=s.snum
group by o.odate;



-- 63-->Create a union of two queries that shows the names, cities and ratings of all customers.Those with rating of >=200 should display 'HIGH RATING' and those with less then 200 should display 'LOW RATING'-----
select cname,city,concat(rating," ","high rating") as rating from customer
where rating>=200 union
select cname,city,concat(rating," ","low rating") from customer
where rating<200;


-- 64 -->Insert a row into salesmen table with the values snum is 100 salesman name is Rakesh, city is unknown and commission is 14%.

insert into salesman values
(100,"rakesh","unknown",14);

-- 65-->Insert a row in to customer table with values London, Pratik and 2005 for the columns city,name and number.-----

insert into customer values ('london','pratik',2009);

-- 66-->Create another table London staff having same structure as salesman table.-----

create table londonstaff as select * from salesman;


-- 67-->Insert all the rows of salesmen table with city London in the London staff table.-----

insert into londonstaff(snum,sname,city,commission)select * from salesman where city='london';


-- 68-->Create another table Day_Totals with two attributes date and total and insert rows into this table from order table.-----

create table Day_Totals (date date,
total int);

insert into day_totals  select * from order2;

-- 69-->Create a duplicate of the salesmen table with a name Multicust.Now delete all the rows from the salesmen table.-----

create table multicust as select * from salesman;
TRUNCATE  table  salesman;

-- 70-->Get back all the rows of salesmen table from its duplicate table.-----

rollback;

-- 71-->Remove all orders from customer Chandresh from the orders table.-----

delete from orders where cnum in(select cnum from customer where cname='chandu');

-- 72-->Set the ratings of all the customers of Piyush to 400.-----

update customer set rating=400 
where snum in (select snum from salesman where sname="piyush");

-- 73-->Increase the rating of all customers in Rome by 100.-----

 update customer set rating = rating+100 where city='rome';

-- 74-->Salesman Miti has resigned. Reassign her number to a new salesman Gopal whose city is Bombay and commission is 10%.-----

update salesman set sname="gopal",city="bombay",commission="10"
where snum="1003";



-- 75-->Double the commission of all salesmen of London.-----

 update salesman set commission=commission*2 where city='london';

-- 76-->Set ratings for all customers in London to NULL.-----


update customer
set rating=0
where city="london";

-- 77-->Suppose we have a table called sales Manager with the same definition as Salesmen table. Company decides to promote salesmen having total order more than 5000 to SalesManager. Fill up the Sales Manager table.-----

create table salesmanger
select * from salesman where snum = any  
(select snum from order2 where amount>5000);


-- 78-->Assume that we have a table called smcity. Store the information of all salesmen with the customers in their home cities into smcity.-----

create view same_city as
select c.cnum,c.cname,c.city,s.city
from customer1 c
join salesman1 s on c.snum=s.snum;


-- 79-->Create a table Bonus that contains date wise maximum amount of order for all salesmen.-----

create table bonus as
select * from salesman where snum in 
(select snum from order2 where amount in
(select max(amount) from order2 group by odate));


-- 80--> Create a table Multicust containing the salesmen with more than one customer.-----

create table multicust as select count(snum),snum from customer
group by snum having count(snum)>1;

-- 81--> New Delhi office has closed. Remove all customers assigned to salesmen in New Delhi.-----

delete from salesman 
where city="new delhi" ;

-- 82-->Delete all salesmen who have at least one customer with a rating of 100 from salesmen table.-----

delete from salesman 
where snum in(select snum from customer where rating=100);

-- 83-->Delete the salesmen who produce the lowest order for each day.-----

delete from salesman
where snum in(select min(amount) from order2 group by odate);

-- 84-->Find the smallest order for each day. Reduce the commission of all salesmen by 2% who produce this order.-----

select min(amount) from orders
group by snum in(select snum from salesman where commission=2);

-- 85-->Delete all customers with no current orders.-----

select * from orders
order by odate asc;

-- 86-->Write a command to find out the orders by date.-----

select odate from order2 
order by odate;

-- 87-->Write a command to add the item-name column to the order table.-----

alter table order2 
add item_name varchar(150);

-- 88-->Create a copy of your order table. Drop the original order table.-----

create table order2 as select * from order2;
drop table orders;

-- 89-->Write a command to create the salesmen table so that the default commission is 10% with no NULL permitted, snum is the primary key and all names contain alphabets only.-----

alter table salesman
modify COMMISSION int default 10 not null,
add primary key(snum);

-- 90-->Give the commands to create our sample tables (salesmen, customer, orders) with all the necessary constraints like PRIMARY KEY, NOT NULL FOREING KEY.-----

CREATE TABLE SALESMAN (
 SNUM INT PRIMARY KEY,
 SNAME VARCHAR(50),
 CITY VARCHAR(50),
 COMMITION VARCHAR(10)
);

INSERT INTO SALESMAN (SNUM, SNAME, CITY, COMMITION) VALUES
(1001, 'PIYUSH', 'LONDON', '12%'),
(1002, 'NIRAJ', 'SURAT', '13%'),
(1003, 'MITI', 'LONDON','11%'),
(1004, 'RAJESH', 'BARODA' , '15%'),
(1005, 'ANAND', 'NEW DELHI', '10%'),
(1006, 'RAM', 'PATAN', '10%'),
(1007, 'LAXMAN', 'BOMBAY', '09%');

create table CUSTOMER  (
  cnum int primary key,
  CNAME VARCHAR(50),
  CITY VARCHAR(50),
  RATING INT,
  SNUM INT,
  FOREIGN KEY (SNUM) REFERENCES SALESMAN(SNUM)  
);

INSERT INTO CUSTOMER (CNUM, CNAME, CITY, RATING, SNUM) VALUES
(2001, 'HARDIK', 'LONDON', 100, 1001),
(2002, 'GITA', 'ROME', 200, 1003),
(2003, 'LAXMI', 'SURAT', 200, 1002),
(2004, 'GOVIND', 'BOMBAY', 300, 1002),
(2005, 'CHANDRESH', 'LONDON', 100, 1001),
(2006, 'CHAMPAK', 'SURAT', 300, 1007),
(2007, 'PRATIK', 'ROME', 100, 1004),
(2008, 'MANOJ', 'LONDON', 200, 1007);

CREATE TABLE ORDER2 (
  ONUM INT PRIMARY KEY,
  AMOUNT FLOAT,
  ODATE DATE,
  CNUM INT,
  SNUM INT,
  FOREIGN KEY (CNUM) REFERENCES CUSTOMER(CNUM),
  FOREIGN KEY (SNUM) REFERENCES SALESMAN(SNUM)
);

INSERT INTO ORDERS (ONUM,AMOUNT,ODATE,CNUM,SNUM) VALUES 
(3001, 18.69 ,'1999/03/03' ,2007 ,1007 ),
(3002, 767.19, '1997/03/05', 2001, 1001),
(3003, 1900.10, '1997/03/10',2007,1004),
(3004, 5160.45, '1999/03/12', 2003, 1002),
(3005, 1098.25, '1999/04/15', 2008, 1007),
(3006, 1713.12, '1995/04/10', 2002, 1003),
(3007, 75.75, '1996/05/20', 2004, 1002),
(3008, 4723.95, '1999/05/30', 2006, 1001),
(3009, 1309.95, '1997/05/08', 2004, 1002),
(3010, '9898.97', '1999/06/06', 2006, 1001);

-- 91--> Create a view called Big orders which stores all orders larger than Rs.4000.-----

create view Big_order as select * from orders where amount >4000;

-- 92-->Create a view Rate count that gives the count of no. of customers at each rating.-----

create view rate as
select count(cnum) from customer
group by rating;

-- 93-->Create a view that shows all the customers who have the highest ratings.-----

 create view High_rating as select * from customer where rating in (select max(rating) from customer);


-- 94-->Create a view that shows all the number of salesmen in each city.-----

 create view count_salesman as select count(snum),city from salesman group by city;

-- 95-->Create a view that shows the average and total orders for each salesmen after his name and number.-----

create view avg_total as select s.sname , o.snum , avg(amount), count(onum) from orders o join salesman s on o.snum=s.snum group by s.sname , o.snum;

-- 96-->Create a view that shows all the salesmen with multiple customers.-----

create view slsmn as
select * from salesman ;

-- 97-->Create a view to keep track of the total no of customers ordering, no of salesmen taking orders, the no of orders, the average amount ordered, and the total amount ordered for each day.-----

create view track as 
select count(cnum)as customer,count(snum) as salesman,count(onum) as ordr ,avg(amount) as avgordr ,sum(amount) as sumordr  from  order2
group by amount;

select sum(amount) from order2
group by amount;

-- 98-->Create a view Show_name that shows for each order the order no, amount, salesman name and the customer name.-----

create view show_name as select o.onum , o.amount, c.cname , s.sname from orders o join customer c join salesman s on o.cnum=c.cnum and s.snum=o.snum;


-- 99-->List all orders of salesman 'Rajesh' using Show_name View along with his commission.-----

create view show_name as
select * from salesman
where snum in(select snum from salesman where sname="rajesh");

-- 100-->Create a view Max_sales to store the name and number of salesman, along with the date, who have the highest order on any given date.-----

create view max_sales as
select s.* from salesman s
where s.snum in(select s.snum from order2 o) > any(select max(amount) from order2);

-- 101-->Using above view, find out the name and number of salesman who have the highest order at least two times. Store the result in another view.-----

create view max_values1 as
select s.* from salesman s
where s.snum in(select s.snum from order2  where amount in (select max(amount) from order2));

-- 102-->Create a view Same_city that shows the no and name and city of the customers along with the city of the salesman serving them.-----

create view same_city as
select c.cnum,c.cname,c.city,s.city
from customer c
join salesman s
on c.snum=s.snum;

-- 103-->Create a view Commission of salesmen table to include only snum and commission field so that through. this view someone can enter or change the commission but only to values between 10% and 20%.-----

create view csals as
select snum,commission from salesman
where commission=10 or commission=20;


-- 104-->Assume that the CURDATE is a constant representing current date. Give a command to create orders table with CURDATE as a default date.-----

select curdate();

-- 105-->List all salesmen in London who had at least one customer located there as well.-----

select s.* from salesman s
join customer c on s.snum=c.snum
where s.city="london";

-- 106--> List all salesmen in London who didn't have any customer there.-----

select s.* from salesman s
join customer c on c.snum=s.snum
where c.city!="london";



