create database pw_nick; 
use pw_nick; 

create table users(
	id int auto_increment primary key, 
    nome varchar(100) not null, 
    email varchar(100) not null
);