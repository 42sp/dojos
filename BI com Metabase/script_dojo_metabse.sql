-- Tabela Aluno
CREATE TABLE Aluno (
    id_aluno SERIAL PRIMARY KEY,
    login VARCHAR(50) NOT NULL,
    nome VARCHAR(100) NOT NULL
);

-- Tabela Convidado
CREATE TABLE Convidado (
    id_convidado SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    empresa VARCHAR(100),
    cargo VARCHAR(50),
    mini_bio TEXT,
    contato VARCHAR(1000),
    aluno_responsavel INT,
    aluno_indicador INT,
    FOREIGN KEY (aluno_responsavel) REFERENCES Aluno(id_aluno),
    FOREIGN KEY (aluno_indicador) REFERENCES Aluno(id_aluno)
);

-- Tabela Evento
CREATE TABLE Evento (
    id_evento SERIAL PRIMARY KEY,
    data_evento DATE NOT NULL,
    horario_evento TIME NOT NULL,
    local_evento VARCHAR(100) NOT NULL, -- Alterado para local_evento
    nome VARCHAR(100) NOT NULL,
    id_convidado INT,
    link_acesso_online VARCHAR(255),
    FOREIGN KEY (id_convidado) REFERENCES Convidado(id_convidado)
);

-- Tabela Presença
CREATE TABLE Presenca (
    id_aluno INT,
    id_evento INT,
    PRIMARY KEY (id_aluno, id_evento),
    FOREIGN KEY (id_aluno) REFERENCES Aluno(id_aluno),
    FOREIGN KEY (id_evento) REFERENCES Evento(id_evento)
);

-- Tabela Feedback
CREATE TABLE Feedback (
    id_feedback SERIAL PRIMARY KEY,
    id_evento INT,
    id_aluno INT,
    texto_feedback TEXT,
    nota INT CHECK (nota >= 0 AND nota <= 5),
    FOREIGN KEY (id_evento) REFERENCES Evento(id_evento),
    FOREIGN KEY (id_aluno) REFERENCES Aluno(id_aluno)
);

-- Script de inserção de 100 alunos com logins
INSERT INTO Aluno (login, nome) VALUES
('asilva', 'Ana Silva'),
('coliveira', 'Carlos Oliveira'),
('msantos', 'Mariana Santos'),
('procha', 'Pedro Rocha'),
('clima', 'Camila Lima'),
('rpereira', 'Rafael Pereira'),
('jcosta', 'Juliana Costa'),
('loliveira', 'Lucas Oliveira'),
('imartins', 'Isabela Martins'),
('gsouza', 'Gabriel Souza'),
('asilva2', 'Amanda Silva'),
('jsantos', 'João Santos'),
('loliveira2', 'Larissa Oliveira'),
('flima', 'Fernando Lima'),
('brocha', 'Beatriz Rocha'),
('vpereira', 'Vinícius Pereira'),
('lcosta', 'Leticia Costa'),
('loliveira3', 'Gustavo Oliveira'),
('cmartins', 'Clara Martins'),
('lsouza', 'Leonardo Souza'),
('bsilva', 'Bianca Silva'),
('dsantos', 'Diego Santos'),
('llima', 'Laura Lima'),
('frocha', 'Felipe Rocha'),
('gpereira', 'Gabriela Pereira'),
('mcosta', 'Matheus Costa'),
('soliveira', 'Sophia Oliveira'),
('mmartins', 'Enzo Martins'),
('lsouza2', 'Luiza Souza'),
('gsilva', 'Guilherme Silva'),
('ablima', 'Ana Beatriz Lima'),
('lrocha', 'Lucas Rocha'),
('jpereira', 'Julia Pereira'),
('pcosta', 'Pedro Costa'),
('ioliveira', 'Isabella Oliveira'),
('asouza', 'Arthur Souza'),
('mmartins2', 'Maria Martins'),
('llima2', 'Eduardo Lima'),
('rrocha', 'Raquel Rocha'),
('gpereira2', 'Gabriel Pereira'),
('csilva', 'Carolina Silva'),
('asantos', 'André Santos'),
('mcosta', 'Manuela Costa'),
('doliveira', 'Daniel Oliveira'),
('mlima', 'Marina Lima'),
('frocha2', 'Fábio Rocha'),
('apereira', 'Alice Pereira'),
('rcosta', 'Renato Costa'),
('coliveira2', 'Clara Oliveira'),
('ssouza', 'Joaquim Souza'),
('lrocha2', 'Larissa Rocha'),
('dpereira', 'Diego Pereira'),
('gcosta', 'Giovanna Costa'),
('rsilva', 'Ricardo Silva'),
('asouza2', 'Aline Souza'),
('vrocha', 'Vitor Rocha'),
('lpereira', 'Laura Pereira'),
('roliveira', 'Rodrigo Oliveira'),
('clima2', 'Cecília Lima'),
('bsouza', 'Bruno Souza');

-- Script de inserção de 20 convidados
INSERT INTO Convidado (nome, empresa, cargo, mini_bio, contato, aluno_responsavel, aluno_indicador) VALUES
('João da Silva', 'TechCorp', 'CEO', 'Empresário e líder visionário', 'joao.silva@techcorp.com', 1, 2),
('Maria Oliveira', 'InovaTech', 'CTO', 'Especialista em inovação tecnológica', 'maria.oliveira@inovatech.com', 3, 4),
('Pedro Santos', 'CodeMaster', 'Desenvolvedor Sênior', 'Programador experiente em várias linguagens', 'pedro.santos@codemaster.com', 5, 6),
('Ana Costa', 'DataInsights', 'Cientista de Dados', 'Especialista em análise de dados', 'ana.costa@datainsights.com', 7, 8),
('Lucas Rocha', 'CyberSecure', 'Especialista em Segurança', 'Especialista em segurança cibernética', 'lucas.rocha@cybersecure.com', 9, 10),
('Juliana Lima', 'CloudSolutions', 'Arquiteta de Nuvem', 'Especialista em soluções em nuvem', 'juliana.lima@cloudsolutions.com', 11, 12),
('Carlos Pereira', 'TechInnovate', 'Gerente de Inovação', 'Responsável por impulsionar a inovação na empresa', 'carlos.pereira@techinnovate.com', 13, 14),
('Larissa Martins', 'InovaTech', 'Desenvolvedora Mobile', 'Especialista em desenvolvimento para dispositivos móveis', 'larissa.martins@inovatech.com', 15, 16),
('Gustavo Silva', 'AIRevolution', 'Engenheiro de IA', 'Trabalha no desenvolvimento de soluções de Inteligência Artificial', 'gustavo.silva@airevolution.com', 17, 18),
('Amanda Souza', 'InovaTech', 'Especialista em Marketing Digital', 'Focada em estratégias digitais para tecnologia', 'amanda.souza@inovatech.com', 19, 20),
('Fernando Costa', 'TechSupport', 'Analista de Suporte Técnico', 'Oferece suporte técnico de alta qualidade', 'fernando.costa@techsupport.com', 21, 22),
('Isabela Oliveira', 'AIRevolution', 'Desenvolvedora Blockchain', 'Especialista em tecnologia de blockchain', 'isabela.oliveira@airevolution.com', 23, 24),
('Rafael Pereira', 'TechEducation', 'Instrutor Técnico', 'Ministra treinamentos e workshops técnicos', 'rafael.pereira@techeducation.com', 25, 26),
('Camila Lima', 'TechInnovate', 'Analista de Segurança', 'Analisa e melhora a segurança da informação', 'camila.lima@techinnovate.com', 27, 28),
('Vitor Santos', 'AIRevolution', 'Arquiteto de Software', 'Projetista de arquiteturas de software inovadoras', 'vitor.santos@airevolution.com', 29, 30),
('Bianca Costa', 'InovaTech', 'Consultora de Inovação', 'Auxilia empresas na adoção de tecnologias inovadoras', 'bianca.costa@inovatech.com', 31, 32),
('Diego Oliveira', 'CloudSolutions', 'Empreendedor', 'Fundador de uma startup de tecnologia promissora', 'diego.oliveira@cloudsolutions.com', 33, 34),
('Luiza Rocha', 'TechSupport', 'Engenheira de Software', 'Especialista em codificação eficiente', 'luiza.rocha@techsupport.com', 35, 36),
('Gabriel Pereira', 'DataAnalytics', 'Analista de Dados', 'Trabalha na análise avançada de dados', 'gabriel.pereira@dataanalytics.com', 37, 38),
('Carolina Souza', 'TechDesign', 'Designer de Interfaces', 'Cria interfaces de usuário inovadoras', 'carolina.souza@techdesign.com', 39, 40);

-- Script de inserção de eventos
INSERT INTO Evento (data_evento, horario_evento, local_evento, nome, id_convidado, link_acesso_online) VALUES
('2023-01-10', '15:00', 'Galeria', 'Palestra sobre Inovação', 1, 'https://zoom.com/abc123'),
('2023-02-15', '16:30', 'Nave 8A', 'Workshop de Desenvolvimento Mobile', 2, 'https://meet.google.com/xyz456'),
('2023-03-20', '14:00', 'Nave 7A', 'Conferência de Segurança Cibernética', 3, 'https://teams.com/123abc'),
('2023-04-25', '15:45', 'Galeria', 'Palestra sobre IA', 4, 'https://zoom.com/456xyz'),
('2023-05-12', '17:00', 'Nave 7B', 'Sessão de Marketing Digital', 5, 'https://meet.google.com/abc789'),
('2023-06-18', '14:30', 'Online', 'Evento de Networking', 6, 'https://teams.com/789xyz'),
('2023-07-08', '16:15', 'Nave 8A', 'Workshop de Blockchain', 7, 'https://zoom.com/xyz123'),
('2023-08-14', '15:30', 'Galeria', 'Conferência de Inovação', 8, 'https://meet.google.com/123xyz'),
-- ... Adicione mais eventos conforme necessário
('2023-09-22', '14:45', 'Nave 7A', 'Palestra sobre Desenvolvimento Ágil', 9, 'https://teams.com/abc456'),
('2023-10-05', '16:00', 'Nave 7B', 'Sessão de Inteligência Artificial', 10, 'https://zoom.com/456abc'),
('2023-11-12', '15:15', 'Online', 'Evento de Lançamento de Produtos', 11, 'https://meet.google.com/xyz789'),
('2023-12-18', '17:30', 'Galeria', 'Workshop de UX Design', 12, 'https://teams.com/789abc'),
-- ... Adicione mais eventos conforme necessário
('2023-01-25', '14:30', 'Nave 8A', 'Conferência de Tecnologia', 1, 'https://zoom.com/abc789'),
('2023-03-10', '16:45', 'Nave 7A', 'Palestra sobre Inovação', 2, 'https://meet.google.com/789xyz'),
('2023-05-05', '15:00', 'Nave 7B', 'Workshop de Desenvolvimento Mobile', 3, 'https://teams.com/xyz123'),
('2023-07-20', '17:15', 'Online', 'Conferência de Segurança Cibernética', 4, 'https://zoom.com/123abc'),
('2023-09-08', '14:00', 'Galeria', 'Palestra sobre IA', 5, 'https://meet.google.com/456xyz'),
-- ... Adicione mais eventos conforme necessário
('2023-10-30', '16:30', 'Nave 8A', 'Sessão de Marketing Digital', 6, 'https://teams.com/abc456'),
('2023-12-05', '14:45', 'Nave 7A', 'Evento de Networking', 7, 'https://zoom.com/456abc'),
('2023-02-03', '15:15', 'Online', 'Workshop de Blockchain', 8, 'https://meet.google.com/xyz789');

-- Script de inserção de feedbacks
INSERT INTO Feedback (id_evento, id_aluno, texto_feedback, nota) VALUES
-- Feedbacks para os primeiros 50 eventos e alunos
(1, 1, 'Ótimo evento, aprendi muito!', 5),
(1, 2, 'Gostei da palestra, conteúdo relevante.', 4),
(2, 3, 'Workshop prático e bem conduzido.', 4),
(2, 4, 'Aprendi novas técnicas de desenvolvimento mobile.', 5),
(3, 5, 'Conferência esclarecedora sobre segurança cibernética.', 5),
(3, 6, 'Gostaria de mais exemplos práticos.', 3),
(4, 7, 'Excelente palestra sobre IA.', 5),
(4, 8, 'Boa apresentação, mas faltaram exemplos práticos.', 4),
(5, 9, 'Sessão de marketing digital muito informativa.', 4),
(5, 10, 'Conheci novas estratégias para minha empresa.', 5),
-- ... Adicione mais feedbacks para os demais eventos e alunos conforme necessário
(12, 49, 'Excelente palestra sobre UX Design.', 5),
(12, 50, 'Gostei das dicas práticas para melhorar a experiência do usuário.', 4),
-- Feedbacks aleatórios para os próximos 50 eventos e alunos
(13, 51, 'Muito bom o evento, aprendi bastante sobre desenvolvimento ágil.', 5),
(13, 52, 'Acho que poderia ter mais tempo para perguntas.', 4),
(14, 53, 'Interessante a sessão de inteligência artificial.', 4),
(14, 54, 'Esperava mais exemplos práticos na palestra.', 3),
(15, 55, 'Evento online de networking foi bem organizado.', 5),
(15, 56, 'Gostaria de mais interação entre os participantes.', 4),
(16, 57, 'Workshop de blockchain foi muito esclarecedor.', 5),
(16, 58, 'Gostaria de ver mais casos de uso na prática.', 4),
(17, 59, 'Conferência de inovação trouxe insights valiosos.', 5),
(17, 60, 'Acho que a palestra poderia ser mais dinâmica.', 4);

-- Script de inserção de presença com número aleatório de alunos por evento
INSERT INTO Presenca (id_aluno, id_evento) 
SELECT
  id_aluno,
  id_evento
FROM
  (SELECT 
    id_aluno, 
    id_evento,
    ROW_NUMBER() OVER (PARTITION BY id_evento ORDER BY random()) AS r
   FROM Aluno, Evento
   WHERE id_aluno BETWEEN 1 AND 100 AND id_evento BETWEEN 1 AND 20) AS subquery
WHERE 
  subquery.r <= 5 + FLOOR(RANDOM() * (50 - 5 + 1));
