create schema floricultura;
use floricultura; 

create table cliente(
	id_cliente int auto_increment primary key, 
    nome varchar(45) not null, 
    id_endereco int not null, 
    foreign key (id_endereco) references endereco(id_endereco)
);

create table endereco(
	id_endereco int auto_increment primary key, 
    cep varchar(45) not null, 
    logadouro varchar(45) not null, 
    bairro varchar(45) not null, 
    cidade varchar(45) not null, 
    estado varchar(45) not null, 
    enderecocol varchar(45) not null
);

create table telefone(
	id_telefone int auto_increment primary key, 
    numero varchar(45) not null, 
    descricao varchar(45) not null, 
    id_cliente int not null, 
    foreign key (id_cliente) references cliente(id_cliente)
);

create table encomenda(
	id_encomenda int auto_increment primary key, 
    dataa datetime not null, 
    tipo varchar(45) not null, 
    frete decimal(6,2) not null, 
    id_cliente int not null, 
    foreign key (id_cliente) references cliente(id_cliente), 
    id_endereco int not null, 
    foreign key (id_endereco) references endereco(id_endereco)
);

create table produto(
	id_produto int auto_increment primary key, 
    nome varchar(45) not null, 
    tipo varchar(45) not null, 
    preco_unitario decimal (6,2) not null, 
    qtd int not null
);

create table comanda(
	id_comanda int auto_increment primary key, 
    qtd int not null, 
    preco_total decimal(6,2) not null, 
    id_encomenda int not null, 
    foreign key (id_encomenda) references encomenda(id_encomenda),
    id_produto int not null, 
    foreign key (id_produto) references produto(id_produto)
);