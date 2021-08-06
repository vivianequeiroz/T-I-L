USE agendador_de_tarefas;

CREATE VIEW tarefas_com_subtarefa AS
SELECT st.* FROM subtarefa_tarefa st
RIGHT JOIN tarefa t ON st.tarefa_id = t.id;
SELECT * FROM tarefas_com_subtarefa;

CREATE VIEW tarefas_pendentes AS
SELECT titulo
FROM tarefa
WHERE status = 'PENDENTE';

CREATE VIEW tarefas_em_andamento AS
SELECT titulo
FROM tarefa
WHERE status = 'EM ANDAMENTO';

CREATE VIEW tarefas_resolvidas AS
SELECT titulo
FROM tarefa
WHERE status = 'RESOLVIDO';

CREATE VIEW maiores_de_idade AS
SELECT nome
FROM usuario 
WHERE idade > 18; 

CREATE VIEW menores_de_idade AS
SELECT nome
FROM usuario 
WHERE idade < 18; 