CREATE TABLE IF NOT EXISTS population (
	id INT AUTO_INCREMENT PRIMARY KEY,
	first_name VARCHAR(255) NOT NULL,
	last_name VARCHAR(255) DEFAULT NULL
);

LOAD DATA INFILE '/var/lib/mysql-files/population.csv'
INTO TABLE population
FIELDS TERMINATED BY ','
LINES TERMINATED BY '\n'
IGNORE 1 LINES
(first_name, last_name);
