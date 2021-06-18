create table if not exists funcionarios
(
	codigo_funcionario int unsigned not null auto_increment,
  nome varchar(50) not null,
  idade smallint unsigned, 
  cpf varchar(11) unique not null,
  cidade varchar(50) not null,
  salario numeric(10) not null,
  primary key(codigo_funcionario)
)

INSERT INTO funcionarios (codigo_funcionario, nome, idade, salario, cidade, cpf) 
VALUES 
    (1, 'Rita', 32, 'Sao Jose', 1200, '20000100000'),
    (2, 'Maria', 55, 'Palhoca',1220, '30000110000') ,
    (3, 'Caio', 45, 'Florianopolis', 1100, '41000100000'),
    (4, 'Carlos', 44, 'Florianopolis', 1200, '51000110000'),
    (5, 'Paula', 33, 'Florianopolis', 2500, '61000111000');

create table if not exists pacientes
(
	codigo_paciente int unsigned not null auto_increment,
  nome varchar(50) not null,
  idade smallint unsigned,
  cidade varchar(50),
  cpf varchar(11) unique not null,
  doenca varchar(50) not null,
  primary key(codigo_paciente)
)

INSERT INTO pacientes (codigo_paciente, nome, idade, cidade, cpf, doenca)
VALUES
    (1, 'Ana', 20, 'Florianópolis', '20000200000', 'gripe' ),
    (2, 'Paulo', 24, 'Palhoca', '20000220000', 'fratura' ),
    (3, 'Lucia', 30, 'Biguacu', '22000200000', 'tendinite' ),
    (4, 'Carlos', 28, 'Joinville', '11000110000', 'sarampo' );