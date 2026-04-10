create schema biblioteca; 
use biblioteca;

create table livro(
	id_livro int auto_increment primary key, 
	titulo varchar(80) not null, 
    autor varchar(80) not null, 
    editora varchar(80) not null
);

create table membro(
	id_membro int auto_increment primary key, 
    nome varchar(80) not null, 
    idade int not null
);

create table emprestimo(
	id_emprestimo int auto_increment primary key, 
    id_livro int not null, 
    foreign key (id_livro) references livro(id_livro), 
    id_membro int not null, 
    foreign key (id_membro) references membro(id_membro), 
    dataa date not null
);

insert into membro(nome, idade) values ("Geraldo", 20);
insert into membro(nome, idade) values ("Smith", 30);
insert into membro(nome, idade) values ("John", 18);
insert into membro(nome, idade) values ("Nicholas", 21);

insert into livro(titulo, autor, editora) values("Algoritmos em Nuvem: Abordagens Modernas", "Carlos R. Mendonça", "Elsevier"); 
insert into livro(titulo, autor, editora) values("Segurança Cibernética para Redes Industriais", "Dra. Ana Paula Torres" , "Elsevier"); 
insert into livro(titulo, autor, editora) values("Engenharia de Software de Alta Performance", "Roberto S. Faria", "Elsevier"); 
insert into livro(titulo, autor, editora) values("Código Silencioso", "Ana Beatriz Silva", "Nova Cultural"); 
insert into livro(titulo, autor, editora) values("O Último Bastião", "Mariana Costa", "Editora Vanguarda"); 

insert into emprestimo(id_membro, id_livro, dataa) values (1, 1, "2025/06/04");
insert into emprestimo(id_membro, id_livro, dataa) values (1, 3, "2026/06/04");
insert into emprestimo(id_membro, id_livro, dataa) values (3, 5, "2026/01/03");
insert into emprestimo(id_membro, id_livro, dataa) values (2, 2, "2026/06/04");
insert into emprestimo(id_membro, id_livro, dataa) values (3, 1, "2026/06/04");
insert into emprestimo(id_membro, id_livro, dataa) values (1, 1, "2025/06/08");
insert into emprestimo(id_membro, id_livro, dataa) values (1, 3, "2026/06/10");
insert into emprestimo(id_membro, id_livro, dataa) values (1, 1, "2025/06/14");
insert into emprestimo(id_membro, id_livro, dataa) values (1, 3, "2026/06/24");


select * from membro; 
select * from livro; 
select * from emprestimo; 

select * from membro order by nome; 
select * from livro order by titulo; 
select * from emprestimo where dataa = "2026/06/04"; 


select distinct m.nome from membro m join emprestimo e on m.id_membro = e.id_membro join livro l on 
e.id_livro = l.id_livro where l.editora = "Elsevier"; 
select distinct m.nome from membro m join emprestimo e on m.id_membro = e.id_membro join livro l on 
e.id_livro = l.id_livro where l.editora = "Elsevier" group by m.id_membro, m.nome having count(l.id_livro) > 5; 


select distinct m.id_membro, m.nome from membro m where exists (
	select 1 from emprestimo e where e.id_membro = m.id_membro
); 

select distinct m.id_membro, m.nome from membro m left join emprestimo e
on m.id_membro = e.id_membro where e.id_emprestimo is null; 
select distinct l.id_livro, l.titulo from livro l left join emprestimo e on
l.id_livro = e.id_livro where e.id_emprestimo is null; 


select distinct l.id_livro, l.titulo from livro l join emprestimo e on l.id_livro = e.id_livro;

select m.nome, l.titulo, l.autor, e.dataa as data_emprestimo from emprestimo e
join membro m on e.id_membro = m.id_membro join livro l on e.id_livro = l.id_livro
where m.nome = 'Geraldo' order by e.dataa;


update membro set idade = 35 where id_membro = 2;  
delete from emprestimo where id_membro = (select id_membro from membro where nome = 'John')
limit 1; 