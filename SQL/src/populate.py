import requests
import mysql.connector
from mysql.connector import Error
import time
import random
import os

def create_connection(host_name, user_name, user_password, db_name):
	connection = None
	try:
		connection = mysql.connector.connect(
			host=host_name,
			user=user_name,
			passwd=user_password,
			database=db_name
		)
		print("Conexão ao MySQL realizada com sucesso")
	except Error as e:
		print(f"Erro: '{e}'")

	return connection

def execute_query(connection, query, data):
	cursor = connection.cursor()
	try:
		cursor.execute(query, data)
		connection.commit()
		print("Query executada com sucesso")
	except Error as e:
		print(f"Erro: '{e}'")

def get_character_data(character_id):
	url = f"https://api.jikan.moe/v4/characters/{character_id}"
	response = requests.get(url)
	if response.status_code == 200:
		data = response.json()
		name = data['data']['name'].split()
		first_name = name[0]
		last_name = name[-1] if len(name) > 1 else ''
		return first_name, last_name
	else:
		print(f"Erro ao acessar API: Status code {response.status_code}")
		return None, None

mysql_host = os.getenv('MYSQL_HOST')
mysql_database = os.getenv('MYSQL_DATABASE')
mysql_user = os.getenv('MYSQL_USER')
mysql_password = os.getenv('MYSQL_PASSWORD')

time.sleep(30)
connection = create_connection(mysql_host, mysql_user, mysql_password, mysql_database)

insert_character_query = """
INSERT INTO population (first_name, last_name) VALUES (%s, %s)
"""

character_ids = []

for i in range(0, 100):
	character_ids.append(random.randint(1, 1420420420))

for id in character_ids:
	first_name, last_name = get_character_data(id)
	if first_name and last_name:
		execute_query(connection, insert_character_query, (first_name, last_name))


execute_query(connection, insert_character_query, ('Takamassa', 'Nomuro'))
execute_query(connection, insert_character_query, ('Shiki', 'Tafeio'))
execute_query(connection, insert_character_query, ('Tekuro', 'Nahora'))
execute_query(connection, insert_character_query, ('Fabio', 'Makita'))
execute_query(connection, insert_character_query, ('Teshoko', 'Abola'))
execute_query(connection, insert_character_query, ('Tebato', 'Nakara'))
execute_query(connection, insert_character_query, ('Kryo', 'Kodigo'))
execute_query(connection, insert_character_query, ('Akita', 'Aresposta'))
execute_query(connection, insert_character_query, ('Konto', 'Osdigito'))
execute_query(connection, insert_character_query, ('Kataka', 'Kokinho'))
execute_query(connection, insert_character_query, ('Miapi', 'Ka'))

if connection.is_connected():
	connection.close()
	print("Conexão ao MySQL encerrada")
